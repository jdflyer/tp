lbl_8081756C:
/* 8081756C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80817570  7C 08 02 A6 */	mflr r0
/* 80817574  90 01 00 74 */	stw r0, 0x74(r1)
/* 80817578  39 61 00 70 */	addi r11, r1, 0x70
/* 8081757C  4B B4 AC 4D */	bl _savegpr_24
/* 80817580  7C 7E 1B 78 */	mr r30, r3
/* 80817584  3C 60 80 82 */	lis r3, lit_3791@ha /* 0x808218AC@ha */
/* 80817588  3B E3 18 AC */	addi r31, r3, lit_3791@l /* 0x808218AC@l */
/* 8081758C  80 1E 13 24 */	lwz r0, 0x1324(r30)
/* 80817590  60 00 00 01 */	ori r0, r0, 1
/* 80817594  90 1E 13 24 */	stw r0, 0x1324(r30)
/* 80817598  80 1E 08 2C */	lwz r0, 0x82c(r30)
/* 8081759C  60 00 00 01 */	ori r0, r0, 1
/* 808175A0  90 1E 08 2C */	stw r0, 0x82c(r30)
/* 808175A4  80 1E 09 64 */	lwz r0, 0x964(r30)
/* 808175A8  60 00 00 01 */	ori r0, r0, 1
/* 808175AC  90 1E 09 64 */	stw r0, 0x964(r30)
/* 808175B0  80 7E 05 BC */	lwz r3, 0x5bc(r30)
/* 808175B4  80 63 00 04 */	lwz r3, 4(r3)
/* 808175B8  80 63 00 84 */	lwz r3, 0x84(r3)
/* 808175BC  80 63 00 0C */	lwz r3, 0xc(r3)
/* 808175C0  C0 43 02 FC */	lfs f2, 0x2fc(r3)
/* 808175C4  C0 23 02 EC */	lfs f1, 0x2ec(r3)
/* 808175C8  C0 03 02 DC */	lfs f0, 0x2dc(r3)
/* 808175CC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 808175D0  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 808175D4  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 808175D8  3C 60 80 82 */	lis r3, l_HIO@ha /* 0x80821E64@ha */
/* 808175DC  38 63 1E 64 */	addi r3, r3, l_HIO@l /* 0x80821E64@l */
/* 808175E0  C0 03 00 08 */	lfs f0, 8(r3)
/* 808175E4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 808175E8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 808175EC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 808175F0  3B 00 00 00 */	li r24, 0
/* 808175F4  3B A0 00 00 */	li r29, 0
/* 808175F8  3B 80 00 00 */	li r28, 0
/* 808175FC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80817600  3B 43 61 C0 */	addi r26, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80817604  3C 60 80 82 */	lis r3, w_eff_id_4417@ha /* 0x80821C54@ha */
/* 80817608  3B 63 1C 54 */	addi r27, r3, w_eff_id_4417@l /* 0x80821C54@l */
lbl_8081760C:
/* 8081760C  80 7A 5D 3C */	lwz r3, 0x5d3c(r26)
/* 80817610  38 00 00 FF */	li r0, 0xff
/* 80817614  90 01 00 08 */	stw r0, 8(r1)
/* 80817618  38 80 00 00 */	li r4, 0
/* 8081761C  90 81 00 0C */	stw r4, 0xc(r1)
/* 80817620  38 00 FF FF */	li r0, -1
/* 80817624  90 01 00 10 */	stw r0, 0x10(r1)
/* 80817628  90 81 00 14 */	stw r4, 0x14(r1)
/* 8081762C  90 81 00 18 */	stw r4, 0x18(r1)
/* 80817630  90 81 00 1C */	stw r4, 0x1c(r1)
/* 80817634  3B 3C 14 80 */	addi r25, r28, 0x1480
/* 80817638  7C 9E C8 2E */	lwzx r4, r30, r25
/* 8081763C  38 A0 00 00 */	li r5, 0
/* 80817640  7C DB EA 2E */	lhzx r6, r27, r29
/* 80817644  38 E1 00 34 */	addi r7, r1, 0x34
/* 80817648  39 1E 01 0C */	addi r8, r30, 0x10c
/* 8081764C  39 3E 04 E4 */	addi r9, r30, 0x4e4
/* 80817650  39 41 00 28 */	addi r10, r1, 0x28
/* 80817654  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80817658  4B 83 5E 75 */	bl set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 8081765C  7C 7E C9 2E */	stwx r3, r30, r25
/* 80817660  80 7A 5D 3C */	lwz r3, 0x5d3c(r26)
/* 80817664  38 63 02 10 */	addi r3, r3, 0x210
/* 80817668  7C 9E C8 2E */	lwzx r4, r30, r25
/* 8081766C  4B 83 42 AD */	bl getEmitter__Q213dPa_control_c7level_cFUl
/* 80817670  28 03 00 00 */	cmplwi r3, 0
/* 80817674  41 82 00 3C */	beq lbl_808176B0
/* 80817678  C0 1E 06 C4 */	lfs f0, 0x6c4(r30)
/* 8081767C  FC 00 00 1E */	fctiwz f0, f0
/* 80817680  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 80817684  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80817688  98 03 00 BB */	stb r0, 0xbb(r3)
/* 8081768C  2C 18 00 00 */	cmpwi r24, 0
/* 80817690  40 82 00 10 */	bne lbl_808176A0
/* 80817694  C0 1F 00 78 */	lfs f0, 0x78(r31)
/* 80817698  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8081769C  48 00 00 14 */	b lbl_808176B0
lbl_808176A0:
/* 808176A0  2C 18 00 01 */	cmpwi r24, 1
/* 808176A4  40 82 00 0C */	bne lbl_808176B0
/* 808176A8  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 808176AC  D0 03 00 28 */	stfs f0, 0x28(r3)
lbl_808176B0:
/* 808176B0  3B 18 00 01 */	addi r24, r24, 1
/* 808176B4  2C 18 00 04 */	cmpwi r24, 4
/* 808176B8  3B BD 00 02 */	addi r29, r29, 2
/* 808176BC  3B 9C 00 04 */	addi r28, r28, 4
/* 808176C0  41 80 FF 4C */	blt lbl_8081760C
/* 808176C4  88 1E 06 C1 */	lbz r0, 0x6c1(r30)
/* 808176C8  28 00 00 01 */	cmplwi r0, 1
/* 808176CC  40 82 00 34 */	bne lbl_80817700
/* 808176D0  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702A0@ha */
/* 808176D4  38 03 02 A0 */	addi r0, r3, 0x02A0 /* 0x000702A0@l */
/* 808176D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 808176DC  38 7E 05 C4 */	addi r3, r30, 0x5c4
/* 808176E0  38 81 00 24 */	addi r4, r1, 0x24
/* 808176E4  38 A0 00 00 */	li r5, 0
/* 808176E8  38 C0 FF FF */	li r6, -1
/* 808176EC  81 9E 05 C4 */	lwz r12, 0x5c4(r30)
/* 808176F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 808176F4  7D 89 03 A6 */	mtctr r12
/* 808176F8  4E 80 04 21 */	bctrl 
/* 808176FC  48 00 00 30 */	b lbl_8081772C
lbl_80817700:
/* 80817700  3C 60 00 07 */	lis r3, 0x0007 /* 0x0007029F@ha */
/* 80817704  38 03 02 9F */	addi r0, r3, 0x029F /* 0x0007029F@l */
/* 80817708  90 01 00 20 */	stw r0, 0x20(r1)
/* 8081770C  38 7E 05 C4 */	addi r3, r30, 0x5c4
/* 80817710  38 81 00 20 */	addi r4, r1, 0x20
/* 80817714  38 A0 00 00 */	li r5, 0
/* 80817718  38 C0 FF FF */	li r6, -1
/* 8081771C  81 9E 05 C4 */	lwz r12, 0x5c4(r30)
/* 80817720  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80817724  7D 89 03 A6 */	mtctr r12
/* 80817728  4E 80 04 21 */	bctrl 
lbl_8081772C:
/* 8081772C  39 61 00 70 */	addi r11, r1, 0x70
/* 80817730  4B B4 AA E5 */	bl _restgpr_24
/* 80817734  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80817738  7C 08 03 A6 */	mtlr r0
/* 8081773C  38 21 00 70 */	addi r1, r1, 0x70
/* 80817740  4E 80 00 20 */	blr 
