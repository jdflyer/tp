lbl_8023763C:
/* 8023763C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80237640  7C 08 02 A6 */	mflr r0
/* 80237644  90 01 00 14 */	stw r0, 0x14(r1)
/* 80237648  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023764C  7C 7F 1B 78 */	mr r31, r3
/* 80237650  48 00 0D F1 */	bl getSelectCursorPos__12dMsgObject_cFv
/* 80237654  88 1F 01 93 */	lbz r0, 0x193(r31)
/* 80237658  28 00 00 00 */	cmplwi r0, 0
/* 8023765C  41 82 00 10 */	beq lbl_8023766C
/* 80237660  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80237664  7C 7F 02 14 */	add r3, r31, r0
/* 80237668  88 63 01 90 */	lbz r3, 0x190(r3)
lbl_8023766C:
/* 8023766C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80237670  7C 7F 02 14 */	add r3, r31, r0
/* 80237674  88 63 01 8D */	lbz r3, 0x18d(r3)
/* 80237678  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023767C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80237680  7C 08 03 A6 */	mtlr r0
/* 80237684  38 21 00 10 */	addi r1, r1, 0x10
/* 80237688  4E 80 00 20 */	blr 
