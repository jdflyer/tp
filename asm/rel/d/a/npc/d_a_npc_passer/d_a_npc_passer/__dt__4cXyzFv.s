lbl_80AA6654:
/* 80AA6654  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AA6658  7C 08 02 A6 */	mflr r0
/* 80AA665C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AA6660  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80AA6664  7C 7F 1B 79 */	or. r31, r3, r3
/* 80AA6668  41 82 00 10 */	beq lbl_80AA6678
/* 80AA666C  7C 80 07 35 */	extsh. r0, r4
/* 80AA6670  40 81 00 08 */	ble lbl_80AA6678
/* 80AA6674  4B 82 86 C9 */	bl __dl__FPv
lbl_80AA6678:
/* 80AA6678  7F E3 FB 78 */	mr r3, r31
/* 80AA667C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80AA6680  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AA6684  7C 08 03 A6 */	mtlr r0
/* 80AA6688  38 21 00 10 */	addi r1, r1, 0x10
/* 80AA668C  4E 80 00 20 */	blr 
