lbl_801411B0:
/* 801411B0  38 00 00 00 */	li r0, 0
/* 801411B4  88 63 05 6A */	lbz r3, 0x56a(r3)
/* 801411B8  28 03 00 00 */	cmplwi r3, 0
/* 801411BC  41 82 00 10 */	beq lbl_801411CC
/* 801411C0  28 03 00 26 */	cmplwi r3, 0x26
/* 801411C4  40 80 00 08 */	bge lbl_801411CC
/* 801411C8  38 00 00 01 */	li r0, 1
lbl_801411CC:
/* 801411CC  7C 03 03 78 */	mr r3, r0
/* 801411D0  4E 80 00 20 */	blr 
