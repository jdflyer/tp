lbl_80ACF9F8:
/* 80ACF9F8  38 C3 FF FC */	addi r6, r3, -4
/* 80ACF9FC  38 85 FF FC */	addi r4, r5, -4
/* 80ACFA00  38 00 00 03 */	li r0, 3
/* 80ACFA04  7C 09 03 A6 */	mtctr r0
lbl_80ACFA08:
/* 80ACFA08  80 64 00 04 */	lwz r3, 4(r4)
/* 80ACFA0C  84 04 00 08 */	lwzu r0, 8(r4)
/* 80ACFA10  90 66 00 04 */	stw r3, 4(r6)
/* 80ACFA14  94 06 00 08 */	stwu r0, 8(r6)
/* 80ACFA18  42 00 FF F0 */	bdnz lbl_80ACFA08
/* 80ACFA1C  80 04 00 04 */	lwz r0, 4(r4)
/* 80ACFA20  90 06 00 04 */	stw r0, 4(r6)
/* 80ACFA24  4E 80 00 20 */	blr 
