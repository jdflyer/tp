/* 8009A3E8 00097328  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009A3EC 0009732C  7C 08 02 A6 */	mflr r0
/* 8009A3F0 00097330  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009A3F4 00097334  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009A3F8 00097338  3B E0 00 00 */	li r31, 0
/* 8009A3FC 0009733C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8009A400 00097340  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8009A404 00097344  38 63 00 9C */	addi r3, r3, 0x9c
/* 8009A408 00097348  38 80 00 04 */	li r4, 4
/* 8009A40C 0009734C  38 A0 00 00 */	li r5, 0
/* 8009A410 00097350  4B F9 8C 21 */	bl getItem__17dSv_player_item_cCFib
/* 8009A414 00097354  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8009A418 00097358  28 00 00 43 */	cmplwi r0, 0x43
/* 8009A41C 0009735C  40 82 00 1C */	bne lbl_8009A438
/* 8009A420 00097360  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8009A424 00097364  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8009A428 00097368  88 03 00 F8 */	lbz r0, 0xf8(r3)
/* 8009A42C 0009736C  28 00 00 64 */	cmplwi r0, 0x64
/* 8009A430 00097370  41 80 00 08 */	blt lbl_8009A438
/* 8009A434 00097374  3B E0 00 01 */	li r31, 1
lbl_8009A438:
/* 8009A438 00097378  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 8009A43C 0009737C  30 03 FF FF */	addic r0, r3, -1
/* 8009A440 00097380  7C 60 19 10 */	subfe r3, r0, r3
/* 8009A444 00097384  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009A448 00097388  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009A44C 0009738C  7C 08 03 A6 */	mtlr r0
/* 8009A450 00097390  38 21 00 10 */	addi r1, r1, 0x10
/* 8009A454 00097394  4E 80 00 20 */	blr 