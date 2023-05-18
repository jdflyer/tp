//
// Generated By: dol2asm
// Translation Unit: J3DShapeFactory
//

#include "JSystem/J3DGraphLoader/J3DShapeFactory.h"
#include "JSystem/J3DGraphBase/J3DShape.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSupport.h"
#include "dolphin/os/OS.h"
#include "dolphin/types.h"
#include "global.h"

//
// Forward References:
//

//
// External References:
//

extern "C" J3DShapeInitData* func_80336764(const void*,
                                           const void*);  // JSUConvertOffsetToPtr<J3DShapeInitData>
extern "C" u16* func_8033677C(const void*, const void*);  // JSUConvertOffsetToPtr<u16>

//
// Declarations:
//

/* 80337350-80337400 331C90 00B0+00 0/0 2/2 0/0 .text __ct__15J3DShapeFactoryFRC13J3DShapeBlock */
J3DShapeFactory::J3DShapeFactory(J3DShapeBlock const& block) {
    // mShapeInitData = JSUConvertOffsetToPtr<J3DShapeInitData>(&block, block.mShapeInitData);
    mShapeInitData = func_80336764(&block, block.mShapeInitData);
    // mIndexTable = JSUConvertOffsetToPtr<u16>(&block, block.mIndexTable);
    mIndexTable = func_8033677C(&block, block.mIndexTable);
    mVtxDescList = JSUConvertOffsetToPtr<GXVtxDescList>(&block, block.mVtxDescList);
    // mMtxTable = JSUConvertOffsetToPtr<u16>(&block, block.mMtxTable);
    mMtxTable = func_8033677C(&block, block.mMtxTable);
    mDisplayListData = JSUConvertOffsetToPtr<u8>(&block, block.mDisplayListData);
    mMtxInitData = JSUConvertOffsetToPtr<J3DShapeMtxInitData>(&block, block.mMtxInitData);
    mDrawInitData = JSUConvertOffsetToPtr<J3DShapeDrawInitData>(&block, block.mDrawInitData);
    mVcdVatCmdBuffer = NULL;
}

/* 80337400-803375BC 331D40 01BC+00 0/0 1/1 0/0 .text
 * create__15J3DShapeFactoryFiUlP14_GXVtxDescList               */
J3DShape* J3DShapeFactory::create(int no, u32 flag, GXVtxDescList* vtxDesc) {
    J3DShape* shape = new J3DShape;
    shape->mMtxGroupNum = getMtxGroupNum(no);
    shape->mRadius = getRadius(no);
    shape->mVtxDesc = getVtxDescList(no);
    shape->mShapeMtx = new J3DShapeMtx*[shape->mMtxGroupNum];
    shape->mShapeDraw = new J3DShapeDraw*[shape->mMtxGroupNum];
    shape->mMin = getMin(no);
    shape->mMax = getMax(no);
    shape->mVcdVatCmd = mVcdVatCmdBuffer + no * J3DShape::kVcdVatDLSize;

    for (s32 i = 0; i < shape->mMtxGroupNum; i++) {
        shape->mShapeMtx[i] = newShapeMtx(flag, no, i);
        shape->mShapeDraw[i] = newShapeDraw(no, i);
    }

    shape->mIndex = no;
    return shape;
}

static inline u32 getMdlDataFlag_MtxLoadType(u32 flag) {
    return flag & 0x10;
}

enum {
    J3DMdlDataFlag_ConcatView = 0x10,
};

enum {
    J3DShapeMtxType_Mtx = 0x00,
    J3DShapeMtxType_BBoard = 0x01,
    J3DShapeMtxType_YBBoard = 0x02,
    J3DShapeMtxType_Multi = 0x03,
};

/* 803375BC-8033784C 331EFC 0290+00 1/1 0/0 0/0 .text newShapeMtx__15J3DShapeFactoryCFUlii */
J3DShapeMtx* J3DShapeFactory::newShapeMtx(u32 flag, int shapeNo, int mtxGroupNo) const {
    J3DShapeMtx* ret = NULL;
    const J3DShapeInitData& shapeInitData = mShapeInitData[mIndexTable[shapeNo]];
    const J3DShapeMtxInitData& mtxInitData =
        (&mMtxInitData[shapeInitData.mMtxInitDataIndex])[mtxGroupNo];

    switch (getMdlDataFlag_MtxLoadType(flag)) {
    case J3DMdlDataFlag_ConcatView:
        switch (shapeInitData.mShapeMtxType) {
        case J3DShapeMtxType_Mtx:
            ret = new J3DShapeMtxConcatView(mtxInitData.mUseMtxIndex);
            break;
        case J3DShapeMtxType_BBoard:
            ret = new J3DShapeMtxBBoardConcatView(mtxInitData.mUseMtxIndex);
            break;
        case J3DShapeMtxType_YBBoard:
            ret = new J3DShapeMtxYBBoardConcatView(mtxInitData.mUseMtxIndex);
            break;
        case J3DShapeMtxType_Multi:
            ret = new J3DShapeMtxMultiConcatView(mtxInitData.mUseMtxIndex, mtxInitData.mUseMtxCount,
                                                 &mMtxTable[mtxInitData.mFirstUseMtxIndex]);
            break;
        default:
            OSReport("WRONG SHAPE MATRIX TYPE (J3DModelInit.cpp)\n");
            break;
        }
        break;

    case 0:
    default:
        switch (shapeInitData.mShapeMtxType) {
        case J3DShapeMtxType_Mtx:
        case J3DShapeMtxType_BBoard:
        case J3DShapeMtxType_YBBoard:
            ret = new J3DShapeMtx(mtxInitData.mUseMtxIndex);
            break;
        case J3DShapeMtxType_Multi:
            ret = new J3DShapeMtxMulti(mtxInitData.mUseMtxIndex, mtxInitData.mUseMtxCount,
                                       &mMtxTable[mtxInitData.mFirstUseMtxIndex]);
            break;
        default:
            OSReport("WRONG SHAPE MATRIX TYPE (J3DModelInit.cpp)\n");
            break;
        }
        break;
    }

    return ret;
}

