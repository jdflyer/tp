/* getFirstFile__12JKRFileCacheCFPCc __ct__12JKRFileCacheFPCcPCc::getFirstFile( const(char const *)) */
/* missing reference */
/* 802D531C 002D225C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D5320 002D2260  7C 08 02 A6 */	mflr r0
/* 802D5324 002D2264  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D5328 002D2268  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D532C 002D226C  93 C1 00 08 */	stw r30, 8(r1)
/* 802D5330 002D2270  48 00 01 ED */	bl getDvdPathName__12JKRFileCacheCFPCc
/* 802D5334 002D2274  7C 7E 1B 78 */	mr r30, r3
/* 802D5338 002D2278  38 60 00 24 */	li r3, 0x24
/* 802D533C 002D227C  80 8D 8D F0 */	lwz r4, sSystemHeap__7JKRHeap-_SDA_BASE_(r13)
/* 802D5340 002D2280  38 A0 00 00 */	li r5, 0
/* 802D5344 002D2284  4B FF 99 55 */	bl __nw__FUlP7JKRHeapi
/* 802D5348 002D2288  7C 7F 1B 79 */	or. r31, r3, r3
/* 802D534C 002D228C  41 82 00 10 */	beq lbl_802D535C
/* 802D5350 002D2290  7F C4 F3 78 */	mr r4, r30
/* 802D5354 002D2294  4B FF F4 1D */	bl __ct__12JKRDvdFinderFPCc
/* 802D5358 002D2298  7C 7F 1B 78 */	mr r31, r3
lbl_802D535C:
/* 802D535C 002D229C  80 6D 8D F0 */	lwz r3, sSystemHeap__7JKRHeap-_SDA_BASE_(r13)
/* 802D5360 002D22A0  7F C4 F3 78 */	mr r4, r30
/* 802D5364 002D22A4  4B FF 91 E5 */	bl free__7JKRHeapFPv
/* 802D5368 002D22A8  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 802D536C 002D22AC  28 00 00 01 */	cmplwi r0, 1
/* 802D5370 002D22B0  41 82 00 2C */	beq lbl_802D539C
/* 802D5374 002D22B4  28 1F 00 00 */	cmplwi r31, 0
/* 802D5378 002D22B8  41 82 00 1C */	beq lbl_802D5394
/* 802D537C 002D22BC  7F E3 FB 78 */	mr r3, r31
/* 802D5380 002D22C0  38 80 00 01 */	li r4, 1
/* 802D5384 002D22C4  81 9F 00 0C */	lwz r12, 0xc(r31)
/* 802D5388 002D22C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D538C 002D22CC  7D 89 03 A6 */	mtctr r12
/* 802D5390 002D22D0  4E 80 04 21 */	bctrl
lbl_802D5394:
/* 802D5394 002D22D4  38 60 00 00 */	li r3, 0
/* 802D5398 002D22D8  48 00 00 08 */	b lbl_802D53A0
lbl_802D539C:
/* 802D539C 002D22DC  7F E3 FB 78 */	mr r3, r31
lbl_802D53A0:
/* 802D53A0 002D22E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D53A4 002D22E4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D53A8 002D22E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D53AC 002D22EC  7C 08 03 A6 */	mtlr r0
/* 802D53B0 002D22F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D53B4 002D22F4  4E 80 00 20 */	blr
