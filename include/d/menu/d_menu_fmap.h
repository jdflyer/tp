#ifndef D_MENU_D_MENU_FMAP_H
#define D_MENU_D_MENU_FMAP_H

#include "SSystem/SComponent/c_xyz.h"
#include "d/msg/d_msg_flow.h"
#include "dolphin/types.h"

struct CSTControl;
class J2DAnmTextureSRTKey;
class JKRArchive;
class JKRExpHeap;
class JKRHeap;
struct STControl;
class dMenu_Fmap_stage_data_c;
class dMenu_Fmap_world_data_c;
class dMenu_Fmap_region_data_c;
class dMenu_Fmap2DBack_c;
class dMenu_Fmap2DTop_c;
class dMenu_FmapMap_c;
class mDoDvdThd_mountArchive_c;
struct RoomData_c;

class dMenu_Fmap_c {
public:
    /* 801C66E4 */ dMenu_Fmap_c(JKRExpHeap*, STControl*, CSTControl*, u8, u8, u8, f32, f32, u8);
    /* 801C6D64 */ void _create();
    /* 801C74A4 */ void _delete();
    /* 801C74A8 */ void _move();
    /* 801C7650 */ void _draw();
    /* 801C77F0 */ u8 getNextStatus(u8*);
    /* 801C7AFC */ bool isSync();
    /* 801C7B24 */ void all_map_init();
    /* 801C7C2C */ void all_map_proc();
    /* 801C8230 */ void zoom_all_to_region_init();
    /* 801C8308 */ void zoom_all_to_region_proc();
    /* 801C83E0 */ void zoom_region_to_all_init();
    /* 801C8438 */ void zoom_region_to_all_proc();
    /* 801C8518 */ void region_map_init();
    /* 801C8600 */ void region_map_proc();
    /* 801C8B00 */ void to_portal_warp_map_init();
    /* 801C8B0C */ void to_portal_warp_map_proc();
    /* 801C8B48 */ void portal_warp_map_init();
    /* 801C8C0C */ void portal_warp_map_proc();
    /* 801C90A4 */ void portal_warp_select_init();
    /* 801C90A8 */ void portal_warp_select_proc();
    /* 801C91D8 */ void portal_warp_forbid_init();
    /* 801C9238 */ void portal_warp_forbid_proc();
    /* 801C92A4 */ void zoom_region_to_spot_init();
    /* 801C9304 */ void zoom_region_to_spot_proc();
    /* 801C93CC */ void zoom_spot_to_region_init();
    /* 801C9428 */ void zoom_spot_to_region_proc();
    /* 801C950C */ void spot_map_init();
    /* 801C9618 */ void spot_map_proc();
    /* 801C9A4C */ void portal_demo1_init();
    /* 801C9B64 */ void portal_demo1_move();
    /* 801C9C7C */ void portal_demo2_init();
    /* 801C9CC8 */ void portal_demo2_move();
    /* 801C9D60 */ void portal_demo3_init();
    /* 801C9DB4 */ void portal_demo3_move();
    /* 801C9EB8 */ void portal_demo4_init();
    /* 801C9F14 */ void portal_demo4_move();
    /* 801C9F7C */ void portal_demo5_init();
    /* 801C9FBC */ void portal_demo5_move();
    /* 801CA158 */ void portal_demo6_init();
    /* 801CA15C */ void portal_demo6_move();
    /* 801CA1E8 */ void yamiboss_demo1_init();
    /* 801CA2F4 */ void yamiboss_demo1_move();
    /* 801CA34C */ void yamiboss_demo2_init();
    /* 801CA35C */ void yamiboss_demo2_move();
    /* 801CA40C */ void yamiboss_demo3_init();
    /* 801CA410 */ void yamiboss_demo3_move();
    /* 801CA468 */ void yamiboss_demo4_init();
    /* 801CA4C0 */ void yamiboss_demo4_move();
    /* 801CA544 */ void yamiboss_demo5_init();
    /* 801CA548 */ void yamiboss_demo5_move();
    /* 801CA5CC */ void light_demo1_init();
    /* 801CA7A4 */ void light_demo1_move();
    /* 801CA7E0 */ void light_demo2_init();
    /* 801CA814 */ void light_demo2_move();
    /* 801CA874 */ void table_demo1_init();
    /* 801CA9B4 */ void table_demo1_move();
    /* 801CAA78 */ void table_demo2_init();
    /* 801CAABC */ void table_demo2_move();
    /* 801CAB88 */ void table_demo3_init();
    /* 801CABD0 */ void table_demo3_move();
    /* 801CAC30 */ void howl_demo1_init();
    /* 801CAC7C */ void howl_demo1_move();
    /* 801CAD48 */ void howl_demo2_init();
    /* 801CAD54 */ void howl_demo2_move();
    /* 801CAD9C */ void howl_demo3_init();
    /* 801CADA0 */ void howl_demo3_move();
    /* 801CADC4 */ bool isOpen();
    /* 801CB038 */ bool isClose();
    /* 801CB1DC */ u8 getProcess();
    /* 801CB200 */ u8 getRegionCursor();
    /* 801CB230 */ u8 getStageCursor();
    /* 801CB260 */ f32 getStageTransX();
    /* 801CB290 */ f32 getStageTransZ();
    /* 801CB2C0 */ void isRoomCheck(int, int);
    /* 801CB570 */ void checkStRoomData();
    /* 801CB664 */ void talkButton();
    /* 801CB6D0 */ void setProcess(u8);
    /* 801CB6E0 */ void setFlash(u8, bool);
    /* 801CB770 */ void readWorldData(u8);
    /* 801CB938 */ void readAreaData(u8, bool);
    /* 801CBF04 */ void readRoomData(char const*, dMenu_Fmap_stage_data_c*, void*, int, u8);
    /* 801CC094 */ void readFieldMapData(void**, char const*, bool, bool);
    /* 801CC2B0 */ void decodeFieldMapData();
    /* 801CC4EC */ void decodePortalData();
    /* 801CC51C */ void readRoomDzsData(void**, u32, char const*);
    /* 801CC61C */ void removeAreaData();
    /* 801CC7A8 */ void removeRoomData(dMenu_Fmap_stage_data_c*);
    /* 801CC85C */ void setTitleName(u32);
    /* 801CC880 */ void setAreaName(u32);
    /* 801CC8AC */ void setAreaNameZero();
    /* 801CC8DC */ void portalWarpMapMove(STControl*);
    /* 801CCA70 */ void onRoomDataBit(int);
    /* 801CCA98 */ void isRoomDataBit(int);
    /* 801CCAC4 */ void resetRoomDataBit();
    /* 801CCB08 */ void drawIcon(f32, bool);
    /* 801CD10C */ void drawIcon(u8, int);
    /* 801CCD98 */ void drawLightDropIcon();
    /* 801CCDDC */ void drawBatsumarkIcon();
    /* 801CCE04 */ void drawSnowmanIcon();
    /* 801CCE48 */ void drawGoldWolfIcon();
    /* 801CCE70 */ void drawCoachIcon();
    /* 801CCE98 */ void drawPlayEnterIcon();
    /* 801CCFB0 */ void checkDrawPortalIcon(int, int);
    /* 801CD000 */ void searchIcon(u8, int, f32*, f32*);
    /* 801CD210 */ void drawEnterIcon();
    /* 801CD254 */ void drawPortalIcon();
    /* 801CD2FC */ void getRegionStageNum(int);
    /* 801CD350 */ void getNowFmapRegionData();
    /* 801CD368 */ void getNowFmapStageData();
    /* 801CD380 */ void searchPortalStageID(char*);
    /* 801CD3F0 */ void drawDebugStage();
    /* 801CD460 */ void arrowPosInit();
    /* 801CD5CC */ void tableArrowPosInit(bool);
    /* 801CD770 */ void yamibossArrowPosInit();
    /* 801CD814 */ void howlArrowPosInit();
    /* 801CD8B4 */ void getHowlRegionID();
    /* 801CD92C */ void isLightVesselGet();
    /* 801CD95C */ void getPlayerPos2D();

