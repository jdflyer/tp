/* decompSZS_subroutine__FPUcPUc decompSZS_subroutine(unsigned char *, unsigned char *) */
/* decompSZS_subroutine_X1_ */
/* 802DA35C 002D729C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802DA360 002D72A0  7C 08 02 A6 */	mflr r0
/* 802DA364 002D72A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802DA368 002D72A8  39 61 00 20 */	addi r11, r1, 0x20
/* 802DA36C 002D72AC  48 08 7E 71 */	bl _savegpr_29
/* 802DA370 002D72B0  7C 9D 23 78 */	mr r29, r4
/* 802DA374 002D72B4  38 80 00 00 */	li r4, 0
/* 802DA378 002D72B8  38 00 00 00 */	li r0, 0
/* 802DA37C 002D72BC  3B C0 00 00 */	li r30, 0
/* 802DA380 002D72C0  88 A3 00 00 */	lbz r5, 0(r3)
/* 802DA384 002D72C4  2C 05 00 59 */	cmpwi r5, 0x59
/* 802DA388 002D72C8  40 82 00 28 */	bne lbl_802DA3B0
/* 802DA38C 002D72CC  88 A3 00 01 */	lbz r5, 1(r3)
/* 802DA390 002D72D0  2C 05 00 61 */	cmpwi r5, 0x61
/* 802DA394 002D72D4  40 82 00 1C */	bne lbl_802DA3B0
/* 802DA398 002D72D8  88 A3 00 02 */	lbz r5, 2(r3)
/* 802DA39C 002D72DC  2C 05 00 7A */	cmpwi r5, 0x7a
/* 802DA3A0 002D72E0  40 82 00 10 */	bne lbl_802DA3B0
/* 802DA3A4 002D72E4  88 A3 00 03 */	lbz r5, 3(r3)
/* 802DA3A8 002D72E8  2C 05 00 30 */	cmpwi r5, 0x30
/* 802DA3AC 002D72EC  41 82 00 0C */	beq lbl_802DA3B8
lbl_802DA3B0:
/* 802DA3B0 002D72F0  38 60 FF FF */	li r3, -1
/* 802DA3B4 002D72F4  48 00 02 40 */	b lbl_802DA5F4
lbl_802DA3B8:
/* 802DA3B8 002D72F8  80 CD 8E CC */	lwz r6, lbl_8045144C-_SDA_BASE_(r13)
/* 802DA3BC 002D72FC  80 A3 00 04 */	lwz r5, 4(r3)
/* 802DA3C0 002D7300  7C A6 28 50 */	subf r5, r6, r5
/* 802DA3C4 002D7304  7F FD 2A 14 */	add r31, r29, r5
/* 802DA3C8 002D7308  80 AD 8E D4 */	lwz r5, lbl_80451454-_SDA_BASE_(r13)
/* 802DA3CC 002D730C  7C BD 2A 14 */	add r5, r29, r5
/* 802DA3D0 002D7310  7C 1F 28 40 */	cmplw r31, r5
/* 802DA3D4 002D7314  40 81 00 08 */	ble lbl_802DA3DC
/* 802DA3D8 002D7318  7C BF 2B 78 */	mr r31, r5
lbl_802DA3DC:
/* 802DA3DC 002D731C  38 63 00 10 */	addi r3, r3, 0x10
lbl_802DA3E0:
/* 802DA3E0 002D7320  2C 04 00 00 */	cmpwi r4, 0
/* 802DA3E4 002D7324  40 82 00 3C */	bne lbl_802DA420
/* 802DA3E8 002D7328  80 0D 8E C4 */	lwz r0, lbl_80451444-_SDA_BASE_(r13)
/* 802DA3EC 002D732C  7C 03 00 40 */	cmplw r3, r0
/* 802DA3F0 002D7330  40 81 00 24 */	ble lbl_802DA414
/* 802DA3F4 002D7334  80 0D 8E C0 */	lwz r0, lbl_80451440-_SDA_BASE_(r13)
/* 802DA3F8 002D7338  28 00 00 00 */	cmplwi r0, 0
/* 802DA3FC 002D733C  41 82 00 18 */	beq lbl_802DA414
/* 802DA400 002D7340  48 00 02 D9 */	bl nextSrcData__FPUc
/* 802DA404 002D7344  28 03 00 00 */	cmplwi r3, 0
/* 802DA408 002D7348  40 82 00 0C */	bne lbl_802DA414
/* 802DA40C 002D734C  38 60 FF FF */	li r3, -1
/* 802DA410 002D7350  48 00 01 E4 */	b lbl_802DA5F4
lbl_802DA414:
/* 802DA414 002D7354  88 03 00 00 */	lbz r0, 0(r3)
/* 802DA418 002D7358  38 80 00 08 */	li r4, 8
/* 802DA41C 002D735C  38 63 00 01 */	addi r3, r3, 1
lbl_802DA420:
/* 802DA420 002D7360  54 05 06 31 */	rlwinm. r5, r0, 0, 0x18, 0x18
/* 802DA424 002D7364  41 82 00 94 */	beq lbl_802DA4B8
/* 802DA428 002D7368  80 CD 8E CC */	lwz r6, lbl_8045144C-_SDA_BASE_(r13)
/* 802DA42C 002D736C  28 06 00 00 */	cmplwi r6, 0
/* 802DA430 002D7370  41 82 00 5C */	beq lbl_802DA48C
/* 802DA434 002D7374  80 AD 8E D0 */	lwz r5, lbl_80451450-_SDA_BASE_(r13)
/* 802DA438 002D7378  7C 05 30 40 */	cmplw r5, r6
/* 802DA43C 002D737C  41 80 00 1C */	blt lbl_802DA458
/* 802DA440 002D7380  88 A3 00 00 */	lbz r5, 0(r3)
/* 802DA444 002D7384  98 BD 00 00 */	stb r5, 0(r29)
/* 802DA448 002D7388  3B BD 00 01 */	addi r29, r29, 1
/* 802DA44C 002D738C  7C 1D F8 40 */	cmplw r29, r31
/* 802DA450 002D7390  3B DE 00 01 */	addi r30, r30, 1
/* 802DA454 002D7394  41 82 01 94 */	beq lbl_802DA5E8
lbl_802DA458:
/* 802DA458 002D7398  88 E3 00 00 */	lbz r7, 0(r3)
/* 802DA45C 002D739C  80 CD 8E B8 */	lwz r6, lbl_80451438-_SDA_BASE_(r13)
/* 802DA460 002D73A0  38 A6 00 01 */	addi r5, r6, 1
/* 802DA464 002D73A4  90 AD 8E B8 */	stw r5, lbl_80451438-_SDA_BASE_(r13)
/* 802DA468 002D73A8  98 E6 00 00 */	stb r7, 0(r6)
/* 802DA46C 002D73AC  80 CD 8E B8 */	lwz r6, lbl_80451438-_SDA_BASE_(r13)
/* 802DA470 002D73B0  80 AD 8E B4 */	lwz r5, lbl_80451434-_SDA_BASE_(r13)
/* 802DA474 002D73B4  7C 06 28 40 */	cmplw r6, r5
/* 802DA478 002D73B8  40 82 00 0C */	bne lbl_802DA484
/* 802DA47C 002D73BC  80 AD 8E B0 */	lwz r5, lbl_80451430-_SDA_BASE_(r13)
/* 802DA480 002D73C0  90 AD 8E B8 */	stw r5, lbl_80451438-_SDA_BASE_(r13)
lbl_802DA484:
/* 802DA484 002D73C4  38 63 00 01 */	addi r3, r3, 1
/* 802DA488 002D73C8  48 00 00 20 */	b lbl_802DA4A8
lbl_802DA48C:
/* 802DA48C 002D73CC  88 A3 00 00 */	lbz r5, 0(r3)
/* 802DA490 002D73D0  98 BD 00 00 */	stb r5, 0(r29)
/* 802DA494 002D73D4  3B BD 00 01 */	addi r29, r29, 1
/* 802DA498 002D73D8  7C 1D F8 40 */	cmplw r29, r31
/* 802DA49C 002D73DC  38 63 00 01 */	addi r3, r3, 1
/* 802DA4A0 002D73E0  3B DE 00 01 */	addi r30, r30, 1
/* 802DA4A4 002D73E4  41 82 01 44 */	beq lbl_802DA5E8
lbl_802DA4A8:
/* 802DA4A8 002D73E8  80 AD 8E D0 */	lwz r5, lbl_80451450-_SDA_BASE_(r13)
/* 802DA4AC 002D73EC  38 A5 00 01 */	addi r5, r5, 1
/* 802DA4B0 002D73F0  90 AD 8E D0 */	stw r5, lbl_80451450-_SDA_BASE_(r13)
/* 802DA4B4 002D73F4  48 00 01 24 */	b lbl_802DA5D8
lbl_802DA4B8:
/* 802DA4B8 002D73F8  88 C3 00 00 */	lbz r6, 0(r3)
/* 802DA4BC 002D73FC  88 E3 00 01 */	lbz r7, 1(r3)
/* 802DA4C0 002D7400  50 C7 45 2E */	rlwimi r7, r6, 8, 0x14, 0x17
/* 802DA4C4 002D7404  7C C5 26 70 */	srawi r5, r6, 4
/* 802DA4C8 002D7408  81 0D 8E CC */	lwz r8, lbl_8045144C-_SDA_BASE_(r13)
/* 802DA4CC 002D740C  28 08 00 00 */	cmplwi r8, 0
/* 802DA4D0 002D7410  38 63 00 02 */	addi r3, r3, 2
/* 802DA4D4 002D7414  41 82 00 2C */	beq lbl_802DA500
/* 802DA4D8 002D7418  80 CD 8E B8 */	lwz r6, lbl_80451438-_SDA_BASE_(r13)
/* 802DA4DC 002D741C  7C C7 30 50 */	subf r6, r7, r6
/* 802DA4E0 002D7420  39 26 FF FF */	addi r9, r6, -1
/* 802DA4E4 002D7424  80 ED 8E B0 */	lwz r7, lbl_80451430-_SDA_BASE_(r13)
/* 802DA4E8 002D7428  7C 09 38 40 */	cmplw r9, r7
/* 802DA4EC 002D742C  40 80 00 1C */	bge lbl_802DA508
/* 802DA4F0 002D7430  80 CD 8E B4 */	lwz r6, lbl_80451434-_SDA_BASE_(r13)
/* 802DA4F4 002D7434  7C C7 30 50 */	subf r6, r7, r6
/* 802DA4F8 002D7438  7D 29 32 14 */	add r9, r9, r6
/* 802DA4FC 002D743C  48 00 00 0C */	b lbl_802DA508
lbl_802DA500:
/* 802DA500 002D7440  7C C7 E8 50 */	subf r6, r7, r29
/* 802DA504 002D7444  39 26 FF FF */	addi r9, r6, -1
lbl_802DA508:
/* 802DA508 002D7448  2C 05 00 00 */	cmpwi r5, 0
/* 802DA50C 002D744C  40 82 00 14 */	bne lbl_802DA520
/* 802DA510 002D7450  88 A3 00 00 */	lbz r5, 0(r3)
/* 802DA514 002D7454  38 A5 00 12 */	addi r5, r5, 0x12
/* 802DA518 002D7458  38 63 00 01 */	addi r3, r3, 1
/* 802DA51C 002D745C  48 00 00 08 */	b lbl_802DA524
lbl_802DA520:
/* 802DA520 002D7460  38 A5 00 02 */	addi r5, r5, 2
lbl_802DA524:
/* 802DA524 002D7464  28 08 00 00 */	cmplwi r8, 0
/* 802DA528 002D7468  41 82 00 80 */	beq lbl_802DA5A8
lbl_802DA52C:
/* 802DA52C 002D746C  80 ED 8E D0 */	lwz r7, lbl_80451450-_SDA_BASE_(r13)
/* 802DA530 002D7470  80 CD 8E CC */	lwz r6, lbl_8045144C-_SDA_BASE_(r13)
/* 802DA534 002D7474  7C 07 30 40 */	cmplw r7, r6
/* 802DA538 002D7478  41 80 00 1C */	blt lbl_802DA554
/* 802DA53C 002D747C  88 C9 00 00 */	lbz r6, 0(r9)
/* 802DA540 002D7480  98 DD 00 00 */	stb r6, 0(r29)
/* 802DA544 002D7484  3B BD 00 01 */	addi r29, r29, 1
/* 802DA548 002D7488  7C 1D F8 40 */	cmplw r29, r31
/* 802DA54C 002D748C  3B DE 00 01 */	addi r30, r30, 1
/* 802DA550 002D7490  41 82 00 88 */	beq lbl_802DA5D8
lbl_802DA554:
/* 802DA554 002D7494  89 09 00 00 */	lbz r8, 0(r9)
/* 802DA558 002D7498  80 ED 8E B8 */	lwz r7, lbl_80451438-_SDA_BASE_(r13)
/* 802DA55C 002D749C  38 C7 00 01 */	addi r6, r7, 1
/* 802DA560 002D74A0  90 CD 8E B8 */	stw r6, lbl_80451438-_SDA_BASE_(r13)
/* 802DA564 002D74A4  99 07 00 00 */	stb r8, 0(r7)
/* 802DA568 002D74A8  80 CD 8E B8 */	lwz r6, lbl_80451438-_SDA_BASE_(r13)
/* 802DA56C 002D74AC  80 ED 8E B4 */	lwz r7, lbl_80451434-_SDA_BASE_(r13)
/* 802DA570 002D74B0  7C 06 38 40 */	cmplw r6, r7
/* 802DA574 002D74B4  40 82 00 0C */	bne lbl_802DA580
/* 802DA578 002D74B8  80 CD 8E B0 */	lwz r6, lbl_80451430-_SDA_BASE_(r13)
/* 802DA57C 002D74BC  90 CD 8E B8 */	stw r6, lbl_80451438-_SDA_BASE_(r13)
lbl_802DA580:
/* 802DA580 002D74C0  39 29 00 01 */	addi r9, r9, 1
/* 802DA584 002D74C4  7C 09 38 40 */	cmplw r9, r7
/* 802DA588 002D74C8  40 82 00 08 */	bne lbl_802DA590
/* 802DA58C 002D74CC  81 2D 8E B0 */	lwz r9, lbl_80451430-_SDA_BASE_(r13)
lbl_802DA590:
/* 802DA590 002D74D0  80 CD 8E D0 */	lwz r6, lbl_80451450-_SDA_BASE_(r13)
/* 802DA594 002D74D4  38 C6 00 01 */	addi r6, r6, 1
/* 802DA598 002D74D8  90 CD 8E D0 */	stw r6, lbl_80451450-_SDA_BASE_(r13)
/* 802DA59C 002D74DC  34 A5 FF FF */	addic. r5, r5, -1
/* 802DA5A0 002D74E0  40 82 FF 8C */	bne lbl_802DA52C
/* 802DA5A4 002D74E4  48 00 00 34 */	b lbl_802DA5D8
lbl_802DA5A8:
/* 802DA5A8 002D74E8  88 C9 00 00 */	lbz r6, 0(r9)
/* 802DA5AC 002D74EC  98 DD 00 00 */	stb r6, 0(r29)
/* 802DA5B0 002D74F0  3B BD 00 01 */	addi r29, r29, 1
/* 802DA5B4 002D74F4  7C 1D F8 40 */	cmplw r29, r31
/* 802DA5B8 002D74F8  3B DE 00 01 */	addi r30, r30, 1
/* 802DA5BC 002D74FC  41 82 00 1C */	beq lbl_802DA5D8
/* 802DA5C0 002D7500  80 CD 8E D0 */	lwz r6, lbl_80451450-_SDA_BASE_(r13)
/* 802DA5C4 002D7504  38 C6 00 01 */	addi r6, r6, 1
/* 802DA5C8 002D7508  90 CD 8E D0 */	stw r6, lbl_80451450-_SDA_BASE_(r13)
/* 802DA5CC 002D750C  34 A5 FF FF */	addic. r5, r5, -1
/* 802DA5D0 002D7510  39 29 00 01 */	addi r9, r9, 1
/* 802DA5D4 002D7514  40 82 FF D4 */	bne lbl_802DA5A8
lbl_802DA5D8:
/* 802DA5D8 002D7518  54 00 08 3C */	slwi r0, r0, 1
/* 802DA5DC 002D751C  7C 1D F8 40 */	cmplw r29, r31
/* 802DA5E0 002D7520  38 84 FF FF */	addi r4, r4, -1
/* 802DA5E4 002D7524  41 80 FD FC */	blt lbl_802DA3E0
lbl_802DA5E8:
/* 802DA5E8 002D7528  80 6D 8E DC */	lwz r3, lbl_8045145C-_SDA_BASE_(r13)
/* 802DA5EC 002D752C  93 C3 00 00 */	stw r30, 0(r3)
/* 802DA5F0 002D7530  38 60 00 00 */	li r3, 0
lbl_802DA5F4:
/* 802DA5F4 002D7534  39 61 00 20 */	addi r11, r1, 0x20
/* 802DA5F8 002D7538  48 08 7C 31 */	bl _restgpr_29
/* 802DA5FC 002D753C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802DA600 002D7540  7C 08 03 A6 */	mtlr r0
/* 802DA604 002D7544  38 21 00 20 */	addi r1, r1, 0x20
/* 802DA608 002D7548  4E 80 00 20 */	blr
