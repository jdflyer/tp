lbl_809966B0:
/* 809966B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809966B4  7C 08 02 A6 */	mflr r0
/* 809966B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 809966BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809966C0  7C 7F 1B 79 */	or. r31, r3, r3
/* 809966C4  41 82 00 1C */	beq lbl_809966E0
/* 809966C8  3C A0 80 9A */	lis r5, __vt__11J3DTexNoAnm@ha /* 0x80999EC4@ha */
/* 809966CC  38 05 9E C4 */	addi r0, r5, __vt__11J3DTexNoAnm@l /* 0x80999EC4@l */
/* 809966D0  90 1F 00 00 */	stw r0, 0(r31)
/* 809966D4  7C 80 07 35 */	extsh. r0, r4
/* 809966D8  40 81 00 08 */	ble lbl_809966E0
/* 809966DC  4B 93 86 61 */	bl __dl__FPv
lbl_809966E0:
/* 809966E0  7F E3 FB 78 */	mr r3, r31
/* 809966E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809966E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809966EC  7C 08 03 A6 */	mtlr r0
/* 809966F0  38 21 00 10 */	addi r1, r1, 0x10
/* 809966F4  4E 80 00 20 */	blr 
