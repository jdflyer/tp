/* 800350BC 00031FFC  54 84 28 34 */	slwi r4, r4, 5
/* 800350C0 00032000  38 84 01 F0 */	addi r4, r4, 0x1f0
/* 800350C4 00032004  7C 83 22 14 */	add r4, r3, r4
/* 800350C8 00032008  38 A3 09 54 */	addi r5, r3, 0x954
/* 800350CC 0003200C  38 84 FF FC */	addi r4, r4, -4
/* 800350D0 00032010  38 00 00 04 */	li r0, 4
/* 800350D4 00032014  7C 09 03 A6 */	mtctr r0
lbl_800350D8:
/* 800350D8 00032018  80 64 00 04 */	lwz r3, 4(r4)
/* 800350DC 0003201C  84 04 00 08 */	lwzu r0, 8(r4)
/* 800350E0 00032020  90 65 00 04 */	stw r3, 4(r5)
/* 800350E4 00032024  94 05 00 08 */	stwu r0, 8(r5)
/* 800350E8 00032028  42 00 FF F0 */	bdnz lbl_800350D8
/* 800350EC 0003202C  4E 80 00 20 */	blr 