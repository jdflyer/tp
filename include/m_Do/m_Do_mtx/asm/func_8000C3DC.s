/* 8000C3DC 0000931C  3C A0 80 44 */ lis r5, lbl_80439A20@ha
/* 8000C3E0 00009320  38 A5 9A 20 */ addi r5, r5, lbl_80439A20@l
/* 8000C3E4 00009324  54 80 04 38 */ rlwinm r0, r4, 0, 0x10, 0x1c
/* 8000C3E8 00009328  7C 85 02 14 */ add r4, r5, r0
/* 8000C3EC 0000932C  C0 44 00 04 */ lfs f2, 4(r4)
/* 8000C3F0 00009330  7C 65 04 2E */ lfsx f3, r5, r0
/* 8000C3F4 00009334  D0 43 00 00 */ stfs f2, 0(r3)
/* 8000C3F8 00009338  C0 22 81 0C */ lfs f1, lbl_80451B0C-_SDA2_BASE_(r2)
/* 8000C3FC 0000933C  D0 23 00 04 */ stfs f1, 4(r3)
/* 8000C400 00009340  D0 63 00 08 */ stfs f3, 8(r3)
/* 8000C404 00009344  D0 23 00 0C */ stfs f1, 0xc(r3)
/* 8000C408 00009348  D0 23 00 10 */ stfs f1, 0x10(r3)
/* 8000C40C 0000934C  C0 02 81 08 */ lfs f0, lbl_80451B08-_SDA2_BASE_(r2)
/* 8000C410 00009350  D0 03 00 14 */ stfs f0, 0x14(r3)
/* 8000C414 00009354  D0 23 00 18 */ stfs f1, 0x18(r3)
/* 8000C418 00009358  D0 23 00 1C */ stfs f1, 0x1c(r3)
/* 8000C41C 0000935C  FC 00 18 50 */ fneg f0, f3
/* 8000C420 00009360  D0 03 00 20 */ stfs f0, 0x20(r3)
/* 8000C424 00009364  D0 23 00 24 */ stfs f1, 0x24(r3)
/* 8000C428 00009368  D0 43 00 28 */ stfs f2, 0x28(r3)
/* 8000C42C 0000936C  D0 23 00 2C */ stfs f1, 0x2c(r3)
/* 8000C430 00009370  4E 80 00 20 */ blr
