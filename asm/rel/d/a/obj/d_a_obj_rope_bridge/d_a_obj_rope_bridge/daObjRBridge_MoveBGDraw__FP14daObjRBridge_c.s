lbl_80597D00:
/* 80597D00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80597D04  7C 08 02 A6 */	mflr r0
/* 80597D08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80597D0C  81 83 05 9C */	lwz r12, 0x59c(r3)
/* 80597D10  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80597D14  7D 89 03 A6 */	mtctr r12
/* 80597D18  4E 80 04 21 */	bctrl 
/* 80597D1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80597D20  7C 08 03 A6 */	mtlr r0
/* 80597D24  38 21 00 10 */	addi r1, r1, 0x10
/* 80597D28  4E 80 00 20 */	blr 
