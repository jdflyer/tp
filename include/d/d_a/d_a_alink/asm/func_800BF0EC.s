/* 800BF0EC 000BC02C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800BF0F0 000BC030  7C 08 02 A6 */ mflr r0
/* 800BF0F4 000BC034  90 01 00 14 */ stw r0, 0x14(r1)
/* 800BF0F8 000BC038  7C 66 1B 78 */ mr r6, r3
/* 800BF0FC 000BC03C  90 81 00 08 */ stw r4, 8(r1)
/* 800BF100 000BC040  38 66 2C A8 */ addi r3, r6, 0x2ca8
/* 800BF104 000BC044  38 81 00 08 */ addi r4, r1, 8
/* 800BF108 000BC048  38 A0 00 00 */ li r5, 0
/* 800BF10C 000BC04C  88 C6 2F 9A */ lbz r6, 0x2f9a(r6)
/* 800BF110 000BC050  48 20 55 E1 */ bl startLinkSwordSound__14Z2CreatureLinkF10JAISoundIDUlSc
/* 800BF114 000BC054  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800BF118 000BC058  7C 08 03 A6 */ mtlr r0
/* 800BF11C 000BC05C  38 21 00 10 */ addi r1, r1, 0x10
/* 800BF120 000BC060  4E 80 00 20 */ blr