/* __dt__10JKRExpHeapFv __ct__10JKRExpHeapFPvUlP7JKRHeapb::__dt(void) */
/* missing reference */
/* 802CF0C0 002CC000  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CF0C4 002CC004  7C 08 02 A6 */	mflr r0
/* 802CF0C8 002CC008  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CF0CC 002CC00C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CF0D0 002CC010  93 C1 00 08 */	stw r30, 8(r1)
/* 802CF0D4 002CC014  7C 7E 1B 79 */	or. r30, r3, r3
/* 802CF0D8 002CC018  7C 9F 23 78 */	mr r31, r4
/* 802CF0DC 002CC01C  41 82 00 30 */	beq lbl_802CF10C
/* 802CF0E0 002CC020  3C 80 80 3D */	lis r4, lbl_803CBFD0@ha
/* 802CF0E4 002CC024  38 04 BF D0 */	addi r0, r4, lbl_803CBFD0@l
/* 802CF0E8 002CC028  90 1E 00 00 */	stw r0, 0(r30)
/* 802CF0EC 002CC02C  4B FF F9 D5 */	bl dispose__7JKRHeapFv
/* 802CF0F0 002CC030  7F C3 F3 78 */	mr r3, r30
/* 802CF0F4 002CC034  38 80 00 00 */	li r4, 0
/* 802CF0F8 002CC038  4B FF F1 6D */	bl __dt__7JKRHeapFv
/* 802CF0FC 002CC03C  7F E0 07 35 */	extsh. r0, r31
/* 802CF100 002CC040  40 81 00 0C */	ble lbl_802CF10C
/* 802CF104 002CC044  7F C3 F3 78 */	mr r3, r30
/* 802CF108 002CC048  4B FF FC 35 */	bl __dl__FPv
lbl_802CF10C:
/* 802CF10C 002CC04C  7F C3 F3 78 */	mr r3, r30
/* 802CF110 002CC050  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CF114 002CC054  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CF118 002CC058  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CF11C 002CC05C  7C 08 03 A6 */	mtlr r0
/* 802CF120 002CC060  38 21 00 10 */	addi r1, r1, 0x10
/* 802CF124 002CC064  4E 80 00 20 */	blr
