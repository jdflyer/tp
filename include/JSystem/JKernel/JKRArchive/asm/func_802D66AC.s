/* findNameResource__10JKRArchiveCFPCc __ct__10JKRArchiveFlQ210JKRArchive10EMountMode::findNameResource( const(char const *)) */
/* JKRArchive_NS_findNameResource */
/* 802D66AC 002D35EC  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 802D66B0 002D35F0  7C 08 02 A6 */	mflr r0
/* 802D66B4 002D35F4  90 01 01 24 */	stw r0, 0x124(r1)
/* 802D66B8 002D35F8  39 61 01 20 */	addi r11, r1, 0x120
/* 802D66BC 002D35FC  48 08 BB 1D */	bl _savegpr_28
/* 802D66C0 002D3600  7C 7C 1B 78 */	mr r28, r3
/* 802D66C4 002D3604  83 C3 00 4C */	lwz r30, 0x4c(r3)
/* 802D66C8 002D3608  38 61 00 08 */	addi r3, r1, 8
/* 802D66CC 002D360C  48 00 01 29 */	bl store__Q210JKRArchive8CArcNameFPCc
/* 802D66D0 002D3610  3B A0 00 00 */	li r29, 0
/* 802D66D4 002D3614  83 FC 00 44 */	lwz r31, 0x44(r28)
/* 802D66D8 002D3618  48 00 00 34 */	b lbl_802D670C
lbl_802D66DC:
/* 802D66DC 002D361C  7F 83 E3 78 */	mr r3, r28
/* 802D66E0 002D3620  38 81 00 08 */	addi r4, r1, 8
/* 802D66E4 002D3624  80 1E 00 04 */	lwz r0, 4(r30)
/* 802D66E8 002D3628  54 05 02 3E */	clrlwi r5, r0, 8
/* 802D66EC 002D362C  A0 DE 00 02 */	lhz r6, 2(r30)
/* 802D66F0 002D3630  4B FF FC A5 */	bl isSameName__10JKRArchiveCFRQ210JKRArchive8CArcNameUlUs
/* 802D66F4 002D3634  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D66F8 002D3638  41 82 00 0C */	beq lbl_802D6704
/* 802D66FC 002D363C  7F C3 F3 78 */	mr r3, r30
/* 802D6700 002D3640  48 00 00 1C */	b lbl_802D671C
lbl_802D6704:
/* 802D6704 002D3644  3B DE 00 14 */	addi r30, r30, 0x14
/* 802D6708 002D3648  3B BD 00 01 */	addi r29, r29, 1
lbl_802D670C:
/* 802D670C 002D364C  80 1F 00 08 */	lwz r0, 8(r31)
/* 802D6710 002D3650  7C 1D 00 40 */	cmplw r29, r0
/* 802D6714 002D3654  41 80 FF C8 */	blt lbl_802D66DC
/* 802D6718 002D3658  38 60 00 00 */	li r3, 0
lbl_802D671C:
/* 802D671C 002D365C  39 61 01 20 */	addi r11, r1, 0x120
/* 802D6720 002D3660  48 08 BB 05 */	bl _restgpr_28
/* 802D6724 002D3664  80 01 01 24 */	lwz r0, 0x124(r1)
/* 802D6728 002D3668  7C 08 03 A6 */	mtlr r0
/* 802D672C 002D366C  38 21 01 20 */	addi r1, r1, 0x120
/* 802D6730 002D3670  4E 80 00 20 */	blr
