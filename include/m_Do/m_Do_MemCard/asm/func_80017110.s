/* 80017110 00014050  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 80017114 00014054  7C 08 02 A6 */ mflr r0
/* 80017118 00014058  90 01 00 14 */ stw r0, 0x14(r1)
/* 8001711C 0001405C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 80017120 00014060  7C 7F 1B 78 */ mr r31, r3
/* 80017124 00014064  88 63 1F BC */ lbz r3, 0x1fbc(r3)
/* 80017128 00014068  48 34 02 B1 */ bl CARDUnmount
/* 8001712C 0001406C  38 00 00 00 */ li r0, 0
/* 80017130 00014070  90 1F 1F C4 */ stw r0, 0x1fc4(r31)
/* 80017134 00014074  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 80017138 00014078  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8001713C 0001407C  7C 08 03 A6 */ mtlr r0
/* 80017140 00014080  38 21 00 10 */ addi r1, r1, 0x10
/* 80017144 00014084  4E 80 00 20 */ blr
