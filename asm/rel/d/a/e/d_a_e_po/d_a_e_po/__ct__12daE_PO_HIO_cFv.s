lbl_8074C54C:
/* 8074C54C  3C 80 80 75 */	lis r4, lit_3917@ha /* 0x807576FC@ha */
/* 8074C550  38 A4 76 FC */	addi r5, r4, lit_3917@l /* 0x807576FC@l */
/* 8074C554  3C 80 80 75 */	lis r4, __vt__12daE_PO_HIO_c@ha /* 0x80757DFC@ha */
/* 8074C558  38 04 7D FC */	addi r0, r4, __vt__12daE_PO_HIO_c@l /* 0x80757DFC@l */
/* 8074C55C  90 03 00 00 */	stw r0, 0(r3)
/* 8074C560  38 00 FF FF */	li r0, -1
/* 8074C564  98 03 00 04 */	stb r0, 4(r3)
/* 8074C568  C0 05 00 2C */	lfs f0, 0x2c(r5)
/* 8074C56C  D0 03 00 08 */	stfs f0, 8(r3)
/* 8074C570  C0 05 00 30 */	lfs f0, 0x30(r5)
/* 8074C574  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8074C578  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 8074C57C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8074C580  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 8074C584  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8074C588  C0 05 00 3C */	lfs f0, 0x3c(r5)
/* 8074C58C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8074C590  38 00 00 48 */	li r0, 0x48
/* 8074C594  B0 03 00 1C */	sth r0, 0x1c(r3)
/* 8074C598  38 00 00 85 */	li r0, 0x85
/* 8074C59C  B0 03 00 1E */	sth r0, 0x1e(r3)
/* 8074C5A0  38 80 00 FF */	li r4, 0xff
/* 8074C5A4  B0 83 00 20 */	sth r4, 0x20(r3)
/* 8074C5A8  B0 83 00 28 */	sth r4, 0x28(r3)
/* 8074C5AC  38 00 00 00 */	li r0, 0
/* 8074C5B0  B0 03 00 22 */	sth r0, 0x22(r3)
/* 8074C5B4  B0 03 00 24 */	sth r0, 0x24(r3)
/* 8074C5B8  B0 83 00 26 */	sth r4, 0x26(r3)
/* 8074C5BC  38 80 00 96 */	li r4, 0x96
/* 8074C5C0  B0 83 00 2A */	sth r4, 0x2a(r3)
/* 8074C5C4  38 00 00 4B */	li r0, 0x4b
/* 8074C5C8  B0 03 00 2C */	sth r0, 0x2c(r3)
/* 8074C5CC  B0 03 00 2E */	sth r0, 0x2e(r3)
/* 8074C5D0  B0 83 00 30 */	sth r4, 0x30(r3)
/* 8074C5D4  38 00 00 32 */	li r0, 0x32
/* 8074C5D8  B0 03 00 32 */	sth r0, 0x32(r3)
/* 8074C5DC  B0 03 00 34 */	sth r0, 0x34(r3)
/* 8074C5E0  C0 05 00 08 */	lfs f0, 8(r5)
/* 8074C5E4  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8074C5E8  4E 80 00 20 */	blr 
