lbl_8005364C:
/* 8005364C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80053650  7C 08 02 A6 */	mflr r0
/* 80053654  90 01 00 34 */	stw r0, 0x34(r1)
/* 80053658  39 61 00 30 */	addi r11, r1, 0x30
/* 8005365C  48 30 EB 75 */	bl _savegpr_26
/* 80053660  7C 7F 1B 78 */	mr r31, r3
/* 80053664  38 60 00 00 */	li r3, 0
/* 80053668  38 80 00 09 */	li r4, 9
/* 8005366C  38 A0 00 01 */	li r5, 1
/* 80053670  38 C0 00 03 */	li r6, 3
/* 80053674  38 E0 00 00 */	li r7, 0
/* 80053678  48 30 7F 4D */	bl GXSetVtxAttrFmt
/* 8005367C  48 30 7F 11 */	bl GXClearVtxDesc
/* 80053680  38 60 00 09 */	li r3, 9
/* 80053684  38 80 00 01 */	li r4, 1
/* 80053688  48 30 78 31 */	bl GXSetVtxDesc
/* 8005368C  83 7F 00 08 */	lwz r27, 8(r31)
/* 80053690  3B 80 00 00 */	li r28, 0
/* 80053694  3B C0 00 00 */	li r30, 0
/* 80053698  3B 40 00 00 */	li r26, 0
/* 8005369C  48 00 01 3C */	b lbl_800537D8
lbl_800536A0:
/* 800536A0  88 1B 00 00 */	lbz r0, 0(r27)
/* 800536A4  28 00 00 00 */	cmplwi r0, 0
/* 800536A8  41 82 01 28 */	beq lbl_800537D0
/* 800536AC  88 1B 00 01 */	lbz r0, 1(r27)
/* 800536B0  2C 00 00 00 */	cmpwi r0, 0
/* 800536B4  41 82 00 10 */	beq lbl_800536C4
/* 800536B8  38 7B 00 24 */	addi r3, r27, 0x24
/* 800536BC  7F 44 D3 78 */	mr r4, r26
/* 800536C0  48 30 AD E1 */	bl GXLoadTlut
lbl_800536C4:
/* 800536C4  38 7B 00 04 */	addi r3, r27, 4
/* 800536C8  7F 84 E3 78 */	mr r4, r28
/* 800536CC  48 30 AD 49 */	bl GXLoadTexObj
/* 800536D0  38 60 00 00 */	li r3, 0
/* 800536D4  3B BC 00 0D */	addi r29, r28, 0xd
/* 800536D8  7F A4 EB 78 */	mr r4, r29
/* 800536DC  38 A0 00 01 */	li r5, 1
/* 800536E0  38 C0 00 04 */	li r6, 4
/* 800536E4  38 E0 00 00 */	li r7, 0
/* 800536E8  48 30 7E DD */	bl GXSetVtxAttrFmt
/* 800536EC  7F A3 EB 78 */	mr r3, r29
/* 800536F0  38 80 00 01 */	li r4, 1
/* 800536F4  48 30 77 C5 */	bl GXSetVtxDesc
/* 800536F8  80 1B 00 30 */	lwz r0, 0x30(r27)
/* 800536FC  90 01 00 08 */	stw r0, 8(r1)
/* 80053700  3B BC 00 01 */	addi r29, r28, 1
/* 80053704  7F A3 EB 78 */	mr r3, r29
/* 80053708  38 81 00 08 */	addi r4, r1, 8
/* 8005370C  48 30 BC 71 */	bl GXSetTevColor
/* 80053710  7F 83 E3 78 */	mr r3, r28
/* 80053714  38 80 00 01 */	li r4, 1
/* 80053718  38 BC 00 04 */	addi r5, r28, 4
/* 8005371C  38 C0 00 3C */	li r6, 0x3c
/* 80053720  38 E0 00 00 */	li r7, 0
/* 80053724  39 00 00 7D */	li r8, 0x7d
/* 80053728  48 30 84 55 */	bl GXSetTexCoordGen2
/* 8005372C  7F 83 E3 78 */	mr r3, r28
/* 80053730  7F 84 E3 78 */	mr r4, r28
/* 80053734  7F 85 E3 78 */	mr r5, r28
/* 80053738  38 C0 00 FF */	li r6, 0xff
/* 8005373C  48 30 BF B9 */	bl GXSetTevOrder
/* 80053740  7F 83 E3 78 */	mr r3, r28
/* 80053744  38 80 00 0F */	li r4, 0xf
/* 80053748  38 BE 00 02 */	addi r5, r30, 2
/* 8005374C  38 C0 00 08 */	li r6, 8
/* 80053750  2C 1C 00 00 */	cmpwi r28, 0
/* 80053754  38 E0 00 0F */	li r7, 0xf
/* 80053758  41 82 00 08 */	beq lbl_80053760
/* 8005375C  38 E0 00 00 */	li r7, 0
lbl_80053760:
/* 80053760  48 30 BA C5 */	bl GXSetTevColorIn
/* 80053764  7F 83 E3 78 */	mr r3, r28
/* 80053768  38 80 00 00 */	li r4, 0
/* 8005376C  38 A0 00 00 */	li r5, 0
/* 80053770  38 C0 00 00 */	li r6, 0
/* 80053774  38 E0 00 01 */	li r7, 1
/* 80053778  39 00 00 00 */	li r8, 0
/* 8005377C  48 30 BB 31 */	bl GXSetTevColorOp
/* 80053780  7F 83 E3 78 */	mr r3, r28
/* 80053784  38 80 00 07 */	li r4, 7
/* 80053788  7F A5 EB 78 */	mr r5, r29
/* 8005378C  38 C0 00 04 */	li r6, 4
/* 80053790  2C 1C 00 00 */	cmpwi r28, 0
/* 80053794  38 E0 00 07 */	li r7, 7
/* 80053798  41 82 00 08 */	beq lbl_800537A0
/* 8005379C  38 E0 00 00 */	li r7, 0
lbl_800537A0:
/* 800537A0  48 30 BA C9 */	bl GXSetTevAlphaIn
/* 800537A4  7F 83 E3 78 */	mr r3, r28
/* 800537A8  38 80 00 00 */	li r4, 0
/* 800537AC  38 A0 00 00 */	li r5, 0
/* 800537B0  38 C0 00 00 */	li r6, 0
/* 800537B4  38 E0 00 01 */	li r7, 1
/* 800537B8  39 00 00 00 */	li r8, 0
/* 800537BC  48 30 BB 59 */	bl GXSetTevAlphaOp
/* 800537C0  3B 9C 00 01 */	addi r28, r28, 1
/* 800537C4  2C 1C 00 03 */	cmpwi r28, 3
/* 800537C8  3B DE 00 02 */	addi r30, r30, 2
/* 800537CC  40 80 00 18 */	bge lbl_800537E4
lbl_800537D0:
/* 800537D0  3B 7B 00 44 */	addi r27, r27, 0x44
/* 800537D4  3B 5A 00 01 */	addi r26, r26, 1
lbl_800537D8:
/* 800537D8  88 1F 00 04 */	lbz r0, 4(r31)
/* 800537DC  7C 1A 00 00 */	cmpw r26, r0
/* 800537E0  41 80 FE C0 */	blt lbl_800536A0
lbl_800537E4:
/* 800537E4  2C 1C 00 00 */	cmpwi r28, 0
/* 800537E8  41 82 01 DC */	beq lbl_800539C4
/* 800537EC  38 60 00 00 */	li r3, 0
/* 800537F0  48 30 A3 41 */	bl GXSetNumChans
/* 800537F4  57 83 06 3E */	clrlwi r3, r28, 0x18
/* 800537F8  48 30 86 05 */	bl GXSetNumTexGens
/* 800537FC  57 83 06 3E */	clrlwi r3, r28, 0x18
/* 80053800  48 30 C0 91 */	bl GXSetNumTevStages
/* 80053804  38 60 00 01 */	li r3, 1
/* 80053808  38 80 00 04 */	li r4, 4
/* 8005380C  38 A0 00 05 */	li r5, 5
/* 80053810  38 C0 00 0F */	li r6, 0xf
/* 80053814  48 30 C3 DD */	bl GXSetBlendMode
/* 80053818  38 60 00 80 */	li r3, 0x80
/* 8005381C  38 80 00 00 */	li r4, 0
/* 80053820  38 A0 00 04 */	li r5, 4
/* 80053824  48 30 8F 41 */	bl GXBegin
/* 80053828  A8 9F 00 0E */	lha r4, 0xe(r31)
/* 8005382C  A8 1F 00 0C */	lha r0, 0xc(r31)
/* 80053830  3C 60 CC 01 */	lis r3, 0xCC01 /* 0xCC008000@ha */
/* 80053834  B0 03 80 00 */	sth r0, 0x8000(r3)  /* 0xCC008000@l */
/* 80053838  B0 83 80 00 */	sth r4, -0x8000(r3)
/* 8005383C  38 00 00 00 */	li r0, 0
/* 80053840  B0 03 80 00 */	sth r0, -0x8000(r3)
/* 80053844  80 9F 00 08 */	lwz r4, 8(r31)
/* 80053848  38 A0 00 00 */	li r5, 0
/* 8005384C  48 00 00 28 */	b lbl_80053874
lbl_80053850:
/* 80053850  88 04 00 00 */	lbz r0, 0(r4)
/* 80053854  28 00 00 00 */	cmplwi r0, 0
/* 80053858  41 82 00 14 */	beq lbl_8005386C
/* 8005385C  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 80053860  C0 24 00 34 */	lfs f1, 0x34(r4)
/* 80053864  D0 23 80 00 */	stfs f1, -0x8000(r3)
/* 80053868  D0 03 80 00 */	stfs f0, -0x8000(r3)
lbl_8005386C:
/* 8005386C  38 84 00 44 */	addi r4, r4, 0x44
/* 80053870  38 A5 00 01 */	addi r5, r5, 1
lbl_80053874:
/* 80053874  88 1F 00 04 */	lbz r0, 4(r31)
/* 80053878  7C 05 00 00 */	cmpw r5, r0
/* 8005387C  41 80 FF D4 */	blt lbl_80053850
/* 80053880  A8 9F 00 0E */	lha r4, 0xe(r31)
/* 80053884  A8 1F 00 10 */	lha r0, 0x10(r31)
/* 80053888  3C 60 CC 01 */	lis r3, 0xCC01 /* 0xCC008000@ha */
/* 8005388C  B0 03 80 00 */	sth r0, 0x8000(r3)  /* 0xCC008000@l */
/* 80053890  B0 83 80 00 */	sth r4, -0x8000(r3)
/* 80053894  38 00 00 00 */	li r0, 0
/* 80053898  B0 03 80 00 */	sth r0, -0x8000(r3)
/* 8005389C  80 9F 00 08 */	lwz r4, 8(r31)
/* 800538A0  38 A0 00 00 */	li r5, 0
/* 800538A4  48 00 00 30 */	b lbl_800538D4
lbl_800538A8:
/* 800538A8  88 04 00 00 */	lbz r0, 0(r4)
/* 800538AC  28 00 00 00 */	cmplwi r0, 0
/* 800538B0  41 82 00 1C */	beq lbl_800538CC
/* 800538B4  C0 44 00 38 */	lfs f2, 0x38(r4)
/* 800538B8  C0 24 00 34 */	lfs f1, 0x34(r4)
/* 800538BC  C0 04 00 3C */	lfs f0, 0x3c(r4)
/* 800538C0  EC 01 00 2A */	fadds f0, f1, f0
/* 800538C4  D0 03 80 00 */	stfs f0, -0x8000(r3)
/* 800538C8  D0 43 80 00 */	stfs f2, -0x8000(r3)
lbl_800538CC:
/* 800538CC  38 84 00 44 */	addi r4, r4, 0x44
/* 800538D0  38 A5 00 01 */	addi r5, r5, 1
lbl_800538D4:
/* 800538D4  88 1F 00 04 */	lbz r0, 4(r31)
/* 800538D8  7C 05 00 00 */	cmpw r5, r0
/* 800538DC  41 80 FF CC */	blt lbl_800538A8
/* 800538E0  A8 9F 00 12 */	lha r4, 0x12(r31)
/* 800538E4  A8 1F 00 10 */	lha r0, 0x10(r31)
/* 800538E8  3C 60 CC 01 */	lis r3, 0xCC01 /* 0xCC008000@ha */
/* 800538EC  B0 03 80 00 */	sth r0, 0x8000(r3)  /* 0xCC008000@l */
/* 800538F0  B0 83 80 00 */	sth r4, -0x8000(r3)
/* 800538F4  38 00 00 00 */	li r0, 0
/* 800538F8  B0 03 80 00 */	sth r0, -0x8000(r3)
/* 800538FC  80 9F 00 08 */	lwz r4, 8(r31)
/* 80053900  38 A0 00 00 */	li r5, 0
/* 80053904  48 00 00 38 */	b lbl_8005393C
lbl_80053908:
/* 80053908  88 04 00 00 */	lbz r0, 0(r4)
/* 8005390C  28 00 00 00 */	cmplwi r0, 0
/* 80053910  41 82 00 24 */	beq lbl_80053934
/* 80053914  C0 24 00 38 */	lfs f1, 0x38(r4)
/* 80053918  C0 04 00 40 */	lfs f0, 0x40(r4)
/* 8005391C  EC 41 00 2A */	fadds f2, f1, f0
/* 80053920  C0 24 00 34 */	lfs f1, 0x34(r4)
/* 80053924  C0 04 00 3C */	lfs f0, 0x3c(r4)
/* 80053928  EC 01 00 2A */	fadds f0, f1, f0
/* 8005392C  D0 03 80 00 */	stfs f0, -0x8000(r3)
/* 80053930  D0 43 80 00 */	stfs f2, -0x8000(r3)
lbl_80053934:
/* 80053934  38 84 00 44 */	addi r4, r4, 0x44
/* 80053938  38 A5 00 01 */	addi r5, r5, 1
lbl_8005393C:
/* 8005393C  88 1F 00 04 */	lbz r0, 4(r31)
/* 80053940  7C 05 00 00 */	cmpw r5, r0
/* 80053944  41 80 FF C4 */	blt lbl_80053908
/* 80053948  A8 9F 00 12 */	lha r4, 0x12(r31)
/* 8005394C  A8 1F 00 0C */	lha r0, 0xc(r31)
/* 80053950  3C 60 CC 01 */	lis r3, 0xCC01 /* 0xCC008000@ha */
/* 80053954  B0 03 80 00 */	sth r0, 0x8000(r3)  /* 0xCC008000@l */
/* 80053958  B0 83 80 00 */	sth r4, -0x8000(r3)
/* 8005395C  38 00 00 00 */	li r0, 0
/* 80053960  B0 03 80 00 */	sth r0, -0x8000(r3)
/* 80053964  80 9F 00 08 */	lwz r4, 8(r31)
/* 80053968  38 A0 00 00 */	li r5, 0
/* 8005396C  48 00 00 30 */	b lbl_8005399C
lbl_80053970:
/* 80053970  88 04 00 00 */	lbz r0, 0(r4)
/* 80053974  28 00 00 00 */	cmplwi r0, 0
/* 80053978  41 82 00 1C */	beq lbl_80053994
/* 8005397C  C0 24 00 38 */	lfs f1, 0x38(r4)
/* 80053980  C0 04 00 40 */	lfs f0, 0x40(r4)
/* 80053984  EC 01 00 2A */	fadds f0, f1, f0
/* 80053988  C0 24 00 34 */	lfs f1, 0x34(r4)
/* 8005398C  D0 23 80 00 */	stfs f1, -0x8000(r3)
/* 80053990  D0 03 80 00 */	stfs f0, -0x8000(r3)
lbl_80053994:
/* 80053994  38 84 00 44 */	addi r4, r4, 0x44
/* 80053998  38 A5 00 01 */	addi r5, r5, 1
lbl_8005399C:
/* 8005399C  88 1F 00 04 */	lbz r0, 4(r31)
/* 800539A0  7C 05 00 00 */	cmpw r5, r0
/* 800539A4  41 80 FF CC */	blt lbl_80053970
/* 800539A8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 800539AC  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 800539B0  80 63 5F 50 */	lwz r3, 0x5f50(r3)
/* 800539B4  81 83 00 00 */	lwz r12, 0(r3)
/* 800539B8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 800539BC  7D 89 03 A6 */	mtctr r12
/* 800539C0  4E 80 04 21 */	bctrl 
lbl_800539C4:
/* 800539C4  39 61 00 30 */	addi r11, r1, 0x30
/* 800539C8  48 30 E8 55 */	bl _restgpr_26
/* 800539CC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800539D0  7C 08 03 A6 */	mtlr r0
/* 800539D4  38 21 00 30 */	addi r1, r1, 0x30
/* 800539D8  4E 80 00 20 */	blr 
