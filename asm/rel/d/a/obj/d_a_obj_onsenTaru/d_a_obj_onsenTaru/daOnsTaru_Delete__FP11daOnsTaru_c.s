lbl_80CA99E4:
/* 80CA99E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CA99E8  7C 08 02 A6 */	mflr r0
/* 80CA99EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CA99F0  81 83 05 68 */	lwz r12, 0x568(r3)
/* 80CA99F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80CA99F8  7D 89 03 A6 */	mtctr r12
/* 80CA99FC  4E 80 04 21 */	bctrl 
/* 80CA9A00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CA9A04  7C 08 03 A6 */	mtlr r0
/* 80CA9A08  38 21 00 10 */	addi r1, r1, 0x10
/* 80CA9A0C  4E 80 00 20 */	blr 
