/* 801ADDB4 001AACF4  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 801ADDB8 001AACF8  7C 08 02 A6 */ mflr r0
/* 801ADDBC 001AACFC  90 01 00 14 */ stw r0, 0x14(r1)
/* 801ADDC0 001AAD00  4B FF FF 9D */ bl execute__8dKyeff_cFv
/* 801ADDC4 001AAD04  80 01 00 14 */ lwz r0, 0x14(r1)
/* 801ADDC8 001AAD08  7C 08 03 A6 */ mtlr r0
/* 801ADDCC 001AAD0C  38 21 00 10 */ addi r1, r1, 0x10
/* 801ADDD0 001AAD10  4E 80 00 20 */ blr