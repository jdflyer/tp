/* 8012FE80 0012CDC0  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 8012FE84 0012CDC4  7C 08 02 A6 */ mflr r0
/* 8012FE88 0012CDC8  90 01 00 34 */ stw r0, 0x34(r1)
/* 8012FE8C 0012CDCC  39 61 00 30 */ addi r11, r1, 0x30
/* 8012FE90 0012CDD0  48 23 23 4D */ bl _savegpr_29
/* 8012FE94 0012CDD4  7C 7F 1B 78 */ mr r31, r3
/* 8012FE98 0012CDD8  7C 9E 23 78 */ mr r30, r4
/* 8012FE9C 0012CDDC  7C BD 2B 78 */ mr r29, r5
/* 8012FEA0 0012CDE0  7F C3 F3 78 */ mr r3, r30
/* 8012FEA4 0012CDE4  A8 9F 04 E6 */ lha r4, 0x4e6(r31)
/* 8012FEA8 0012CDE8  48 14 0F 7D */ bl cLib_distanceAngleS__Fss
/* 8012FEAC 0012CDEC  2C 03 38 00 */ cmpwi r3, 0x3800
/* 8012FEB0 0012CDF0  40 80 00 20 */ bge lbl_8012FED0
/* 8012FEB4 0012CDF4  2C 1D 00 00 */ cmpwi r29, 0
/* 8012FEB8 0012CDF8  40 82 00 18 */ bne lbl_8012FED0
/* 8012FEBC 0012CDFC  7F E3 FB 78 */ mr r3, r31
/* 8012FEC0 0012CE00  7F C4 F3 78 */ mr r4, r30
/* 8012FEC4 0012CE04  38 A0 00 01 */ li r5, 1
/* 8012FEC8 0012CE08  4B FF FD 71 */ bl daAlink_c_NS_procWolfSlideReadyInit
/* 8012FECC 0012CE0C  48 00 00 C0 */ b lbl_8012FF8C
lbl_8012FED0:
/* 8012FED0 0012CE10  7F E3 FB 78 */ mr r3, r31
/* 8012FED4 0012CE14  38 80 01 0F */ li r4, 0x10f
/* 8012FED8 0012CE18  4B F9 20 95 */ bl daAlink_c_NS_commonProcInit
/* 8012FEDC 0012CE1C  38 00 00 FF */ li r0, 0xff
/* 8012FEE0 0012CE20  98 1F 08 28 */ stb r0, 0x828(r31)
/* 8012FEE4 0012CE24  38 00 00 08 */ li r0, 8
/* 8012FEE8 0012CE28  B0 1F 30 90 */ sth r0, 0x3090(r31)
/* 8012FEEC 0012CE2C  B3 DF 04 DE */ sth r30, 0x4de(r31)
/* 8012FEF0 0012CE30  7F E3 FB 78 */ mr r3, r31
/* 8012FEF4 0012CE34  38 80 00 1E */ li r4, 0x1e
/* 8012FEF8 0012CE38  3C A0 80 39 */ lis r5, lbl_8038F3F0@ha
/* 8012FEFC 0012CE3C  38 A5 F3 F0 */ addi r5, r5, lbl_8038F3F0@l
/* 8012FF00 0012CE40  3B C5 00 14 */ addi r30, r5, 0x14
/* 8012FF04 0012CE44  7F C5 F3 78 */ mr r5, r30
/* 8012FF08 0012CE48  4B FF 99 41 */ bl daAlink_c_NS_setSingleAnimeWolfParam
/* 8012FF0C 0012CE4C  2C 1D 00 00 */ cmpwi r29, 0
/* 8012FF10 0012CE50  41 82 00 40 */ beq lbl_8012FF50
/* 8012FF14 0012CE54  A8 1E 00 00 */ lha r0, 0(r30)
/* 8012FF18 0012CE58  C8 22 92 B0 */ lfd f1, lbl_80452CB0-_SDA2_BASE_(r2)
/* 8012FF1C 0012CE5C  6C 03 80 00 */ xoris r3, r0, 0x8000
/* 8012FF20 0012CE60  90 61 00 0C */ stw r3, 0xc(r1)
/* 8012FF24 0012CE64  3C 00 43 30 */ lis r0, 0x4330
/* 8012FF28 0012CE68  90 01 00 08 */ stw r0, 8(r1)
/* 8012FF2C 0012CE6C  C8 01 00 08 */ lfd f0, 8(r1)
/* 8012FF30 0012CE70  EC 00 08 28 */ fsubs f0, f0, f1
/* 8012FF34 0012CE74  D0 1F 1F E0 */ stfs f0, 0x1fe0(r31)
/* 8012FF38 0012CE78  80 9F 1F 2C */ lwz r4, 0x1f2c(r31)
/* 8012FF3C 0012CE7C  90 61 00 14 */ stw r3, 0x14(r1)
/* 8012FF40 0012CE80  90 01 00 10 */ stw r0, 0x10(r1)
/* 8012FF44 0012CE84  C8 01 00 10 */ lfd f0, 0x10(r1)
/* 8012FF48 0012CE88  EC 00 08 28 */ fsubs f0, f0, f1
/* 8012FF4C 0012CE8C  D0 04 00 08 */ stfs f0, 8(r4)
lbl_8012FF50:
/* 8012FF50 0012CE90  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 8012FF54 0012CE94  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 8012FF58 0012CE98  80 03 5F 1C */ lwz r0, 0x5f1c(r3)
/* 8012FF5C 0012CE9C  60 00 02 00 */ ori r0, r0, 0x200
/* 8012FF60 0012CEA0  90 03 5F 1C */ stw r0, 0x5f1c(r3)
/* 8012FF64 0012CEA4  38 00 00 78 */ li r0, 0x78
/* 8012FF68 0012CEA8  98 1F 2F 9D */ stb r0, 0x2f9d(r31)
/* 8012FF6C 0012CEAC  7F E3 FB 78 */ mr r3, r31
/* 8012FF70 0012CEB0  38 80 00 01 */ li r4, 1
/* 8012FF74 0012CEB4  4B FF 12 4D */ bl daAlink_c_NS_setFootEffectProcType
/* 8012FF78 0012CEB8  3C 60 80 39 */ lis r3, lbl_8038F3F0@ha
/* 8012FF7C 0012CEBC  38 63 F3 F0 */ addi r3, r3, lbl_8038F3F0@l
/* 8012FF80 0012CEC0  C0 03 00 54 */ lfs f0, 0x54(r3)
/* 8012FF84 0012CEC4  D0 1F 05 94 */ stfs f0, 0x594(r31)
/* 8012FF88 0012CEC8  38 60 00 01 */ li r3, 1
lbl_8012FF8C:
/* 8012FF8C 0012CECC  39 61 00 30 */ addi r11, r1, 0x30
/* 8012FF90 0012CED0  48 23 22 99 */ bl _restgpr_29
/* 8012FF94 0012CED4  80 01 00 34 */ lwz r0, 0x34(r1)
/* 8012FF98 0012CED8  7C 08 03 A6 */ mtlr r0
/* 8012FF9C 0012CEDC  38 21 00 30 */ addi r1, r1, 0x30
/* 8012FFA0 0012CEE0  4E 80 00 20 */ blr