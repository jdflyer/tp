lbl_80A5280C:
/* 80A5280C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A52810  7C 08 02 A6 */	mflr r0
/* 80A52814  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A52818  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A5281C  7C 7F 1B 78 */	mr r31, r3
/* 80A52820  3C 60 80 A5 */	lis r3, s_sw_sub__FPvPv@ha /* 0x80A4BA14@ha */
/* 80A52824  38 63 BA 14 */	addi r3, r3, s_sw_sub__FPvPv@l /* 0x80A4BA14@l */
/* 80A52828  7F E4 FB 78 */	mr r4, r31
/* 80A5282C  4B 5C EB 0D */	bl fpcEx_Search__FPFPvPv_PvPv
/* 80A52830  90 7F 09 34 */	stw r3, 0x934(r31)
/* 80A52834  80 9F 09 34 */	lwz r4, 0x934(r31)
/* 80A52838  28 04 00 00 */	cmplwi r4, 0
/* 80A5283C  40 82 00 0C */	bne lbl_80A52848
/* 80A52840  38 60 00 00 */	li r3, 0
/* 80A52844  48 00 00 40 */	b lbl_80A52884
lbl_80A52848:
/* 80A52848  38 60 00 00 */	li r3, 0
/* 80A5284C  80 04 09 1C */	lwz r0, 0x91c(r4)
/* 80A52850  3C 80 80 A6 */	lis r4, saru_p@ha /* 0x80A5E478@ha */
/* 80A52854  38 84 E4 78 */	addi r4, r4, saru_p@l /* 0x80A5E478@l */
/* 80A52858  7C 09 03 A6 */	mtctr r0
/* 80A5285C  2C 00 00 00 */	cmpwi r0, 0
/* 80A52860  40 81 00 20 */	ble lbl_80A52880
lbl_80A52864:
/* 80A52864  7C 04 18 2E */	lwzx r0, r4, r3
/* 80A52868  28 00 00 00 */	cmplwi r0, 0
/* 80A5286C  40 82 00 0C */	bne lbl_80A52878
/* 80A52870  38 60 00 00 */	li r3, 0
/* 80A52874  48 00 00 10 */	b lbl_80A52884
lbl_80A52878:
/* 80A52878  38 63 00 04 */	addi r3, r3, 4
/* 80A5287C  42 00 FF E8 */	bdnz lbl_80A52864
lbl_80A52880:
/* 80A52880  38 60 00 01 */	li r3, 1
lbl_80A52884:
/* 80A52884  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A52888  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A5288C  7C 08 03 A6 */	mtlr r0
/* 80A52890  38 21 00 10 */	addi r1, r1, 0x10
/* 80A52894  4E 80 00 20 */	blr 
