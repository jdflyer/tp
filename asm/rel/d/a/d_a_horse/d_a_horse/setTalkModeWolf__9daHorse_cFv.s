lbl_80840FE0:
/* 80840FE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80840FE4  7C 08 02 A6 */	mflr r0
/* 80840FE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80840FEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80840FF0  7C 7F 1B 78 */	mr r31, r3
/* 80840FF4  A0 03 00 F8 */	lhz r0, 0xf8(r3)
/* 80840FF8  28 00 00 01 */	cmplwi r0, 1
/* 80840FFC  40 82 00 68 */	bne lbl_80841064
/* 80841000  80 1F 17 44 */	lwz r0, 0x1744(r31)
/* 80841004  54 00 03 9D */	rlwinm. r0, r0, 0, 0xe, 0xe
/* 80841008  40 82 00 2C */	bne lbl_80841034
/* 8084100C  38 7F 12 08 */	addi r3, r31, 0x1208
/* 80841010  7F E4 FB 78 */	mr r4, r31
/* 80841014  A0 BF 16 C0 */	lhz r5, 0x16c0(r31)
/* 80841018  38 C0 00 00 */	li r6, 0
/* 8084101C  38 E0 00 00 */	li r7, 0
/* 80841020  4B A0 8F 71 */	bl init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c
/* 80841024  80 1F 17 44 */	lwz r0, 0x1744(r31)
/* 80841028  64 00 00 02 */	oris r0, r0, 2
/* 8084102C  90 1F 17 44 */	stw r0, 0x1744(r31)
/* 80841030  48 00 00 40 */	b lbl_80841070
lbl_80841034:
/* 80841034  38 7F 12 08 */	addi r3, r31, 0x1208
/* 80841038  7F E4 FB 78 */	mr r4, r31
/* 8084103C  38 A0 00 00 */	li r5, 0
/* 80841040  38 C0 00 00 */	li r6, 0
/* 80841044  4B A0 92 95 */	bl doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci
/* 80841048  2C 03 00 00 */	cmpwi r3, 0
/* 8084104C  41 82 00 24 */	beq lbl_80841070
/* 80841050  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80841054  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80841058  38 63 4E C8 */	addi r3, r3, 0x4ec8
/* 8084105C  4B 80 14 0D */	bl reset__14dEvt_control_cFv
/* 80841060  48 00 00 10 */	b lbl_80841070
lbl_80841064:
/* 80841064  80 1F 17 44 */	lwz r0, 0x1744(r31)
/* 80841068  54 00 03 DA */	rlwinm r0, r0, 0, 0xf, 0xd
/* 8084106C  90 1F 17 44 */	stw r0, 0x1744(r31)
lbl_80841070:
/* 80841070  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80841074  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80841078  7C 08 03 A6 */	mtlr r0
/* 8084107C  38 21 00 10 */	addi r1, r1, 0x10
/* 80841080  4E 80 00 20 */	blr 
