/* 802AF884 002AC7C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802AF888 002AC7C8  7C 08 02 A6 */	mflr r0
/* 802AF88C 002AC7CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802AF890 002AC7D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802AF894 002AC7D4  7C 7F 1B 78 */	mr r31, r3
/* 802AF898 002AC7D8  80 63 00 04 */	lwz r3, 4(r3)
/* 802AF89C 002AC7DC  28 03 00 00 */	cmplwi r3, 0
/* 802AF8A0 002AC7E0  41 82 00 10 */	beq lbl_802AF8B0
/* 802AF8A4 002AC7E4  80 63 00 18 */	lwz r3, 0x18(r3)
/* 802AF8A8 002AC7E8  90 61 00 08 */	stw r3, 8(r1)
/* 802AF8AC 002AC7EC  48 00 00 08 */	b lbl_802AF8B4
lbl_802AF8B0:
/* 802AF8B0 002AC7F0  38 60 FF FF */	li r3, -1
lbl_802AF8B4:
/* 802AF8B4 002AC7F4  3C 83 FF 00 */	addis r4, r3, 0xff00
/* 802AF8B8 002AC7F8  38 84 FF F6 */	addi r4, r4, -10
/* 802AF8BC 002AC7FC  28 04 00 9E */	cmplwi r4, 0x9e
/* 802AF8C0 002AC800  41 81 00 F4 */	bgt lbl_802AF9B4
/* 802AF8C4 002AC804  3C 60 80 3D */	lis r3, lbl_803CA08C@ha
/* 802AF8C8 002AC808  38 63 A0 8C */	addi r3, r3, lbl_803CA08C@l
/* 802AF8CC 002AC80C  54 84 10 3A */	slwi r4, r4, 2
/* 802AF8D0 002AC810  7C 03 20 2E */	lwzx r0, r3, r4
/* 802AF8D4 002AC814  7C 09 03 A6 */	mtctr r0
/* 802AF8D8 002AC818  4E 80 04 20 */	bctr 
/* 802AF8DC 002AC81C  48 00 00 E0 */	b lbl_802AF9BC
/* 802AF8E0 002AC820  80 6D 85 FC */	lwz r3, lbl_80450B7C-_SDA_BASE_(r13)
/* 802AF8E4 002AC824  3C 80 80 3A */	lis r4, lbl_8039BA08@ha
/* 802AF8E8 002AC828  38 84 BA 08 */	addi r4, r4, lbl_8039BA08@l
/* 802AF8EC 002AC82C  38 84 02 76 */	addi r4, r4, 0x276
/* 802AF8F0 002AC830  48 00 68 F9 */	bl setDemoName__11Z2StatusMgrFPc
/* 802AF8F4 002AC834  38 00 00 00 */	li r0, 0
/* 802AF8F8 002AC838  B0 1F 00 B8 */	sth r0, 0xb8(r31)
/* 802AF8FC 002AC83C  48 00 00 C0 */	b lbl_802AF9BC
/* 802AF900 002AC840  7F E3 FB 78 */	mr r3, r31
/* 802AF904 002AC844  3C 80 01 00 */	lis r4, 0x01000057@ha
/* 802AF908 002AC848  38 84 00 57 */	addi r4, r4, 0x01000057@l
/* 802AF90C 002AC84C  38 A0 00 00 */	li r5, 0
/* 802AF910 002AC850  38 C0 00 00 */	li r6, 0
/* 802AF914 002AC854  4B FF F6 FD */	bl bgmStart__8Z2SeqMgrFUlUll
/* 802AF918 002AC858  38 00 00 00 */	li r0, 0
/* 802AF91C 002AC85C  B0 1F 00 B8 */	sth r0, 0xb8(r31)
/* 802AF920 002AC860  48 00 00 9C */	b lbl_802AF9BC
/* 802AF924 002AC864  7F E3 FB 78 */	mr r3, r31
/* 802AF928 002AC868  38 80 00 00 */	li r4, 0
/* 802AF92C 002AC86C  48 00 48 39 */	bl Z2SeqMgr_NS_setBattleBgmOff
/* 802AF930 002AC870  80 7F 00 04 */	lwz r3, 4(r31)
/* 802AF934 002AC874  38 80 00 17 */	li r4, 0x17
/* 802AF938 002AC878  4B FF 2B A5 */	bl JAISound_NS_stop
/* 802AF93C 002AC87C  38 00 00 37 */	li r0, 0x37
/* 802AF940 002AC880  B0 1F 00 B8 */	sth r0, 0xb8(r31)
/* 802AF944 002AC884  48 00 00 78 */	b lbl_802AF9BC
/* 802AF948 002AC888  38 00 01 A4 */	li r0, 0x1a4
/* 802AF94C 002AC88C  B0 1F 00 B8 */	sth r0, 0xb8(r31)
/* 802AF950 002AC890  80 7F 00 04 */	lwz r3, 4(r31)
/* 802AF954 002AC894  38 80 00 2D */	li r4, 0x2d
/* 802AF958 002AC898  4B FF 2B 85 */	bl JAISound_NS_stop
/* 802AF95C 002AC89C  48 00 00 60 */	b lbl_802AF9BC
/* 802AF960 002AC8A0  38 00 01 FE */	li r0, 0x1fe
/* 802AF964 002AC8A4  B0 1F 00 B8 */	sth r0, 0xb8(r31)
/* 802AF968 002AC8A8  80 7F 00 04 */	lwz r3, 4(r31)
/* 802AF96C 002AC8AC  38 80 00 2D */	li r4, 0x2d
/* 802AF970 002AC8B0  4B FF 2B 6D */	bl JAISound_NS_stop
/* 802AF974 002AC8B4  48 00 00 48 */	b lbl_802AF9BC
/* 802AF978 002AC8B8  38 00 01 68 */	li r0, 0x168
/* 802AF97C 002AC8BC  B0 1F 00 B8 */	sth r0, 0xb8(r31)
/* 802AF980 002AC8C0  80 7F 00 04 */	lwz r3, 4(r31)
/* 802AF984 002AC8C4  38 80 00 2D */	li r4, 0x2d
/* 802AF988 002AC8C8  4B FF 2B 55 */	bl JAISound_NS_stop
/* 802AF98C 002AC8CC  48 00 00 30 */	b lbl_802AF9BC
/* 802AF990 002AC8D0  38 00 01 A4 */	li r0, 0x1a4
/* 802AF994 002AC8D4  B0 1F 00 B8 */	sth r0, 0xb8(r31)
/* 802AF998 002AC8D8  80 7F 00 04 */	lwz r3, 4(r31)
/* 802AF99C 002AC8DC  38 80 00 2D */	li r4, 0x2d
/* 802AF9A0 002AC8E0  4B FF 2B 3D */	bl JAISound_NS_stop
/* 802AF9A4 002AC8E4  48 00 00 18 */	b lbl_802AF9BC
/* 802AF9A8 002AC8E8  7F E3 FB 78 */	mr r3, r31
/* 802AF9AC 002AC8EC  38 80 00 00 */	li r4, 0
/* 802AF9B0 002AC8F0  48 00 47 B5 */	bl Z2SeqMgr_NS_setBattleBgmOff
lbl_802AF9B4:
/* 802AF9B4 002AC8F4  38 00 00 0F */	li r0, 0xf
/* 802AF9B8 002AC8F8  B0 1F 00 B8 */	sth r0, 0xb8(r31)
lbl_802AF9BC:
/* 802AF9BC 002AC8FC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802AF9C0 002AC900  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802AF9C4 002AC904  7C 08 03 A6 */	mtlr r0
/* 802AF9C8 002AC908  38 21 00 20 */	addi r1, r1, 0x20
/* 802AF9CC 002AC90C  4E 80 00 20 */	blr 