/* 802C4814 002C1754  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802C4818 002C1758  7C 08 02 A6 */	mflr r0
/* 802C481C 002C175C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802C4820 002C1760  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802C4824 002C1764  F3 E1 00 18 */	psq_st f31, 24(r1), 0, 0
/* 802C4828 002C1768  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C482C 002C176C  FF E0 08 90 */	fmr f31, f1
/* 802C4830 002C1770  28 06 00 00 */	cmplwi r6, 0
/* 802C4834 002C1774  40 82 00 08 */	bne lbl_802C483C
/* 802C4838 002C1778  38 C3 00 70 */	addi r6, r3, 0x70
lbl_802C483C:
/* 802C483C 002C177C  3C 04 FF FC */	addis r0, r4, 0xfffc
/* 802C4840 002C1780  28 00 00 02 */	cmplwi r0, 2
/* 802C4844 002C1784  40 82 00 14 */	bne lbl_802C4858
/* 802C4848 002C1788  38 63 00 08 */	addi r3, r3, 8
/* 802C484C 002C178C  38 C0 00 00 */	li r6, 0
/* 802C4850 002C1790  4B FF 9C 55 */	bl Z2SoundObjBase_NS_startCollisionSE
/* 802C4854 002C1794  48 00 00 68 */	b lbl_802C48BC
lbl_802C4858:
/* 802C4858 002C1798  7C C3 33 78 */	mr r3, r6
/* 802C485C 002C179C  38 C0 00 00 */	li r6, 0
/* 802C4860 002C17A0  4B FF 9C 45 */	bl Z2SoundObjBase_NS_startCollisionSE
/* 802C4864 002C17A4  7C 7F 1B 78 */	mr r31, r3
/* 802C4868 002C17A8  C0 02 C2 A0 */	lfs f0, lbl_80455CA0-_SDA2_BASE_(r2)
/* 802C486C 002C17AC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802C4870 002C17B0  4C 41 13 82 */	cror 2, 1, 2
/* 802C4874 002C17B4  40 82 00 44 */	bne lbl_802C48B8
/* 802C4878 002C17B8  28 1F 00 00 */	cmplwi r31, 0
/* 802C487C 002C17BC  41 82 00 3C */	beq lbl_802C48B8
/* 802C4880 002C17C0  80 1F 00 00 */	lwz r0, 0(r31)
/* 802C4884 002C17C4  28 00 00 00 */	cmplwi r0, 0
/* 802C4888 002C17C8  41 82 00 30 */	beq lbl_802C48B8
/* 802C488C 002C17CC  C0 02 C3 18 */	lfs f0, lbl_80455D18-_SDA2_BASE_(r2)
/* 802C4890 002C17D0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802C4894 002C17D4  4C 41 13 82 */	cror 2, 1, 2
/* 802C4898 002C17D8  40 82 00 08 */	bne lbl_802C48A0
/* 802C489C 002C17DC  FF E0 00 90 */	fmr f31, f0
lbl_802C48A0:
/* 802C48A0 002C17E0  80 7F 00 00 */	lwz r3, 0(r31)
/* 802C48A4 002C17E4  38 63 00 48 */	addi r3, r3, 0x48
/* 802C48A8 002C17E8  C0 02 C3 18 */	lfs f0, lbl_80455D18-_SDA2_BASE_(r2)
/* 802C48AC 002C17EC  EC 3F 00 24 */	fdivs f1, f31, f0
/* 802C48B0 002C17F0  38 80 00 00 */	li r4, 0
/* 802C48B4 002C17F4  4B FD E5 01 */	bl JAISoundParamsMove_NS_moveVolume
lbl_802C48B8:
/* 802C48B8 002C17F8  7F E3 FB 78 */	mr r3, r31
lbl_802C48BC:
/* 802C48BC 002C17FC  E3 E1 00 18 */	psq_l f31, 24(r1), 0, 0
/* 802C48C0 002C1800  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802C48C4 002C1804  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C48C8 002C1808  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802C48CC 002C180C  7C 08 03 A6 */	mtlr r0
/* 802C48D0 002C1810  38 21 00 20 */	addi r1, r1, 0x20
/* 802C48D4 002C1814  4E 80 00 20 */	blr 