    /* 801C6AC8 */ virtual ~dMenu_Fmap_c();

    static u8 MyClass[4];

private:
    /* 0x004 */ JKRHeap* mpHeap;
    /* 0x008 */ JKRExpHeap* mpTalkHeap;
    /* 0x00C */ STControl* mpStick;
    /* 0x010 */ CSTControl* mpCStick;
    /* 0x014 */ dMenu_Fmap2DBack_c* mpDraw2DBack;
    /* 0x018 */ dMenu_Fmap2DTop_c* mpDraw2DTop;
    /* 0x01C */ mDoDvdThd_mountArchive_c* field_0x1c;
    /* 0x020 */ dMenu_Fmap_world_data_c* mpWorldData;
    /* 0x024 */ dMenu_Fmap_region_data_c* field_0x24[8];
    /* 0x044 */ dMenu_Fmap_stage_data_c* field_0x44[8];
    /* 0x064 */ JKRArchive* field_0x64;
    /* 0x068 */ int field_0x68;
    /* 0x06C */ RoomData_c* field_0x6c[8];
    /* 0x08C */ void* field_0x8c;
    /* 0x090 */ void* field_0x90;
    /* 0x094 */ int field_0x94[8];
    /* 0x0B4 */ int field_0xb4;
    /* 0x0B8 */ dMenu_FmapMap_c* mpMenuFmapMap;
    /* 0x0BC */ int field_0xbc;
    /* 0x0C0 */ u8* field_0xc0;
    /* 0x0C4 */ dMsgFlow_c field_0xc4;
    /* 0x110 */ cXyz field_0x110;
    /* 0x11C */ f32 field_0x11c;
    /* 0x120 */ f32 field_0x120;
    /* 0x124 */ f32 field_0x124;
    /* 0x128 */ f32 field_0x128[8];
    /* 0x148 */ f32 field_0x148[8];
    /* 0x168 */ f32 field_0x168[8];
    /* 0x188 */ f32 field_0x188[8];
    /* 0x1A8 */ f32 field_0x1a8;
    /* 0x1AC */ f32 field_0x1ac[8];
    /* 0x1CC */ f32 field_0x1cc[8];
    /* 0x1EC */ f32 field_0x1ec;
    /* 0x1F0 */ f32 field_0x1f0;
    /* 0x1F4 */ f32 field_0x1f4;
    /* 0x1F8 */ int field_0x1f8[2];
    /* 0x200 */ int field_0x200;
    /* 0x204 */ int field_0x204;
    /* 0x208 */ int field_0x208;
    /* 0x20C */ int field_0x20c;
    /* 0x210 */ u16 field_0x210;
    /* 0x212 */ u16 field_0x212;
    /* 0x214 */ u16 field_0x214;
    /* 0x216 */ u16 field_0x216;
    /* 0x218 */ u16 field_0x218[8];
    /* 0x228 */ u16 field_0x228[20];
    /* 0x250 */ char field_0x250[8];
    /* 0x258 */ char field_0x258[8];
    /* 0x260 */ char field_0x260[20][8];
    /* 0x300 */ u8 mProcess;
    /* 0x301 */ u8 field_0x301;
    /* 0x302 */ u8 field_0x302;
    /* 0x303 */ u8 mDataNumMax;
    /* 0x304 */ u8 field_0x304;
    /* 0x305 */ u8 field_0x305;
    /* 0x306 */ u8 mSpotNum;
    /* 0x307 */ u8 field_0x307;
    /* 0x308 */ u8 field_0x308;
    /* 0x309 */ u8 field_0x309;
    /* 0x30A */ u8 field_0x30a;
    /* 0x30B */ u8 field_0x31b;
    /* 0x30C */ u8 field_0x31c;
    /* 0x30D */ u8 field_0x31d;
    /* 0x30E */ u8 field_0x30e;
    /* 0x30F */ u8 field_0x30f;
    /* 0x310 */ u8 field_0x310;
    /* 0x311 */ u8 field_0x311;
    /* 0x312 */ u8 field_0x312;
    /* 0x313 */ u8 field_0x313;
};

#endif /* D_MENU_D_MENU_FMAP_H */
