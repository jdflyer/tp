lbl_8097196C:
/* 8097196C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80971970  7C 08 02 A6 */	mflr r0
/* 80971974  90 01 00 14 */	stw r0, 0x14(r1)
/* 80971978  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8097197C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80971980  41 82 00 1C */	beq lbl_8097199C
/* 80971984  3C A0 80 97 */	lis r5, __vt__18daNpcT_ActorMngr_c@ha /* 0x80973330@ha */
/* 80971988  38 05 33 30 */	addi r0, r5, __vt__18daNpcT_ActorMngr_c@l /* 0x80973330@l */
/* 8097198C  90 1F 00 04 */	stw r0, 4(r31)
/* 80971990  7C 80 07 35 */	extsh. r0, r4
/* 80971994  40 81 00 08 */	ble lbl_8097199C
/* 80971998  4B 95 D3 A5 */	bl __dl__FPv
lbl_8097199C:
/* 8097199C  7F E3 FB 78 */	mr r3, r31
/* 809719A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809719A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809719A8  7C 08 03 A6 */	mtlr r0
/* 809719AC  38 21 00 10 */	addi r1, r1, 0x10
/* 809719B0  4E 80 00 20 */	blr 
