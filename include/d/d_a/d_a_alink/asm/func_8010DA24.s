/* 8010DA24 0010A964  3C 60 80 39 */ lis r3, lbl_8038EA30@ha
/* 8010DA28 0010A968  38 63 EA 30 */ addi r3, r3, lbl_8038EA30@l
/* 8010DA2C 0010A96C  A8 63 00 18 */ lha r3, 0x18(r3)
/* 8010DA30 0010A970  4E 80 00 20 */ blr