/* 80073FC4 00070F04  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 80073FC8 00070F08  7C 08 02 A6 */ mflr r0
/* 80073FCC 00070F0C  90 01 00 14 */ stw r0, 0x14(r1)
/* 80073FD0 00070F10  93 E1 00 0C */ stw r31, 0xc(r1)
/* 80073FD4 00070F14  7C 7F 1B 79 */ or. r31, r3, r3
/* 80073FD8 00070F18  41 82 00 1C */ beq lbl_80073FF4
/* 80073FDC 00070F1C  3C A0 80 3B */ lis r5, lbl_803A9C54@ha
/* 80073FE0 00070F20  38 05 9C 54 */ addi r0, r5, lbl_803A9C54@l
/* 80073FE4 00070F24  90 1F 00 00 */ stw r0, 0(r31)
/* 80073FE8 00070F28  7C 80 07 35 */ extsh. r0, r4
/* 80073FEC 00070F2C  40 81 00 08 */ ble lbl_80073FF4
/* 80073FF0 00070F30  48 25 AD 4D */ bl __dl__FPv
lbl_80073FF4:
/* 80073FF4 00070F34  7F E3 FB 78 */ mr r3, r31
/* 80073FF8 00070F38  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 80073FFC 00070F3C  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80074000 00070F40  7C 08 03 A6 */ mtlr r0
/* 80074004 00070F44  38 21 00 10 */ addi r1, r1, 0x10
/* 80074008 00070F48  4E 80 00 20 */ blr