/* 8033784C-803378D8 33218C 008C+00 1/1 0/0 0/0 .text            newShapeDraw__15J3DShapeFactoryCFii
 */
J3DShapeDraw* J3DShapeFactory::newShapeDraw(int shapeNo, int mtxGroupNo) const {
    const J3DShapeInitData& shapeInitData = mShapeInitData[mIndexTable[shapeNo]];
    const J3DShapeDrawInitData& drawInitData =
        (&mDrawInitData[shapeInitData.mDrawInitDataIndex])[mtxGroupNo];
    return new J3DShapeDraw(&mDisplayListData[drawInitData.mDisplayListIndex],
                            drawInitData.mDisplayListSize);
}

/* 803378D8-80337944 332218 006C+00 0/0 1/1 0/0 .text allocVcdVatCmdBuffer__15J3DShapeFactoryFUl
 */
void J3DShapeFactory::allocVcdVatCmdBuffer(u32 count) {
    mVcdVatCmdBuffer = new (0x20) u8[J3DShape::kVcdVatDLSize * count];
    for (u32 i = 0; i < (J3DShape::kVcdVatDLSize * count) / 4; i++)
        ((u32*)mVcdVatCmdBuffer)[i] = 0;
}

/* 80337944-803379D8 332284 0094+00 0/0 1/1 0/0 .text            calcSize__15J3DShapeFactoryFiUl */
s32 J3DShapeFactory::calcSize(int shapeNo, u32 flag) {
    s32 size = 0x68;

    s32 mtxGroupNo = getMtxGroupNum(shapeNo);
    size += mtxGroupNo * 4;
    size += mtxGroupNo * 4;

    for (u32 i = 0; i < mtxGroupNo; i++) {
        s32 shapeMtxSize = calcSizeShapeMtx(flag, shapeNo, i);
        size += shapeMtxSize;
        size += 0x0C;
    }

    return size;
}

/* 803379D8-803379E8 332318 0010+00 0/0 1/1 0/0 .text
 * calcSizeVcdVatCmdBuffer__15J3DShapeFactoryFUl                */
s32 J3DShapeFactory::calcSizeVcdVatCmdBuffer(u32 count) {
    return ALIGN_NEXT(count * J3DShape::kVcdVatDLSize, 0x20);
}

/* 803379E8-80337AE0 332328 00F8+00 1/1 0/0 0/0 .text calcSizeShapeMtx__15J3DShapeFactoryCFUlii */
s32 J3DShapeFactory::calcSizeShapeMtx(u32 flag, int shapeNo, int mtxGroupNo) const {
    const J3DShapeInitData& shapeInitData = mShapeInitData[mIndexTable[shapeNo]];
    u32 ret = 0;

    u32 mtxLoadType = getMdlDataFlag_MtxLoadType(flag);
    switch (mtxLoadType) {
    case J3DMdlDataFlag_ConcatView:
        switch (shapeInitData.mShapeMtxType) {
        case J3DShapeMtxType_Mtx:
            ret = 0x08;
            break;
        case J3DShapeMtxType_BBoard:
            ret = 0x08;
            break;
        case J3DShapeMtxType_YBBoard:
            ret = 0x08;
            break;
        case J3DShapeMtxType_Multi:
            ret = 0x10;
            break;
        default:
            OSReport("WRONG SHAPE MATRIX TYPE (J3DModelInit.cpp)\n");
        }
        break;

    case 0:
    default:
        switch (shapeInitData.mShapeMtxType) {
        case J3DShapeMtxType_Mtx:
        case J3DShapeMtxType_BBoard:
        case J3DShapeMtxType_YBBoard:
            ret = 0x08;
            break;
        case J3DShapeMtxType_Multi:
            ret = 0x10;
            break;
        default:
            OSReport("WRONG SHAPE MATRIX TYPE (J3DModelInit.cpp)\n");
        }
        break;
    }

    return ret;
}