/* __dt__9JKRDecompFv __ct__9JKRDecompFl::__dt(void) */
/* missing reference */
/* 802DB730 002D8670  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DB734 002D8674  7C 08 02 A6 */	mflr r0
/* 802DB738 002D8678  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DB73C 002D867C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DB740 002D8680  93 C1 00 08 */	stw r30, 8(r1)
/* 802DB744 002D8684  7C 7E 1B 79 */	or. r30, r3, r3
/* 802DB748 002D8688  7C 9F 23 78 */	mr r31, r4
/* 802DB74C 002D868C  41 82 00 28 */	beq lbl_802DB774
/* 802DB750 002D8690  3C 80 80 3D */	lis r4, lbl_803CC4A0@ha
/* 802DB754 002D8694  38 04 C4 A0 */	addi r0, r4, lbl_803CC4A0@l
/* 802DB758 002D8698  90 1E 00 00 */	stw r0, 0(r30)
/* 802DB75C 002D869C  38 80 00 00 */	li r4, 0
/* 802DB760 002D86A0  4B FF 5F F9 */	bl __dt__9JKRThreadFv
/* 802DB764 002D86A4  7F E0 07 35 */	extsh. r0, r31
/* 802DB768 002D86A8  40 81 00 0C */	ble lbl_802DB774
/* 802DB76C 002D86AC  7F C3 F3 78 */	mr r3, r30
/* 802DB770 002D86B0  4B FF 35 CD */	bl __dl__FPv
lbl_802DB774:
/* 802DB774 002D86B4  7F C3 F3 78 */	mr r3, r30
/* 802DB778 002D86B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DB77C 002D86BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802DB780 002D86C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DB784 002D86C4  7C 08 03 A6 */	mtlr r0
/* 802DB788 002D86C8  38 21 00 10 */	addi r1, r1, 0x10
/* 802DB78C 002D86CC  4E 80 00 20 */	blr
