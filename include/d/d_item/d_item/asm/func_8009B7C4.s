/* 8009B7C4 00098704  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009B7C8 00098708  7C 08 02 A6 */	mflr r0
/* 8009B7CC 0009870C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009B7D0 00098710  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009B7D4 00098714  7C 7F 1B 78 */	mr r31, r3
/* 8009B7D8 00098718  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8009B7DC 0009871C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8009B7E0 00098720  38 80 00 00 */	li r4, 0
/* 8009B7E4 00098724  4B F9 73 15 */	bl isMagicFlag__21dSv_player_status_a_cCFUc
/* 8009B7E8 00098728  2C 03 00 00 */	cmpwi r3, 0
/* 8009B7EC 0009872C  40 82 00 1C */	bne lbl_8009B808
/* 8009B7F0 00098730  2C 1F 00 08 */	cmpwi r31, 8
/* 8009B7F4 00098734  41 82 00 0C */	beq lbl_8009B800
/* 8009B7F8 00098738  2C 1F 00 09 */	cmpwi r31, 9
/* 8009B7FC 0009873C  40 82 00 0C */	bne lbl_8009B808
lbl_8009B800:
/* 8009B800 00098740  38 60 00 01 */	li r3, 1
/* 8009B804 00098744  48 00 01 28 */	b lbl_8009B92C
lbl_8009B808:
/* 8009B808 00098748  2C 1F 00 11 */	cmpwi r31, 0x11
/* 8009B80C 0009874C  40 82 00 28 */	bne lbl_8009B834
/* 8009B810 00098750  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8009B814 00098754  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8009B818 00098758  38 63 00 CC */	addi r3, r3, 0xcc
/* 8009B81C 0009875C  38 80 00 43 */	li r4, 0x43
/* 8009B820 00098760  4B F9 86 A9 */	bl isFirstBit__21dSv_player_get_item_cCFUc
/* 8009B824 00098764  2C 03 00 00 */	cmpwi r3, 0
/* 8009B828 00098768  40 82 00 8C */	bne lbl_8009B8B4
/* 8009B82C 0009876C  38 60 00 01 */	li r3, 1
/* 8009B830 00098770  48 00 00 FC */	b lbl_8009B92C
lbl_8009B834:
/* 8009B834 00098774  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 8009B838 00098778  4B FF FE 9D */	bl isArrow
/* 8009B83C 0009877C  2C 03 00 00 */	cmpwi r3, 0
/* 8009B840 00098780  41 82 00 74 */	beq lbl_8009B8B4
/* 8009B844 00098784  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8009B848 00098788  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8009B84C 0009878C  38 63 00 CC */	addi r3, r3, 0xcc
/* 8009B850 00098790  38 80 00 43 */	li r4, 0x43
/* 8009B854 00098794  4B F9 86 75 */	bl isFirstBit__21dSv_player_get_item_cCFUc
/* 8009B858 00098798  2C 03 00 00 */	cmpwi r3, 0
/* 8009B85C 0009879C  40 82 00 0C */	bne lbl_8009B868
/* 8009B860 000987A0  38 60 00 01 */	li r3, 1
/* 8009B864 000987A4  48 00 00 C8 */	b lbl_8009B92C
lbl_8009B868:
/* 8009B868 000987A8  38 60 00 00 */	li r3, 0
/* 8009B86C 000987AC  4B F9 11 11 */	bl dComIfG_play_c_NS_getLayerNo
/* 8009B870 000987B0  2C 03 00 0D */	cmpwi r3, 0xd
/* 8009B874 000987B4  41 82 00 14 */	beq lbl_8009B888
/* 8009B878 000987B8  38 60 00 00 */	li r3, 0
/* 8009B87C 000987BC  4B F9 11 01 */	bl dComIfG_play_c_NS_getLayerNo
/* 8009B880 000987C0  2C 03 00 0E */	cmpwi r3, 0xe
/* 8009B884 000987C4  40 82 00 30 */	bne lbl_8009B8B4
lbl_8009B888:
/* 8009B888 000987C8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8009B88C 000987CC  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8009B890 000987D0  38 63 4E 00 */	addi r3, r3, 0x4e00
/* 8009B894 000987D4  3C 80 80 38 */	lis r4, lbl_8037B0D0@ha
/* 8009B898 000987D8  38 84 B0 D0 */	addi r4, r4, lbl_8037B0D0@l
/* 8009B89C 000987DC  38 A0 00 06 */	li r5, 6
/* 8009B8A0 000987E0  48 2C D0 B5 */	bl func_80368954
/* 8009B8A4 000987E4  2C 03 00 00 */	cmpwi r3, 0
/* 8009B8A8 000987E8  41 82 00 0C */	beq lbl_8009B8B4
/* 8009B8AC 000987EC  38 60 00 01 */	li r3, 1
/* 8009B8B0 000987F0  48 00 00 7C */	b lbl_8009B92C
lbl_8009B8B4:
/* 8009B8B4 000987F4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8009B8B8 000987F8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8009B8BC 000987FC  38 63 00 CC */	addi r3, r3, 0xcc
/* 8009B8C0 00098800  38 80 00 50 */	li r4, 0x50
/* 8009B8C4 00098804  4B F9 86 05 */	bl isFirstBit__21dSv_player_get_item_cCFUc
/* 8009B8C8 00098808  2C 03 00 00 */	cmpwi r3, 0
/* 8009B8CC 0009880C  40 82 00 1C */	bne lbl_8009B8E8
/* 8009B8D0 00098810  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 8009B8D4 00098814  4B FF FD B5 */	bl isBomb
/* 8009B8D8 00098818  2C 03 00 00 */	cmpwi r3, 0
/* 8009B8DC 0009881C  41 82 00 0C */	beq lbl_8009B8E8
/* 8009B8E0 00098820  38 60 00 01 */	li r3, 1
/* 8009B8E4 00098824  48 00 00 48 */	b lbl_8009B92C
lbl_8009B8E8:
/* 8009B8E8 00098828  2C 1F 00 1F */	cmpwi r31, 0x1f
/* 8009B8EC 0009882C  40 82 00 08 */	bne lbl_8009B8F4
/* 8009B8F0 00098830  3B E0 00 00 */	li r31, 0
lbl_8009B8F4:
/* 8009B8F4 00098834  38 60 00 4B */	li r3, 0x4b
/* 8009B8F8 00098838  38 80 00 01 */	li r4, 1
/* 8009B8FC 0009883C  4B FF C5 E5 */	bl checkItemGet__FUci
/* 8009B900 00098840  2C 03 00 00 */	cmpwi r3, 0
/* 8009B904 00098844  40 82 00 10 */	bne lbl_8009B914
/* 8009B908 00098848  2C 1F 00 12 */	cmpwi r31, 0x12
/* 8009B90C 0009884C  40 82 00 08 */	bne lbl_8009B914
/* 8009B910 00098850  3B E0 00 01 */	li r31, 1
lbl_8009B914:
/* 8009B914 00098854  2C 1F 00 08 */	cmpwi r31, 8
/* 8009B918 00098858  41 82 00 0C */	beq lbl_8009B924
/* 8009B91C 0009885C  2C 1F 00 09 */	cmpwi r31, 9
/* 8009B920 00098860  40 82 00 08 */	bne lbl_8009B928
lbl_8009B924:
/* 8009B924 00098864  3B E0 00 01 */	li r31, 1
lbl_8009B928:
/* 8009B928 00098868  57 E3 06 3E */	clrlwi r3, r31, 0x18
lbl_8009B92C:
/* 8009B92C 0009886C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009B930 00098870  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009B934 00098874  7C 08 03 A6 */	mtlr r0
/* 8009B938 00098878  38 21 00 10 */	addi r1, r1, 0x10
/* 8009B93C 0009887C  4E 80 00 20 */	blr 