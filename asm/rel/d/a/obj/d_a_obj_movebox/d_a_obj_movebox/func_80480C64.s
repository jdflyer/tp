lbl_80480C64:
/* 80480C64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80480C68  7C 08 02 A6 */	mflr r0
/* 80480C6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80480C70  81 83 05 9C */	lwz r12, 0x59c(r3)
/* 80480C74  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80480C78  7D 89 03 A6 */	mtctr r12
/* 80480C7C  4E 80 04 21 */	bctrl 
/* 80480C80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80480C84  7C 08 03 A6 */	mtlr r0
/* 80480C88  38 21 00 10 */	addi r1, r1, 0x10
/* 80480C8C  4E 80 00 20 */	blr 
