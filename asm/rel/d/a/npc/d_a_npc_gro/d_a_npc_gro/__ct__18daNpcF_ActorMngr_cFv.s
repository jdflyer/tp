lbl_809DE6D0:
/* 809DE6D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809DE6D4  7C 08 02 A6 */	mflr r0
/* 809DE6D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 809DE6DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809DE6E0  7C 7F 1B 78 */	mr r31, r3
/* 809DE6E4  3C 80 80 9E */	lis r4, __vt__18daNpcF_ActorMngr_c@ha /* 0x809DF6BC@ha */
/* 809DE6E8  38 04 F6 BC */	addi r0, r4, __vt__18daNpcF_ActorMngr_c@l /* 0x809DF6BC@l */
/* 809DE6EC  90 03 00 04 */	stw r0, 4(r3)
/* 809DE6F0  4B 77 1F C1 */	bl initialize__18daNpcF_ActorMngr_cFv
/* 809DE6F4  7F E3 FB 78 */	mr r3, r31
/* 809DE6F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809DE6FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809DE700  7C 08 03 A6 */	mtlr r0
/* 809DE704  38 21 00 10 */	addi r1, r1, 0x10
/* 809DE708  4E 80 00 20 */	blr 
