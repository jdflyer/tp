/* 802A96F4 002A6634  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802A96F8 002A6638  7C 08 02 A6 */	mflr r0
/* 802A96FC 002A663C  90 01 00 54 */	stw r0, 0x54(r1)
/* 802A9700 002A6640  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802A9704 002A6644  F3 E1 00 48 */	psq_st f31, 72(r1), 0, 0
/* 802A9708 002A6648  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 802A970C 002A664C  F3 C1 00 38 */	psq_st f30, 56(r1), 0, 0
/* 802A9710 002A6650  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 802A9714 002A6654  F3 A1 00 28 */	psq_st f29, 40(r1), 0, 0
/* 802A9718 002A6658  DB 81 00 10 */	stfd f28, 0x10(r1)
/* 802A971C 002A665C  F3 81 00 18 */	psq_st f28, 24(r1), 0, 0
/* 802A9720 002A6660  FF 80 20 90 */	fmr f28, f4
/* 802A9724 002A6664  FF A0 28 90 */	fmr f29, f5
/* 802A9728 002A6668  FF C0 30 90 */	fmr f30, f6
/* 802A972C 002A666C  2C 03 00 01 */	cmpwi r3, 1
/* 802A9730 002A6670  40 82 00 44 */	bne lbl_802A9774
/* 802A9734 002A6674  C0 82 BE 28 */	lfs f4, lbl_80455828-_SDA2_BASE_(r2)
/* 802A9738 002A6678  FC A0 E0 90 */	fmr f5, f28
/* 802A973C 002A667C  38 60 00 01 */	li r3, 1
/* 802A9740 002A6680  4B FF FF 4D */	bl linearTransform__6Z2CalcFfffffb
/* 802A9744 002A6684  48 0C 2F FD */	bl func_8036C740
/* 802A9748 002A6688  FF E0 08 18 */	frsp f31, f1
/* 802A974C 002A668C  FC 20 E0 90 */	fmr f1, f28
/* 802A9750 002A6690  48 0C 2F F1 */	bl func_8036C740
/* 802A9754 002A6694  FC 60 08 18 */	frsp f3, f1
/* 802A9758 002A6698  FC 20 F8 90 */	fmr f1, f31
/* 802A975C 002A669C  C0 42 BE 2C */	lfs f2, lbl_8045582C-_SDA2_BASE_(r2)
/* 802A9760 002A66A0  FC 80 E8 90 */	fmr f4, f29
/* 802A9764 002A66A4  FC A0 F0 90 */	fmr f5, f30
/* 802A9768 002A66A8  38 60 00 01 */	li r3, 1
/* 802A976C 002A66AC  4B FF FF 21 */	bl linearTransform__6Z2CalcFfffffb
/* 802A9770 002A66B0  48 00 00 58 */	b lbl_802A97C8
lbl_802A9774:
/* 802A9774 002A66B4  2C 03 00 00 */	cmpwi r3, 0
/* 802A9778 002A66B8  40 82 00 40 */	bne lbl_802A97B8
/* 802A977C 002A66BC  C0 A2 BE 28 */	lfs f5, lbl_80455828-_SDA2_BASE_(r2)
/* 802A9780 002A66C0  38 60 00 01 */	li r3, 1
/* 802A9784 002A66C4  4B FF FF 09 */	bl linearTransform__6Z2CalcFfffffb
/* 802A9788 002A66C8  48 0C 2F B9 */	bl func_8036C740
/* 802A978C 002A66CC  FF E0 08 18 */	frsp f31, f1
/* 802A9790 002A66D0  FC 20 E0 90 */	fmr f1, f28
/* 802A9794 002A66D4  48 0C 2F AD */	bl func_8036C740
/* 802A9798 002A66D8  FC 40 08 18 */	frsp f2, f1
/* 802A979C 002A66DC  FC 20 F8 90 */	fmr f1, f31
/* 802A97A0 002A66E0  C0 62 BE 2C */	lfs f3, lbl_8045582C-_SDA2_BASE_(r2)
/* 802A97A4 002A66E4  FC 80 E8 90 */	fmr f4, f29
/* 802A97A8 002A66E8  FC A0 F0 90 */	fmr f5, f30
/* 802A97AC 002A66EC  38 60 00 01 */	li r3, 1
/* 802A97B0 002A66F0  4B FF FE DD */	bl linearTransform__6Z2CalcFfffffb
/* 802A97B4 002A66F4  48 00 00 14 */	b lbl_802A97C8
lbl_802A97B8:
/* 802A97B8 002A66F8  FC 80 E8 90 */	fmr f4, f29
/* 802A97BC 002A66FC  FC A0 F0 90 */	fmr f5, f30
/* 802A97C0 002A6700  38 60 00 00 */	li r3, 0
/* 802A97C4 002A6704  4B FF FE C9 */	bl linearTransform__6Z2CalcFfffffb
lbl_802A97C8:
/* 802A97C8 002A6708  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 802A97CC 002A670C  40 81 00 0C */	ble lbl_802A97D8
/* 802A97D0 002A6710  FC 20 F0 90 */	fmr f1, f30
/* 802A97D4 002A6714  48 00 00 10 */	b lbl_802A97E4
lbl_802A97D8:
/* 802A97D8 002A6718  FC 01 E8 40 */	fcmpo cr0, f1, f29
/* 802A97DC 002A671C  40 80 00 08 */	bge lbl_802A97E4
/* 802A97E0 002A6720  FC 20 E8 90 */	fmr f1, f29
lbl_802A97E4:
/* 802A97E4 002A6724  E3 E1 00 48 */	psq_l f31, 72(r1), 0, 0
/* 802A97E8 002A6728  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802A97EC 002A672C  E3 C1 00 38 */	psq_l f30, 56(r1), 0, 0
/* 802A97F0 002A6730  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 802A97F4 002A6734  E3 A1 00 28 */	psq_l f29, 40(r1), 0, 0
/* 802A97F8 002A6738  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 802A97FC 002A673C  E3 81 00 18 */	psq_l f28, 24(r1), 0, 0
/* 802A9800 002A6740  CB 81 00 10 */	lfd f28, 0x10(r1)
/* 802A9804 002A6744  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802A9808 002A6748  7C 08 03 A6 */	mtlr r0
/* 802A980C 002A674C  38 21 00 50 */	addi r1, r1, 0x50
/* 802A9810 002A6750  4E 80 00 20 */	blr 