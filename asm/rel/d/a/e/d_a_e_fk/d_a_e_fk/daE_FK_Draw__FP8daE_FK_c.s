lbl_806BAF0C:
/* 806BAF0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806BAF10  7C 08 02 A6 */	mflr r0
/* 806BAF14  90 01 00 14 */	stw r0, 0x14(r1)
/* 806BAF18  4B FF FD D5 */	bl Draw__8daE_FK_cFv
/* 806BAF1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806BAF20  7C 08 03 A6 */	mtlr r0
/* 806BAF24  38 21 00 10 */	addi r1, r1, 0x10
/* 806BAF28  4E 80 00 20 */	blr 
