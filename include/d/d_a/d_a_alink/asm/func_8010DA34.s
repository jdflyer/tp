/* 8010DA34 0010A974  3C 60 80 39 */ lis r3, lbl_8038EA30@ha
/* 8010DA38 0010A978  38 63 EA 30 */ addi r3, r3, lbl_8038EA30@l
/* 8010DA3C 0010A97C  A8 63 00 1A */ lha r3, 0x1a(r3)
/* 8010DA40 0010A980  4E 80 00 20 */ blr