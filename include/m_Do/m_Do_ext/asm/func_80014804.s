/* 80014804 00011744  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 80014808 00011748  7C 08 02 A6 */ mflr r0
/* 8001480C 0001174C  90 01 00 24 */ stw r0, 0x24(r1)
/* 80014810 00011750  39 61 00 20 */ addi r11, r1, 0x20
/* 80014814 00011754  48 34 D9 BD */ bl _savegpr_26
/* 80014818 00011758  7C 7E 1B 78 */ mr r30, r3
/* 8001481C 0001175C  7C 9F 23 78 */ mr r31, r4
/* 80014820 00011760  7C BA 2B 78 */ mr r26, r5
/* 80014824 00011764  7D 1B 43 78 */ mr r27, r8
/* 80014828 00011768  7D 3C 4B 78 */ mr r28, r9
/* 8001482C 0001176C  7D 5D 53 78 */ mr r29, r10
/* 80014830 00011770  3C 60 52 4F */ lis r3, 0x524F4F54@ha
/* 80014834 00011774  38 63 4F 54 */ addi r3, r3, 0x524F4F54@l
/* 80014838 00011778  7C C4 33 78 */ mr r4, r6
/* 8001483C 0001177C  7C E5 3B 78 */ mr r5, r7
/* 80014840 00011780  48 2C 12 F9 */ bl getGlbResource__10JKRArchiveFUlPCcP10JKRArchive
/* 80014844 00011784  90 7F 00 00 */ stw r3, 0(r31)
/* 80014848 00011788  57 60 06 3F */ clrlwi. r0, r27, 0x18
/* 8001484C 0001178C  40 82 00 70 */ bne lbl_800148BC
/* 80014850 00011790  38 1D 00 1F */ addi r0, r29, 0x1f
/* 80014854 00011794  54 03 00 34 */ rlwinm r3, r0, 0, 0, 0x1a
/* 80014858 00011798  38 03 00 40 */ addi r0, r3, 0x40
/* 8001485C 0001179C  7F A0 E1 D6 */ mullw r29, r0, r28
/* 80014860 000117A0  38 60 00 B8 */ li r3, 0xb8
/* 80014864 000117A4  7F 44 D3 78 */ mr r4, r26
/* 80014868 000117A8  38 A0 00 00 */ li r5, 0
/* 8001486C 000117AC  48 2B A4 2D */ bl __nw__FUlP7JKRHeapi
/* 80014870 000117B0  7C 64 1B 79 */ or. r4, r3, r3
/* 80014874 000117B4  41 82 00 18 */ beq lbl_8001488C
/* 80014878 000117B8  80 9F 00 00 */ lwz r4, 0(r31)
/* 8001487C 000117BC  7F A5 EB 78 */ mr r5, r29
/* 80014880 000117C0  7F 46 D3 78 */ mr r6, r26
/* 80014884 000117C4  48 2C 89 05 */ bl JUTCacheFont
/* 80014888 000117C8  7C 64 1B 78 */ mr r4, r3
lbl_8001488C:
/* 8001488C 000117CC  88 04 00 04 */ lbz r0, 4(r4)
/* 80014890 000117D0  28 00 00 00 */ cmplwi r0, 0
/* 80014894 000117D4  41 82 00 10 */ beq lbl_800148A4
/* 80014898 000117D8  90 9E 00 00 */ stw r4, 0(r30)
/* 8001489C 000117DC  38 00 00 01 */ li r0, 1
/* 800148A0 000117E0  90 04 00 8C */ stw r0, 0x8c(r4)
lbl_800148A4:
/* 800148A4 000117E4  80 7F 00 00 */ lwz r3, 0(r31)
/* 800148A8 000117E8  38 80 00 00 */ li r4, 0
/* 800148AC 000117EC  48 2B FA 5D */ bl removeResource__13JKRFileLoaderFPvP13JKRFileLoader
/* 800148B0 000117F0  38 00 00 00 */ li r0, 0
/* 800148B4 000117F4  90 1F 00 00 */ stw r0, 0(r31)
/* 800148B8 000117F8  48 00 00 28 */ b lbl_800148E0
lbl_800148BC:
/* 800148BC 000117FC  38 60 00 70 */ li r3, 0x70
/* 800148C0 00011800  48 2B A3 8D */ bl __nw__FUl
/* 800148C4 00011804  7C 60 1B 79 */ or. r0, r3, r3
/* 800148C8 00011808  41 82 00 14 */ beq lbl_800148DC
/* 800148CC 0001180C  80 9F 00 00 */ lwz r4, 0(r31)
/* 800148D0 00011810  7F 45 D3 78 */ mr r5, r26
/* 800148D4 00011814  48 2C A6 C1 */ bl __ct__10JUTResFontFPC7ResFONTP7JKRHeap
/* 800148D8 00011818  7C 60 1B 78 */ mr r0, r3
lbl_800148DC:
/* 800148DC 0001181C  90 1E 00 00 */ stw r0, 0(r30)
lbl_800148E0:
/* 800148E0 00011820  80 7E 00 00 */ lwz r3, 0(r30)
/* 800148E4 00011824  28 03 00 00 */ cmplwi r3, 0
/* 800148E8 00011828  41 82 00 4C */ beq lbl_80014934
/* 800148EC 0001182C  88 03 00 04 */ lbz r0, 4(r3)
/* 800148F0 00011830  28 00 00 00 */ cmplwi r0, 0
/* 800148F4 00011834  40 82 00 40 */ bne lbl_80014934
/* 800148F8 00011838  3C 60 80 37 */ lis r3, lbl_803740FC@ha
/* 800148FC 0001183C  38 63 40 FC */ addi r3, r3, lbl_803740FC@l
/* 80014900 00011840  38 63 00 6F */ addi r3, r3, 0x6f
/* 80014904 00011844  4C C6 31 82 */ crclr 6
/* 80014908 00011848  4B FF 22 35 */ bl OSReport_FatalError
/* 8001490C 0001184C  80 7E 00 00 */ lwz r3, 0(r30)
/* 80014910 00011850  28 03 00 00 */ cmplwi r3, 0
/* 80014914 00011854  41 82 00 18 */ beq lbl_8001492C
/* 80014918 00011858  38 80 00 01 */ li r4, 1
/* 8001491C 0001185C  81 83 00 00 */ lwz r12, 0(r3)
/* 80014920 00011860  81 8C 00 08 */ lwz r12, 8(r12)
/* 80014924 00011864  7D 89 03 A6 */ mtctr r12
/* 80014928 00011868  4E 80 04 21 */ bctrl
lbl_8001492C:
/* 8001492C 0001186C  38 00 00 00 */ li r0, 0
/* 80014930 00011870  90 1E 00 00 */ stw r0, 0(r30)
lbl_80014934:
/* 80014934 00011874  39 61 00 20 */ addi r11, r1, 0x20
/* 80014938 00011878  48 34 D8 E5 */ bl _restgpr_26
/* 8001493C 0001187C  80 01 00 24 */ lwz r0, 0x24(r1)
/* 80014940 00011880  7C 08 03 A6 */ mtlr r0
/* 80014944 00011884  38 21 00 20 */ addi r1, r1, 0x20
/* 80014948 00011888  4E 80 00 20 */ blr