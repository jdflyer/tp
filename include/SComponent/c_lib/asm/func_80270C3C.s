/* 80270C3C 0026DB7C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 80270C40 0026DB80  7C 08 02 A6 */ mflr r0
/* 80270C44 0026DB84  90 01 00 14 */ stw r0, 0x14(r1)
/* 80270C48 0026DB88  C0 24 00 00 */ lfs f1, 0(r4)
/* 80270C4C 0026DB8C  C0 03 00 00 */ lfs f0, 0(r3)
/* 80270C50 0026DB90  EC 21 00 28 */ fsubs f1, f1, f0
/* 80270C54 0026DB94  C0 44 00 08 */ lfs f2, 8(r4)
/* 80270C58 0026DB98  C0 03 00 08 */ lfs f0, 8(r3)
/* 80270C5C 0026DB9C  EC 42 00 28 */ fsubs f2, f2, f0
/* 80270C60 0026DBA0  4B FF 6A 15 */ bl cM_atan2s__Fff
/* 80270C64 0026DBA4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80270C68 0026DBA8  7C 08 03 A6 */ mtlr r0
/* 80270C6C 0026DBAC  38 21 00 10 */ addi r1, r1, 0x10
/* 80270C70 0026DBB0  4E 80 00 20 */ blr
