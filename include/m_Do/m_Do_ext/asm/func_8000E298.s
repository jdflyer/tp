/* 8000E298 0000B1D8  89 44 00 09 */ lbz r10, 9(r4)
/* 8000E29C 0000B1DC  89 24 00 08 */ lbz r9, 8(r4)
/* 8000E2A0 0000B1E0  89 04 00 07 */ lbz r8, 7(r4)
/* 8000E2A4 0000B1E4  88 E4 00 06 */ lbz r7, 6(r4)
/* 8000E2A8 0000B1E8  88 C4 00 05 */ lbz r6, 5(r4)
/* 8000E2AC 0000B1EC  88 03 00 01 */ lbz r0, 1(r3)
/* 8000E2B0 0000B1F0  54 05 07 B8 */ rlwinm r5, r0, 0, 0x1e, 0x1c
/* 8000E2B4 0000B1F4  54 C0 10 3A */ slwi r0, r6, 2
/* 8000E2B8 0000B1F8  7C A0 03 78 */ or r0, r5, r0
/* 8000E2BC 0000B1FC  98 03 00 01 */ stb r0, 1(r3)
/* 8000E2C0 0000B200  28 06 00 01 */ cmplwi r6, 1
/* 8000E2C4 0000B204  41 81 00 2C */ bgt lbl_8000E2F0
/* 8000E2C8 0000B208  88 03 00 01 */ lbz r0, 1(r3)
/* 8000E2CC 0000B20C  54 05 07 32 */ rlwinm r5, r0, 0, 0x1c, 0x19
/* 8000E2D0 0000B210  55 00 25 36 */ rlwinm r0, r8, 4, 0x14, 0x1b
/* 8000E2D4 0000B214  7C A0 03 78 */ or r0, r5, r0
/* 8000E2D8 0000B218  98 03 00 01 */ stb r0, 1(r3)
/* 8000E2DC 0000B21C  88 03 00 01 */ lbz r0, 1(r3)
/* 8000E2E0 0000B220  54 00 00 3A */ rlwinm r0, r0, 0, 0, 0x1d
/* 8000E2E4 0000B224  7C 00 3B 78 */ or r0, r0, r7
/* 8000E2E8 0000B228  98 03 00 01 */ stb r0, 1(r3)
/* 8000E2EC 0000B22C  48 00 00 20 */ b lbl_8000E30C
lbl_8000E2F0:
/* 8000E2F0 0000B230  88 03 00 01 */ lbz r0, 1(r3)
/* 8000E2F4 0000B234  50 C0 1E B6 */ rlwimi r0, r6, 3, 0x1a, 0x1b
/* 8000E2F8 0000B238  98 03 00 01 */ stb r0, 1(r3)
/* 8000E2FC 0000B23C  88 03 00 01 */ lbz r0, 1(r3)
/* 8000E300 0000B240  54 00 00 3A */ rlwinm r0, r0, 0, 0, 0x1d
/* 8000E304 0000B244  60 00 00 03 */ ori r0, r0, 3
/* 8000E308 0000B248  98 03 00 01 */ stb r0, 1(r3)
lbl_8000E30C:
/* 8000E30C 0000B24C  88 03 00 01 */ lbz r0, 1(r3)
/* 8000E310 0000B250  54 05 07 76 */ rlwinm r5, r0, 0, 0x1d, 0x1b
/* 8000E314 0000B254  55 20 1D 78 */ rlwinm r0, r9, 3, 0x15, 0x1c
/* 8000E318 0000B258  7C A0 03 78 */ or r0, r5, r0
/* 8000E31C 0000B25C  98 03 00 01 */ stb r0, 1(r3)
/* 8000E320 0000B260  88 A3 00 01 */ lbz r5, 1(r3)
/* 8000E324 0000B264  55 40 34 B2 */ rlwinm r0, r10, 6, 0x12, 0x19
/* 8000E328 0000B268  50 A0 06 BE */ rlwimi r0, r5, 0, 0x1a, 0x1f
/* 8000E32C 0000B26C  98 03 00 01 */ stb r0, 1(r3)
/* 8000E330 0000B270  88 04 00 01 */ lbz r0, 1(r4)
/* 8000E334 0000B274  54 05 25 36 */ rlwinm r5, r0, 4, 0x14, 0x1b
/* 8000E338 0000B278  88 04 00 02 */ lbz r0, 2(r4)
/* 8000E33C 0000B27C  7C A0 03 78 */ or r0, r5, r0
/* 8000E340 0000B280  98 03 00 02 */ stb r0, 2(r3)
/* 8000E344 0000B284  88 04 00 03 */ lbz r0, 3(r4)
/* 8000E348 0000B288  54 05 25 36 */ rlwinm r5, r0, 4, 0x14, 0x1b
/* 8000E34C 0000B28C  88 04 00 04 */ lbz r0, 4(r4)
/* 8000E350 0000B290  7C A0 03 78 */ or r0, r5, r0
/* 8000E354 0000B294  98 03 00 03 */ stb r0, 3(r3)
/* 8000E358 0000B298  89 04 00 0D */ lbz r8, 0xd(r4)
/* 8000E35C 0000B29C  88 E4 00 0C */ lbz r7, 0xc(r4)
/* 8000E360 0000B2A0  88 C4 00 0B */ lbz r6, 0xb(r4)
/* 8000E364 0000B2A4  88 A3 00 06 */ lbz r5, 6(r3)
/* 8000E368 0000B2A8  88 04 00 0A */ lbz r0, 0xa(r4)
/* 8000E36C 0000B2AC  54 00 2C F4 */ rlwinm r0, r0, 5, 0x13, 0x1a
/* 8000E370 0000B2B0  50 A0 06 FE */ rlwimi r0, r5, 0, 0x1b, 0x1f
/* 8000E374 0000B2B4  98 03 00 06 */ stb r0, 6(r3)
/* 8000E378 0000B2B8  88 03 00 06 */ lbz r0, 6(r3)
/* 8000E37C 0000B2BC  54 05 07 B4 */ rlwinm r5, r0, 0, 0x1e, 0x1a
/* 8000E380 0000B2C0  54 C0 10 3A */ slwi r0, r6, 2
/* 8000E384 0000B2C4  7C A0 03 78 */ or r0, r5, r0
/* 8000E388 0000B2C8  98 03 00 06 */ stb r0, 6(r3)
/* 8000E38C 0000B2CC  88 03 00 06 */ lbz r0, 6(r3)
/* 8000E390 0000B2D0  54 05 00 3A */ rlwinm r5, r0, 0, 0, 0x1d
/* 8000E394 0000B2D4  7C E0 0E 70 */ srawi r0, r7, 1
/* 8000E398 0000B2D8  7C A0 03 78 */ or r0, r5, r0
/* 8000E39C 0000B2DC  98 03 00 06 */ stb r0, 6(r3)
/* 8000E3A0 0000B2E0  88 A3 00 07 */ lbz r5, 7(r3)
/* 8000E3A4 0000B2E4  54 E0 38 30 */ slwi r0, r7, 7
/* 8000E3A8 0000B2E8  50 A0 06 7E */ rlwimi r0, r5, 0, 0x19, 0x1f
/* 8000E3AC 0000B2EC  98 03 00 07 */ stb r0, 7(r3)
/* 8000E3B0 0000B2F0  88 03 00 07 */ lbz r0, 7(r3)
/* 8000E3B4 0000B2F4  54 05 07 30 */ rlwinm r5, r0, 0, 0x1c, 0x18
/* 8000E3B8 0000B2F8  55 00 20 36 */ slwi r0, r8, 4
/* 8000E3BC 0000B2FC  7C A0 03 78 */ or r0, r5, r0
/* 8000E3C0 0000B300  98 03 00 07 */ stb r0, 7(r3)
/* 8000E3C4 0000B304  89 24 00 12 */ lbz r9, 0x12(r4)
/* 8000E3C8 0000B308  89 04 00 11 */ lbz r8, 0x11(r4)
/* 8000E3CC 0000B30C  88 E4 00 10 */ lbz r7, 0x10(r4)
/* 8000E3D0 0000B310  88 C4 00 0F */ lbz r6, 0xf(r4)
/* 8000E3D4 0000B314  88 A4 00 0E */ lbz r5, 0xe(r4)
/* 8000E3D8 0000B318  88 03 00 05 */ lbz r0, 5(r3)
/* 8000E3DC 0000B31C  54 04 07 B8 */ rlwinm r4, r0, 0, 0x1e, 0x1c
/* 8000E3E0 0000B320  54 A0 10 3A */ slwi r0, r5, 2
/* 8000E3E4 0000B324  7C 80 03 78 */ or r0, r4, r0
/* 8000E3E8 0000B328  98 03 00 05 */ stb r0, 5(r3)
/* 8000E3EC 0000B32C  28 05 00 01 */ cmplwi r5, 1
/* 8000E3F0 0000B330  41 81 00 2C */ bgt lbl_8000E41C
/* 8000E3F4 0000B334  88 03 00 05 */ lbz r0, 5(r3)
/* 8000E3F8 0000B338  54 00 00 3A */ rlwinm r0, r0, 0, 0, 0x1d
/* 8000E3FC 0000B33C  7C 00 33 78 */ or r0, r0, r6
/* 8000E400 0000B340  98 03 00 05 */ stb r0, 5(r3)
/* 8000E404 0000B344  88 03 00 05 */ lbz r0, 5(r3)
/* 8000E408 0000B348  54 04 07 32 */ rlwinm r4, r0, 0, 0x1c, 0x19
/* 8000E40C 0000B34C  54 E0 25 36 */ rlwinm r0, r7, 4, 0x14, 0x1b
/* 8000E410 0000B350  7C 80 03 78 */ or r0, r4, r0
/* 8000E414 0000B354  98 03 00 05 */ stb r0, 5(r3)
/* 8000E418 0000B358  48 00 00 20 */ b lbl_8000E438
lbl_8000E41C:
/* 8000E41C 0000B35C  88 03 00 05 */ lbz r0, 5(r3)
/* 8000E420 0000B360  50 A0 1E B6 */ rlwimi r0, r5, 3, 0x1a, 0x1b
/* 8000E424 0000B364  98 03 00 05 */ stb r0, 5(r3)
/* 8000E428 0000B368  88 03 00 05 */ lbz r0, 5(r3)
/* 8000E42C 0000B36C  54 00 00 3A */ rlwinm r0, r0, 0, 0, 0x1d
/* 8000E430 0000B370  60 00 00 03 */ ori r0, r0, 3
/* 8000E434 0000B374  98 03 00 05 */ stb r0, 5(r3)
lbl_8000E438:
/* 8000E438 0000B378  88 03 00 05 */ lbz r0, 5(r3)
/* 8000E43C 0000B37C  54 04 07 76 */ rlwinm r4, r0, 0, 0x1d, 0x1b
/* 8000E440 0000B380  55 00 1D 78 */ rlwinm r0, r8, 3, 0x15, 0x1c
/* 8000E444 0000B384  7C 80 03 78 */ or r0, r4, r0
/* 8000E448 0000B388  98 03 00 05 */ stb r0, 5(r3)
/* 8000E44C 0000B38C  88 83 00 05 */ lbz r4, 5(r3)
/* 8000E450 0000B390  55 20 34 B2 */ rlwinm r0, r9, 6, 0x12, 0x19
/* 8000E454 0000B394  50 80 06 BE */ rlwimi r0, r4, 0, 0x1a, 0x1f
/* 8000E458 0000B398  98 03 00 05 */ stb r0, 5(r3)
/* 8000E45C 0000B39C  4E 80 00 20 */ blr