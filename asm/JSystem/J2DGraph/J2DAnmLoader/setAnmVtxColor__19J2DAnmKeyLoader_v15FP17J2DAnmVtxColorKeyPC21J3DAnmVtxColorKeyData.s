lbl_80309984:
/* 80309984  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80309988  7C 08 02 A6 */	mflr r0
/* 8030998C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80309990  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80309994  93 C1 00 08 */	stw r30, 8(r1)
/* 80309998  7C 9E 23 78 */	mr r30, r4
/* 8030999C  7C BF 2B 78 */	mr r31, r5
/* 803099A0  A8 05 00 0A */	lha r0, 0xa(r5)
/* 803099A4  B0 04 00 06 */	sth r0, 6(r4)
/* 803099A8  88 05 00 08 */	lbz r0, 8(r5)
/* 803099AC  98 04 00 04 */	stb r0, 4(r4)
/* 803099B0  C0 02 C8 F8 */	lfs f0, lit_1581(r2)
/* 803099B4  D0 04 00 08 */	stfs f0, 8(r4)
/* 803099B8  A0 05 00 0C */	lhz r0, 0xc(r5)
/* 803099BC  B0 04 00 10 */	sth r0, 0x10(r4)
/* 803099C0  A0 05 00 0E */	lhz r0, 0xe(r5)
/* 803099C4  B0 04 00 12 */	sth r0, 0x12(r4)
/* 803099C8  7F E3 FB 78 */	mr r3, r31
/* 803099CC  80 85 00 18 */	lwz r4, 0x18(r5)
/* 803099D0  48 00 0B 31 */	bl func_8030A500
/* 803099D4  90 7E 00 24 */	stw r3, 0x24(r30)
/* 803099D8  7F E3 FB 78 */	mr r3, r31
/* 803099DC  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 803099E0  48 00 0B 21 */	bl func_8030A500
/* 803099E4  90 7E 00 28 */	stw r3, 0x28(r30)
/* 803099E8  7F E3 FB 78 */	mr r3, r31
/* 803099EC  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 803099F0  48 00 0A F9 */	bl func_8030A4E8
/* 803099F4  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803099F8  7F E3 FB 78 */	mr r3, r31
/* 803099FC  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80309A00  48 00 0A E9 */	bl func_8030A4E8
/* 80309A04  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80309A08  7F E3 FB 78 */	mr r3, r31
/* 80309A0C  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 80309A10  4B FE A8 B1 */	bl func_802F42C0
/* 80309A14  90 7E 00 1C */	stw r3, 0x1c(r30)
/* 80309A18  7F E3 FB 78 */	mr r3, r31
/* 80309A1C  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 80309A20  4B FE A8 A1 */	bl func_802F42C0
/* 80309A24  90 7E 00 20 */	stw r3, 0x20(r30)
/* 80309A28  7F E3 FB 78 */	mr r3, r31
/* 80309A2C  80 9F 00 30 */	lwz r4, 0x30(r31)
/* 80309A30  48 00 0B 19 */	bl func_8030A548
/* 80309A34  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 80309A38  7F E3 FB 78 */	mr r3, r31
/* 80309A3C  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 80309A40  48 00 0B 09 */	bl func_8030A548
/* 80309A44  90 7E 00 30 */	stw r3, 0x30(r30)
/* 80309A48  7F E3 FB 78 */	mr r3, r31
/* 80309A4C  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 80309A50  48 00 0A F9 */	bl func_8030A548
/* 80309A54  90 7E 00 34 */	stw r3, 0x34(r30)
/* 80309A58  7F E3 FB 78 */	mr r3, r31
/* 80309A5C  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 80309A60  48 00 0A E9 */	bl func_8030A548
/* 80309A64  90 7E 00 38 */	stw r3, 0x38(r30)
/* 80309A68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80309A6C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80309A70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80309A74  7C 08 03 A6 */	mtlr r0
/* 80309A78  38 21 00 10 */	addi r1, r1, 0x10
/* 80309A7C  4E 80 00 20 */	blr 
