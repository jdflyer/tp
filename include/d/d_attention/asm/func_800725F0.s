/* 800725F0 0006F530  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800725F4 0006F534  7C 08 02 A6 */ mflr r0
/* 800725F8 0006F538  90 01 00 14 */ stw r0, 0x14(r1)
/* 800725FC 0006F53C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 80072600 0006F540  7C 7F 1B 78 */ mr r31, r3
/* 80072604 0006F544  88 03 03 29 */ lbz r0, 0x329(r3)
/* 80072608 0006F548  2C 00 00 01 */ cmpwi r0, 1
/* 8007260C 0006F54C  41 82 00 6C */ beq lbl_80072678
/* 80072610 0006F550  40 80 00 10 */ bge lbl_80072620
/* 80072614 0006F554  2C 00 00 00 */ cmpwi r0, 0
/* 80072618 0006F558  40 80 00 14 */ bge lbl_8007262C
/* 8007261C 0006F55C  48 00 02 BC */ b lbl_800728D8
lbl_80072620:
/* 80072620 0006F560  2C 00 00 03 */ cmpwi r0, 3
/* 80072624 0006F564  40 80 02 B4 */ bge lbl_800728D8
/* 80072628 0006F568  48 00 01 E0 */ b lbl_80072808
lbl_8007262C:
/* 8007262C 0006F56C  38 00 FF FF */ li r0, -1
/* 80072630 0006F570  90 1F 00 04 */ stw r0, 4(r31)
/* 80072634 0006F574  4B FF F2 71 */ bl dAttention_c_NS_stockAttention
/* 80072638 0006F578  38 00 00 00 */ li r0, 0
/* 8007263C 0006F57C  98 1F 03 2F */ stb r0, 0x32f(r31)
/* 80072640 0006F580  98 1F 03 2E */ stb r0, 0x32e(r31)
/* 80072644 0006F584  88 1F 03 2B */ lbz r0, 0x32b(r31)
/* 80072648 0006F588  28 00 00 00 */ cmplwi r0, 0
/* 8007264C 0006F58C  40 82 02 8C */ bne lbl_800728D8
/* 80072650 0006F590  7F E3 FB 78 */ mr r3, r31
/* 80072654 0006F594  4B FF FC 4D */ bl dAttention_c_NS_triggerProc
/* 80072658 0006F598  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8007265C 0006F59C  41 82 02 7C */ beq lbl_800728D8
/* 80072660 0006F5A0  38 00 00 01 */ li r0, 1
/* 80072664 0006F5A4  98 1F 03 29 */ stb r0, 0x329(r31)
/* 80072668 0006F5A8  38 00 00 0F */ li r0, 0xf
/* 8007266C 0006F5AC  98 1F 03 2E */ stb r0, 0x32e(r31)
/* 80072670 0006F5B0  98 1F 03 2F */ stb r0, 0x32f(r31)
/* 80072674 0006F5B4  48 00 02 64 */ b lbl_800728D8
lbl_80072678:
/* 80072678 0006F5B8  38 80 00 00 */ li r4, 0
/* 8007267C 0006F5BC  48 00 10 51 */ bl dAttention_c_NS_LockonTargetPId
/* 80072680 0006F5C0  90 7F 00 04 */ stw r3, 4(r31)
/* 80072684 0006F5C4  88 1F 03 2F */ lbz r0, 0x32f(r31)
/* 80072688 0006F5C8  28 00 00 00 */ cmplwi r0, 0
/* 8007268C 0006F5CC  40 82 00 18 */ bne lbl_800726A4
/* 80072690 0006F5D0  38 00 00 00 */ li r0, 0
/* 80072694 0006F5D4  98 1F 03 29 */ stb r0, 0x329(r31)
/* 80072698 0006F5D8  7F E3 FB 78 */ mr r3, r31
/* 8007269C 0006F5DC  4B FF F3 CD */ bl dAttention_c_NS_freeAttention
/* 800726A0 0006F5E0  48 00 01 18 */ b lbl_800727B8
lbl_800726A4:
/* 800726A4 0006F5E4  7F E3 FB 78 */ mr r3, r31
/* 800726A8 0006F5E8  4B FF FC 45 */ bl dAttention_c_NS_lostCheck
/* 800726AC 0006F5EC  2C 03 00 00 */ cmpwi r3, 0
/* 800726B0 0006F5F0  41 82 00 50 */ beq lbl_80072700
/* 800726B4 0006F5F4  38 00 FF FF */ li r0, -1
/* 800726B8 0006F5F8  90 1F 00 04 */ stw r0, 4(r31)
/* 800726BC 0006F5FC  7F E3 FB 78 */ mr r3, r31
/* 800726C0 0006F600  4B FF F1 E5 */ bl dAttention_c_NS_stockAttention
/* 800726C4 0006F604  7F E3 FB 78 */ mr r3, r31
/* 800726C8 0006F608  4B FF FB D9 */ bl dAttention_c_NS_triggerProc
/* 800726CC 0006F60C  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800726D0 0006F610  41 82 00 10 */ beq lbl_800726E0
/* 800726D4 0006F614  38 00 00 01 */ li r0, 1
/* 800726D8 0006F618  98 1F 03 29 */ stb r0, 0x329(r31)
/* 800726DC 0006F61C  48 00 00 DC */ b lbl_800727B8
lbl_800726E0:
/* 800726E0 0006F620  38 00 00 00 */ li r0, 0
/* 800726E4 0006F624  98 1F 03 29 */ stb r0, 0x329(r31)
/* 800726E8 0006F628  7F E3 FB 78 */ mr r3, r31
/* 800726EC 0006F62C  4B FF F3 7D */ bl dAttention_c_NS_freeAttention
/* 800726F0 0006F630  80 1F 03 34 */ lwz r0, 0x334(r31)
/* 800726F4 0006F634  64 00 00 80 */ oris r0, r0, 0x80
/* 800726F8 0006F638  90 1F 03 34 */ stw r0, 0x334(r31)
/* 800726FC 0006F63C  48 00 00 BC */ b lbl_800727B8
lbl_80072700:
/* 80072700 0006F640  88 1F 03 2B */ lbz r0, 0x32b(r31)
/* 80072704 0006F644  28 00 00 00 */ cmplwi r0, 0
/* 80072708 0006F648  40 82 00 80 */ bne lbl_80072788
/* 8007270C 0006F64C  80 1F 00 0C */ lwz r0, 0xc(r31)
/* 80072710 0006F650  54 04 30 32 */ slwi r4, r0, 6
/* 80072714 0006F654  3C 60 80 3E */ lis r3, m_cpadInfo@ha
/* 80072718 0006F658  38 03 D2 E8 */ addi r0, r3, m_cpadInfo@l
/* 8007271C 0006F65C  7C 60 22 14 */ add r3, r0, r4
/* 80072720 0006F660  C0 23 00 04 */ lfs f1, 4(r3)
/* 80072724 0006F664  C0 02 8C 34 */ lfs f0, lbl_80452634-_SDA2_BASE_(r2)
/* 80072728 0006F668  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8007272C 0006F66C  40 80 00 18 */ bge lbl_80072744
/* 80072730 0006F670  38 00 00 00 */ li r0, 0
/* 80072734 0006F674  98 1F 03 29 */ stb r0, 0x329(r31)
/* 80072738 0006F678  7F E3 FB 78 */ mr r3, r31
/* 8007273C 0006F67C  4B FF F3 2D */ bl dAttention_c_NS_freeAttention
/* 80072740 0006F680  48 00 00 78 */ b lbl_800727B8
lbl_80072744:
/* 80072744 0006F684  7F E3 FB 78 */ mr r3, r31
/* 80072748 0006F688  4B FF F2 19 */ bl dAttention_c_NS_nextAttention
/* 8007274C 0006F68C  28 03 00 00 */ cmplwi r3, 0
/* 80072750 0006F690  41 82 00 24 */ beq lbl_80072774
/* 80072754 0006F694  80 1F 03 34 */ lwz r0, 0x334(r31)
/* 80072758 0006F698  60 00 00 08 */ ori r0, r0, 8
/* 8007275C 0006F69C  90 1F 03 34 */ stw r0, 0x334(r31)
/* 80072760 0006F6A0  38 00 00 01 */ li r0, 1
/* 80072764 0006F6A4  98 1F 03 29 */ stb r0, 0x329(r31)
/* 80072768 0006F6A8  38 00 00 0F */ li r0, 0xf
/* 8007276C 0006F6AC  98 1F 03 2E */ stb r0, 0x32e(r31)
/* 80072770 0006F6B0  48 00 00 48 */ b lbl_800727B8
lbl_80072774:
/* 80072774 0006F6B4  38 00 00 00 */ li r0, 0
/* 80072778 0006F6B8  98 1F 03 29 */ stb r0, 0x329(r31)
/* 8007277C 0006F6BC  7F E3 FB 78 */ mr r3, r31
/* 80072780 0006F6C0  4B FF F2 E9 */ bl dAttention_c_NS_freeAttention
/* 80072784 0006F6C4  48 00 00 34 */ b lbl_800727B8
lbl_80072788:
/* 80072788 0006F6C8  88 1F 03 2E */ lbz r0, 0x32e(r31)
/* 8007278C 0006F6CC  28 00 00 00 */ cmplwi r0, 0
/* 80072790 0006F6D0  40 82 00 28 */ bne lbl_800727B8
/* 80072794 0006F6D4  7F E3 FB 78 */ mr r3, r31
/* 80072798 0006F6D8  38 80 FF FF */ li r4, -1
/* 8007279C 0006F6DC  4B FF EA A5 */ bl dAttention_c_NS_initList
/* 800727A0 0006F6E0  7F E3 FB 78 */ mr r3, r31
/* 800727A4 0006F6E4  4B FF EC 29 */ bl dAttention_c_NS_makeList
/* 800727A8 0006F6E8  2C 03 00 00 */ cmpwi r3, 0
/* 800727AC 0006F6EC  41 82 00 0C */ beq lbl_800727B8
/* 800727B0 0006F6F0  7F E3 FB 78 */ mr r3, r31
/* 800727B4 0006F6F4  4B FF EF 05 */ bl dAttention_c_NS_sortList
lbl_800727B8:
/* 800727B8 0006F6F8  80 1F 03 34 */ lwz r0, 0x334(r31)
/* 800727BC 0006F6FC  54 00 07 39 */ rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 800727C0 0006F700  40 82 00 18 */ bne lbl_800727D8
/* 800727C4 0006F704  88 7F 03 2E */ lbz r3, 0x32e(r31)
/* 800727C8 0006F708  28 03 00 00 */ cmplwi r3, 0
/* 800727CC 0006F70C  41 82 00 0C */ beq lbl_800727D8
/* 800727D0 0006F710  38 03 FF FF */ addi r0, r3, -1
/* 800727D4 0006F714  98 1F 03 2E */ stb r0, 0x32e(r31)
lbl_800727D8:
/* 800727D8 0006F718  88 1F 03 2B */ lbz r0, 0x32b(r31)
/* 800727DC 0006F71C  28 00 00 01 */ cmplwi r0, 1
/* 800727E0 0006F720  40 82 00 1C */ bne lbl_800727FC
/* 800727E4 0006F724  88 7F 03 2F */ lbz r3, 0x32f(r31)
/* 800727E8 0006F728  28 03 00 00 */ cmplwi r3, 0
/* 800727EC 0006F72C  41 82 00 EC */ beq lbl_800728D8
/* 800727F0 0006F730  38 03 FF FF */ addi r0, r3, -1
/* 800727F4 0006F734  98 1F 03 2F */ stb r0, 0x32f(r31)
/* 800727F8 0006F738  48 00 00 E0 */ b lbl_800728D8
lbl_800727FC:
/* 800727FC 0006F73C  38 00 00 0F */ li r0, 0xf
/* 80072800 0006F740  98 1F 03 2F */ stb r0, 0x32f(r31)
/* 80072804 0006F744  48 00 00 D4 */ b lbl_800728D8
lbl_80072808:
/* 80072808 0006F748  80 1F 03 34 */ lwz r0, 0x334(r31)
/* 8007280C 0006F74C  60 00 00 40 */ ori r0, r0, 0x40
/* 80072810 0006F750  90 1F 03 34 */ stw r0, 0x334(r31)
/* 80072814 0006F754  4B FF FA D9 */ bl dAttention_c_NS_lostCheck
/* 80072818 0006F758  2C 03 00 00 */ cmpwi r3, 0
/* 8007281C 0006F75C  41 82 00 50 */ beq lbl_8007286C
/* 80072820 0006F760  38 00 FF FF */ li r0, -1
/* 80072824 0006F764  90 1F 00 04 */ stw r0, 4(r31)
/* 80072828 0006F768  7F E3 FB 78 */ mr r3, r31
/* 8007282C 0006F76C  4B FF F0 79 */ bl dAttention_c_NS_stockAttention
/* 80072830 0006F770  7F E3 FB 78 */ mr r3, r31
/* 80072834 0006F774  4B FF FA 6D */ bl dAttention_c_NS_triggerProc
/* 80072838 0006F778  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8007283C 0006F77C  41 82 00 10 */ beq lbl_8007284C
/* 80072840 0006F780  38 00 00 01 */ li r0, 1
/* 80072844 0006F784  98 1F 03 29 */ stb r0, 0x329(r31)
/* 80072848 0006F788  48 00 00 90 */ b lbl_800728D8
lbl_8007284C:
/* 8007284C 0006F78C  38 00 00 00 */ li r0, 0
/* 80072850 0006F790  98 1F 03 29 */ stb r0, 0x329(r31)
/* 80072854 0006F794  7F E3 FB 78 */ mr r3, r31
/* 80072858 0006F798  4B FF F2 11 */ bl dAttention_c_NS_freeAttention
/* 8007285C 0006F79C  80 1F 03 34 */ lwz r0, 0x334(r31)
/* 80072860 0006F7A0  64 00 00 80 */ oris r0, r0, 0x80
/* 80072864 0006F7A4  90 1F 03 34 */ stw r0, 0x334(r31)
/* 80072868 0006F7A8  48 00 00 70 */ b lbl_800728D8
lbl_8007286C:
/* 8007286C 0006F7AC  88 1F 03 2B */ lbz r0, 0x32b(r31)
/* 80072870 0006F7B0  28 00 00 00 */ cmplwi r0, 0
/* 80072874 0006F7B4  40 82 00 34 */ bne lbl_800728A8
/* 80072878 0006F7B8  38 00 00 00 */ li r0, 0
/* 8007287C 0006F7BC  98 1F 03 29 */ stb r0, 0x329(r31)
/* 80072880 0006F7C0  7F E3 FB 78 */ mr r3, r31
/* 80072884 0006F7C4  4B FF FA 1D */ bl dAttention_c_NS_triggerProc
/* 80072888 0006F7C8  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8007288C 0006F7CC  41 82 00 4C */ beq lbl_800728D8
/* 80072890 0006F7D0  38 00 00 01 */ li r0, 1
/* 80072894 0006F7D4  98 1F 03 29 */ stb r0, 0x329(r31)
/* 80072898 0006F7D8  38 00 00 0F */ li r0, 0xf
/* 8007289C 0006F7DC  98 1F 03 2E */ stb r0, 0x32e(r31)
/* 800728A0 0006F7E0  98 1F 03 2F */ stb r0, 0x32f(r31)
/* 800728A4 0006F7E4  48 00 00 34 */ b lbl_800728D8
lbl_800728A8:
/* 800728A8 0006F7E8  7F E3 FB 78 */ mr r3, r31
/* 800728AC 0006F7EC  38 80 00 00 */ li r4, 0
/* 800728B0 0006F7F0  48 00 0C 8D */ bl dAttention_c_NS_LockonTarget
/* 800728B4 0006F7F4  28 03 00 00 */ cmplwi r3, 0
/* 800728B8 0006F7F8  41 82 00 10 */ beq lbl_800728C8
/* 800728BC 0006F7FC  88 1F 03 2F */ lbz r0, 0x32f(r31)
/* 800728C0 0006F800  28 00 00 00 */ cmplwi r0, 0
/* 800728C4 0006F804  40 82 00 14 */ bne lbl_800728D8
lbl_800728C8:
/* 800728C8 0006F808  38 00 00 00 */ li r0, 0
/* 800728CC 0006F80C  98 1F 03 29 */ stb r0, 0x329(r31)
/* 800728D0 0006F810  7F E3 FB 78 */ mr r3, r31
/* 800728D4 0006F814  4B FF F1 95 */ bl dAttention_c_NS_freeAttention
lbl_800728D8:
/* 800728D8 0006F818  80 7F 03 34 */ lwz r3, 0x334(r31)
/* 800728DC 0006F81C  54 60 04 E7 */ rlwinm. r0, r3, 0, 0x13, 0x13
/* 800728E0 0006F820  40 82 00 30 */ bne lbl_80072910
/* 800728E4 0006F824  60 60 40 00 */ ori r0, r3, 0x4000
/* 800728E8 0006F828  90 1F 03 34 */ stw r0, 0x334(r31)
/* 800728EC 0006F82C  7F E3 FB 78 */ mr r3, r31
/* 800728F0 0006F830  38 80 FF FF */ li r4, -1
/* 800728F4 0006F834  4B FF E9 4D */ bl dAttention_c_NS_initList
/* 800728F8 0006F838  7F E3 FB 78 */ mr r3, r31
/* 800728FC 0006F83C  4B FF EA D1 */ bl dAttention_c_NS_makeList
/* 80072900 0006F840  2C 03 00 00 */ cmpwi r3, 0
/* 80072904 0006F844  41 82 00 0C */ beq lbl_80072910
/* 80072908 0006F848  7F E3 FB 78 */ mr r3, r31
/* 8007290C 0006F84C  4B FF ED AD */ bl dAttention_c_NS_sortList
lbl_80072910:
/* 80072910 0006F850  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 80072914 0006F854  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80072918 0006F858  7C 08 03 A6 */ mtlr r0
/* 8007291C 0006F85C  38 21 00 10 */ addi r1, r1, 0x10
/* 80072920 0006F860  4E 80 00 20 */ blr
