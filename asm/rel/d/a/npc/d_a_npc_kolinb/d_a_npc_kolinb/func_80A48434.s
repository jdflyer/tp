lbl_80A48434:
/* 80A48434  80 83 00 00 */	lwz r4, 0(r3)
/* 80A48438  2C 04 00 00 */	cmpwi r4, 0
/* 80A4843C  41 82 00 0C */	beq lbl_80A48448
/* 80A48440  38 04 FF FF */	addi r0, r4, -1
/* 80A48444  90 03 00 00 */	stw r0, 0(r3)
lbl_80A48448:
/* 80A48448  80 63 00 00 */	lwz r3, 0(r3)
/* 80A4844C  4E 80 00 20 */	blr 
