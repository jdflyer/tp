/* 80201128 001FE068  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8020112C 001FE06C  7C 08 02 A6 */ mflr r0
/* 80201130 001FE070  90 01 00 14 */ stw r0, 0x14(r1)
/* 80201134 001FE074  93 E1 00 0C */ stw r31, 0xc(r1)
/* 80201138 001FE078  7C 7F 1B 79 */ or. r31, r3, r3
/* 8020113C 001FE07C  41 82 00 E8 */ beq lbl_80201224
/* 80201140 001FE080  3C 60 80 3C */ lis r3, lbl_803BF118@ha
/* 80201144 001FE084  38 03 F1 18 */ addi r0, r3, lbl_803BF118@l
/* 80201148 001FE088  90 1F 00 00 */ stw r0, 0(r31)
/* 8020114C 001FE08C  34 1F 0E 7C */ addic. r0, r31, 0xe7c
/* 80201150 001FE090  41 82 00 10 */ beq lbl_80201160
/* 80201154 001FE094  3C 60 80 3C */ lis r3, lbl_803BF124@ha
/* 80201158 001FE098  38 03 F1 24 */ addi r0, r3, lbl_803BF124@l
/* 8020115C 001FE09C  90 1F 0E 7C */ stw r0, 0xe7c(r31)
lbl_80201160:
/* 80201160 001FE0A0  34 1F 0C 20 */ addic. r0, r31, 0xc20
/* 80201164 001FE0A4  41 82 00 10 */ beq lbl_80201174
/* 80201168 001FE0A8  3C 60 80 3C */ lis r3, lbl_803BF13C@ha
/* 8020116C 001FE0AC  38 03 F1 3C */ addi r0, r3, lbl_803BF13C@l
/* 80201170 001FE0B0  90 1F 0C 20 */ stw r0, 0xc20(r31)
lbl_80201174:
/* 80201174 001FE0B4  34 1F 0A 90 */ addic. r0, r31, 0xa90
/* 80201178 001FE0B8  41 82 00 10 */ beq lbl_80201188
/* 8020117C 001FE0BC  3C 60 80 3C */ lis r3, lbl_803BF130@ha
/* 80201180 001FE0C0  38 03 F1 30 */ addi r0, r3, lbl_803BF130@l
/* 80201184 001FE0C4  90 1F 0A 90 */ stw r0, 0xa90(r31)
lbl_80201188:
/* 80201188 001FE0C8  34 1F 0A 34 */ addic. r0, r31, 0xa34
/* 8020118C 001FE0CC  41 82 00 10 */ beq lbl_8020119C
/* 80201190 001FE0D0  3C 60 80 3C */ lis r3, lbl_803BF148@ha
/* 80201194 001FE0D4  38 03 F1 48 */ addi r0, r3, lbl_803BF148@l
/* 80201198 001FE0D8  90 1F 0A 34 */ stw r0, 0xa34(r31)
lbl_8020119C:
/* 8020119C 001FE0DC  34 1F 0A 1C */ addic. r0, r31, 0xa1c
/* 802011A0 001FE0E0  41 82 00 10 */ beq lbl_802011B0
/* 802011A4 001FE0E4  3C 60 80 3C */ lis r3, lbl_803BF154@ha
/* 802011A8 001FE0E8  38 03 F1 54 */ addi r0, r3, lbl_803BF154@l
/* 802011AC 001FE0EC  90 1F 0A 1C */ stw r0, 0xa1c(r31)
lbl_802011B0:
/* 802011B0 001FE0F0  34 1F 09 DC */ addic. r0, r31, 0x9dc
/* 802011B4 001FE0F4  41 82 00 10 */ beq lbl_802011C4
/* 802011B8 001FE0F8  3C 60 80 3C */ lis r3, lbl_803BF160@ha
/* 802011BC 001FE0FC  38 03 F1 60 */ addi r0, r3, lbl_803BF160@l
/* 802011C0 001FE100  90 1F 09 DC */ stw r0, 0x9dc(r31)
lbl_802011C4:
/* 802011C4 001FE104  34 1F 07 88 */ addic. r0, r31, 0x788
/* 802011C8 001FE108  41 82 00 10 */ beq lbl_802011D8
/* 802011CC 001FE10C  3C 60 80 3C */ lis r3, lbl_803BF16C@ha
/* 802011D0 001FE110  38 03 F1 6C */ addi r0, r3, lbl_803BF16C@l
/* 802011D4 001FE114  90 1F 07 88 */ stw r0, 0x788(r31)
lbl_802011D8:
/* 802011D8 001FE118  34 1F 07 28 */ addic. r0, r31, 0x728
/* 802011DC 001FE11C  41 82 00 10 */ beq lbl_802011EC
/* 802011E0 001FE120  3C 60 80 3C */ lis r3, lbl_803BF178@ha
/* 802011E4 001FE124  38 03 F1 78 */ addi r0, r3, lbl_803BF178@l
/* 802011E8 001FE128  90 1F 07 28 */ stw r0, 0x728(r31)
lbl_802011EC:
/* 802011EC 001FE12C  34 1F 06 B8 */ addic. r0, r31, 0x6b8
/* 802011F0 001FE130  41 82 00 10 */ beq lbl_80201200
/* 802011F4 001FE134  3C 60 80 3C */ lis r3, lbl_803BF184@ha
/* 802011F8 001FE138  38 03 F1 84 */ addi r0, r3, lbl_803BF184@l
/* 802011FC 001FE13C  90 1F 06 B8 */ stw r0, 0x6b8(r31)
lbl_80201200:
/* 80201200 001FE140  34 1F 06 18 */ addic. r0, r31, 0x618
/* 80201204 001FE144  41 82 00 10 */ beq lbl_80201214
/* 80201208 001FE148  3C 60 80 3C */ lis r3, lbl_803BF190@ha
/* 8020120C 001FE14C  38 03 F1 90 */ addi r0, r3, lbl_803BF190@l
/* 80201210 001FE150  90 1F 06 18 */ stw r0, 0x618(r31)
lbl_80201214:
/* 80201214 001FE154  7C 80 07 35 */ extsh. r0, r4
/* 80201218 001FE158  40 81 00 0C */ ble lbl_80201224
/* 8020121C 001FE15C  7F E3 FB 78 */ mr r3, r31
/* 80201220 001FE160  48 0C DB 1D */ bl __dl__FPv
lbl_80201224:
/* 80201224 001FE164  7F E3 FB 78 */ mr r3, r31
/* 80201228 001FE168  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8020122C 001FE16C  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80201230 001FE170  7C 08 03 A6 */ mtlr r0
/* 80201234 001FE174  38 21 00 10 */ addi r1, r1, 0x10
/* 80201238 001FE178  4E 80 00 20 */ blr