/* 80009650 00006590  94 21 FE F0 */ stwu r1, -0x110(r1)
/* 80009654 00006594  7C 08 02 A6 */ mflr r0
/* 80009658 00006598  90 01 01 14 */ stw r0, 0x114(r1)
/* 8000965C 0000659C  DB E1 01 00 */ stfd f31, 0x100(r1)
/* 80009660 000065A0  F3 E1 01 08 */ psq_st f31, 264(r1), 0, 0
/* 80009664 000065A4  DB C1 00 F0 */ stfd f30, 0xf0(r1)
/* 80009668 000065A8  F3 C1 00 F8 */ psq_st f30, 248(r1), 0, 0
/* 8000966C 000065AC  DB A1 00 E0 */ stfd f29, 0xe0(r1)
/* 80009670 000065B0  F3 A1 00 E8 */ psq_st f29, 232(r1), 0, 0
/* 80009674 000065B4  39 61 00 E0 */ addi r11, r1, 0xe0
/* 80009678 000065B8  48 35 8B 51 */ bl _savegpr_24
/* 8000967C 000065BC  7C 7F 1B 78 */ mr r31, r3
/* 80009680 000065C0  3B 80 00 00 */ li r28, 0
/* 80009684 000065C4  88 03 00 08 */ lbz r0, 8(r3)
/* 80009688 000065C8  28 00 00 00 */ cmplwi r0, 0
/* 8000968C 000065CC  41 82 00 14 */ beq lbl_800096A0
/* 80009690 000065D0  80 1F 00 10 */ lwz r0, 0x10(r31)
/* 80009694 000065D4  28 00 00 00 */ cmplwi r0, 0
/* 80009698 000065D8  41 82 00 08 */ beq lbl_800096A0
/* 8000969C 000065DC  3B 80 00 01 */ li r28, 1
lbl_800096A0:
/* 800096A0 000065E0  88 1F 00 07 */ lbz r0, 7(r31)
/* 800096A4 000065E4  28 00 00 00 */ cmplwi r0, 0
/* 800096A8 000065E8  40 82 00 0C */ bne lbl_800096B4
/* 800096AC 000065EC  57 80 06 3F */ clrlwi. r0, r28, 0x18
/* 800096B0 000065F0  41 82 0A 80 */ beq lbl_8000A130
lbl_800096B4:
/* 800096B4 000065F4  C0 22 80 38 */ lfs f1, lbl_80451A38-_SDA2_BASE_(r2)
/* 800096B8 000065F8  FC 40 08 90 */ fmr f2, f1
/* 800096BC 000065FC  C0 62 80 AC */ lfs f3, lbl_80451AAC-_SDA2_BASE_(r2)
/* 800096C0 00006600  C0 82 80 A8 */ lfs f4, lbl_80451AA8-_SDA2_BASE_(r2)
/* 800096C4 00006604  FC A0 08 90 */ fmr f5, f1
/* 800096C8 00006608  C0 C2 80 3C */ lfs f6, lbl_80451A3C-_SDA2_BASE_(r2)
/* 800096CC 0000660C  48 35 6D 99 */ bl GXSetViewport
/* 800096D0 00006610  38 60 00 00 */ li r3, 0
/* 800096D4 00006614  38 80 00 00 */ li r4, 0
/* 800096D8 00006618  38 A0 02 60 */ li r5, 0x260
/* 800096DC 0000661C  38 C0 01 C0 */ li r6, 0x1c0
/* 800096E0 00006620  48 35 6D F1 */ bl GXSetScissor
/* 800096E4 00006624  3C 60 80 3E */ lis r3, lbl_803DD3E8@ha
/* 800096E8 00006628  38 63 D3 E8 */ addi r3, r3, lbl_803DD3E8@l
/* 800096EC 0000662C  38 80 00 00 */ li r4, 0
/* 800096F0 00006630  48 35 4D 25 */ bl GXLoadTexObj
/* 800096F4 00006634  38 60 00 00 */ li r3, 0
/* 800096F8 00006638  48 35 44 39 */ bl GXSetNumChans
/* 800096FC 0000663C  38 60 00 01 */ li r3, 1
/* 80009700 00006640  48 35 26 FD */ bl GXSetNumTexGens
/* 80009704 00006644  38 60 00 00 */ li r3, 0
/* 80009708 00006648  38 80 00 01 */ li r4, 1
/* 8000970C 0000664C  38 A0 00 04 */ li r5, 4
/* 80009710 00006650  38 C0 00 3C */ li r6, 0x3c
/* 80009714 00006654  38 E0 00 00 */ li r7, 0
/* 80009718 00006658  39 00 00 7D */ li r8, 0x7d
/* 8000971C 0000665C  48 35 24 61 */ bl GXSetTexCoordGen2
/* 80009720 00006660  38 60 00 01 */ li r3, 1
/* 80009724 00006664  38 80 00 00 */ li r4, 0
/* 80009728 00006668  38 A0 00 00 */ li r5, 0
/* 8000972C 0000666C  38 C0 00 00 */ li r6, 0
/* 80009730 00006670  38 E0 00 01 */ li r7, 1
/* 80009734 00006674  48 35 5E 71 */ bl GXSetTevSwapModeTable
/* 80009738 00006678  38 60 00 03 */ li r3, 3
/* 8000973C 0000667C  38 80 00 02 */ li r4, 2
/* 80009740 00006680  38 A0 00 02 */ li r5, 2
/* 80009744 00006684  38 C0 00 02 */ li r6, 2
/* 80009748 00006688  38 E0 00 03 */ li r7, 3
/* 8000974C 0000668C  48 35 5E 59 */ bl GXSetTevSwapModeTable
/* 80009750 00006690  38 60 00 01 */ li r3, 1
/* 80009754 00006694  48 35 65 7D */ bl GXSetZCompLoc
/* 80009758 00006698  38 60 00 00 */ li r3, 0
/* 8000975C 0000669C  38 80 00 07 */ li r4, 7
/* 80009760 000066A0  38 A0 00 00 */ li r5, 0
/* 80009764 000066A4  48 35 65 39 */ bl GXSetZMode
/* 80009768 000066A8  38 60 00 07 */ li r3, 7
/* 8000976C 000066AC  38 80 00 00 */ li r4, 0
/* 80009770 000066B0  38 A0 00 01 */ li r5, 1
/* 80009774 000066B4  38 C0 00 07 */ li r6, 7
/* 80009778 000066B8  38 E0 00 00 */ li r7, 0
/* 8000977C 000066BC  48 35 5E A9 */ bl GXSetAlphaCompare
/* 80009780 000066C0  80 0D 80 80 */ lwz r0, lbl_80450600-_SDA_BASE_(r13)
/* 80009784 000066C4  90 01 00 14 */ stw r0, 0x14(r1)
/* 80009788 000066C8  38 60 00 00 */ li r3, 0
/* 8000978C 000066CC  C0 22 80 38 */ lfs f1, lbl_80451A38-_SDA2_BASE_(r2)
/* 80009790 000066D0  FC 40 08 90 */ fmr f2, f1
/* 80009794 000066D4  FC 60 08 90 */ fmr f3, f1
/* 80009798 000066D8  FC 80 08 90 */ fmr f4, f1
/* 8000979C 000066DC  38 81 00 14 */ addi r4, r1, 0x14
/* 800097A0 000066E0  48 35 61 19 */ bl GXSetFog
/* 800097A4 000066E4  38 60 00 00 */ li r3, 0
/* 800097A8 000066E8  38 80 00 00 */ li r4, 0
/* 800097AC 000066EC  38 A0 00 00 */ li r5, 0
/* 800097B0 000066F0  48 35 63 1D */ bl GXSetFogRangeAdj
/* 800097B4 000066F4  38 60 00 00 */ li r3, 0
/* 800097B8 000066F8  48 35 31 CD */ bl GXSetCullMode
/* 800097BC 000066FC  38 60 00 01 */ li r3, 1
/* 800097C0 00006700  48 35 66 19 */ bl GXSetDither
/* 800097C4 00006704  38 61 00 6C */ addi r3, r1, 0x6c
/* 800097C8 00006708  C0 22 80 38 */ lfs f1, lbl_80451A38-_SDA2_BASE_(r2)
/* 800097CC 0000670C  C0 42 80 BC */ lfs f2, lbl_80451ABC-_SDA2_BASE_(r2)
/* 800097D0 00006710  FC 60 08 90 */ fmr f3, f1
/* 800097D4 00006714  FC 80 10 90 */ fmr f4, f2
/* 800097D8 00006718  FC A0 08 90 */ fmr f5, f1
/* 800097DC 0000671C  C0 C2 80 40 */ lfs f6, lbl_80451A40-_SDA2_BASE_(r2)
/* 800097E0 00006720  48 33 D8 19 */ bl C_MTXOrtho
/* 800097E4 00006724  3C 60 80 3A */ lis r3, lbl_803A2FD8@ha
/* 800097E8 00006728  38 63 2F D8 */ addi r3, r3, lbl_803A2FD8@l
/* 800097EC 0000672C  38 80 00 00 */ li r4, 0
/* 800097F0 00006730  48 35 6A 5D */ bl GXLoadPosMtxImm
/* 800097F4 00006734  38 61 00 6C */ addi r3, r1, 0x6c
/* 800097F8 00006738  38 80 00 01 */ li r4, 1
/* 800097FC 0000673C  48 35 68 D9 */ bl GXSetProjection
/* 80009800 00006740  38 60 00 00 */ li r3, 0
/* 80009804 00006744  48 35 6A E9 */ bl GXSetCurrentMtx
/* 80009808 00006748  48 35 1D 85 */ bl GXClearVtxDesc
/* 8000980C 0000674C  38 60 00 09 */ li r3, 9
/* 80009810 00006750  38 80 00 01 */ li r4, 1
/* 80009814 00006754  48 35 16 A5 */ bl GXSetVtxDesc
/* 80009818 00006758  38 60 00 0D */ li r3, 0xd
/* 8000981C 0000675C  38 80 00 01 */ li r4, 1
/* 80009820 00006760  48 35 16 99 */ bl GXSetVtxDesc
/* 80009824 00006764  38 60 00 00 */ li r3, 0
/* 80009828 00006768  38 80 00 09 */ li r4, 9
/* 8000982C 0000676C  38 A0 00 00 */ li r5, 0
/* 80009830 00006770  38 C0 00 01 */ li r6, 1
/* 80009834 00006774  38 E0 00 00 */ li r7, 0
/* 80009838 00006778  48 35 1D 8D */ bl GXSetVtxAttrFmt
/* 8000983C 0000677C  38 60 00 00 */ li r3, 0
/* 80009840 00006780  38 80 00 0D */ li r4, 0xd
/* 80009844 00006784  38 A0 00 01 */ li r5, 1
/* 80009848 00006788  38 C0 00 01 */ li r6, 1
/* 8000984C 0000678C  38 E0 00 00 */ li r7, 0
/* 80009850 00006790  48 35 1D 75 */ bl GXSetVtxAttrFmt
/* 80009854 00006794  88 1F 00 07 */ lbz r0, 7(r31)
/* 80009858 00006798  28 00 00 00 */ cmplwi r0, 0
/* 8000985C 0000679C  41 82 00 CC */ beq lbl_80009928
/* 80009860 000067A0  38 60 00 01 */ li r3, 1
/* 80009864 000067A4  48 35 60 2D */ bl GXSetNumTevStages
/* 80009868 000067A8  38 60 00 00 */ li r3, 0
/* 8000986C 000067AC  38 80 00 00 */ li r4, 0
/* 80009870 000067B0  38 A0 00 00 */ li r5, 0
/* 80009874 000067B4  38 C0 00 FF */ li r6, 0xff
/* 80009878 000067B8  48 35 5E 7D */ bl GXSetTevOrder
/* 8000987C 000067BC  38 60 00 00 */ li r3, 0
/* 80009880 000067C0  38 80 00 0F */ li r4, 0xf
/* 80009884 000067C4  38 A0 00 08 */ li r5, 8
/* 80009888 000067C8  38 C0 00 06 */ li r6, 6
/* 8000988C 000067CC  38 E0 00 0F */ li r7, 0xf
/* 80009890 000067D0  48 35 59 95 */ bl GXSetTevColorIn
/* 80009894 000067D4  38 60 00 00 */ li r3, 0
/* 80009898 000067D8  38 80 00 00 */ li r4, 0
/* 8000989C 000067DC  38 A0 00 00 */ li r5, 0
/* 800098A0 000067E0  38 C0 00 00 */ li r6, 0
/* 800098A4 000067E4  38 E0 00 01 */ li r7, 1
/* 800098A8 000067E8  39 00 00 00 */ li r8, 0
/* 800098AC 000067EC  48 35 5A 01 */ bl GXSetTevColorOp
/* 800098B0 000067F0  38 60 00 00 */ li r3, 0
/* 800098B4 000067F4  38 80 00 07 */ li r4, 7
/* 800098B8 000067F8  38 A0 00 07 */ li r5, 7
/* 800098BC 000067FC  38 C0 00 07 */ li r6, 7
/* 800098C0 00006800  38 E0 00 03 */ li r7, 3
/* 800098C4 00006804  48 35 59 A5 */ bl GXSetTevAlphaIn
/* 800098C8 00006808  38 60 00 00 */ li r3, 0
/* 800098CC 0000680C  38 80 00 00 */ li r4, 0
/* 800098D0 00006810  38 A0 00 00 */ li r5, 0
/* 800098D4 00006814  38 C0 00 00 */ li r6, 0
/* 800098D8 00006818  38 E0 00 01 */ li r7, 1
/* 800098DC 0000681C  39 00 00 00 */ li r8, 0
/* 800098E0 00006820  48 35 5A 35 */ bl GXSetTevAlphaOp
/* 800098E4 00006824  38 60 00 00 */ li r3, 0
/* 800098E8 00006828  38 80 00 01 */ li r4, 1
/* 800098EC 0000682C  38 A0 00 01 */ li r5, 1
/* 800098F0 00006830  48 35 5C 6D */ bl GXSetTevSwapMode
/* 800098F4 00006834  80 1F 00 04 */ lwz r0, 4(r31)
/* 800098F8 00006838  90 01 00 10 */ stw r0, 0x10(r1)
/* 800098FC 0000683C  38 60 00 03 */ li r3, 3
/* 80009900 00006840  38 81 00 10 */ addi r4, r1, 0x10
/* 80009904 00006844  48 35 5A 79 */ bl GXSetTevColor
/* 80009908 00006848  38 60 00 01 */ li r3, 1
/* 8000990C 0000684C  38 80 00 04 */ li r4, 4
/* 80009910 00006850  38 A0 00 05 */ li r5, 5
/* 80009914 00006854  38 C0 00 07 */ li r6, 7
/* 80009918 00006858  48 35 62 D9 */ bl GXSetBlendMode
/* 8000991C 0000685C  38 60 00 04 */ li r3, 4
/* 80009920 00006860  38 80 00 04 */ li r4, 4
/* 80009924 00006864  4B FF FB 91 */ bl mDoGph_drawFilterQuad
lbl_80009928:
/* 80009928 00006868  57 80 06 3F */ clrlwi. r0, r28, 0x18
/* 8000992C 0000686C  41 82 08 04 */ beq lbl_8000A130
/* 80009930 00006870  38 60 00 00 */ li r3, 0
/* 80009934 00006874  38 80 00 00 */ li r4, 0
/* 80009938 00006878  38 A0 01 30 */ li r5, 0x130
/* 8000993C 0000687C  38 C0 00 E0 */ li r6, 0xe0
/* 80009940 00006880  48 35 31 41 */ bl GXSetTexCopySrc
/* 80009944 00006884  38 60 01 30 */ li r3, 0x130
/* 80009948 00006888  38 80 00 E0 */ li r4, 0xe0
/* 8000994C 0000688C  38 A0 00 06 */ li r5, 6
/* 80009950 00006890  38 C0 00 00 */ li r6, 0
/* 80009954 00006894  48 35 31 DD */ bl GXSetTexCopyDst
/* 80009958 00006898  80 7F 00 10 */ lwz r3, 0x10(r31)
/* 8000995C 0000689C  38 80 00 00 */ li r4, 0
/* 80009960 000068A0  48 35 3B 0D */ bl GXCopyTex
/* 80009964 000068A4  38 60 00 03 */ li r3, 3
/* 80009968 000068A8  48 35 5F 29 */ bl GXSetNumTevStages
/* 8000996C 000068AC  38 60 00 00 */ li r3, 0
/* 80009970 000068B0  38 80 00 00 */ li r4, 0
/* 80009974 000068B4  38 A0 00 00 */ li r5, 0
/* 80009978 000068B8  38 C0 00 FF */ li r6, 0xff
/* 8000997C 000068BC  48 35 5D 79 */ bl GXSetTevOrder
/* 80009980 000068C0  38 60 00 00 */ li r3, 0
/* 80009984 000068C4  38 80 00 08 */ li r4, 8
/* 80009988 000068C8  38 A0 00 09 */ li r5, 9
/* 8000998C 000068CC  38 C0 00 0D */ li r6, 0xd
/* 80009990 000068D0  38 E0 00 0F */ li r7, 0xf
/* 80009994 000068D4  48 35 58 91 */ bl GXSetTevColorIn
/* 80009998 000068D8  38 60 00 00 */ li r3, 0
/* 8000999C 000068DC  38 80 00 00 */ li r4, 0
/* 800099A0 000068E0  38 A0 00 00 */ li r5, 0
/* 800099A4 000068E4  38 C0 00 00 */ li r6, 0
/* 800099A8 000068E8  38 E0 00 01 */ li r7, 1
/* 800099AC 000068EC  39 00 00 00 */ li r8, 0
/* 800099B0 000068F0  48 35 58 FD */ bl GXSetTevColorOp
/* 800099B4 000068F4  38 60 00 00 */ li r3, 0
/* 800099B8 000068F8  38 80 00 07 */ li r4, 7
/* 800099BC 000068FC  38 A0 00 07 */ li r5, 7
/* 800099C0 00006900  38 C0 00 07 */ li r6, 7
/* 800099C4 00006904  38 E0 00 07 */ li r7, 7
/* 800099C8 00006908  48 35 58 A1 */ bl GXSetTevAlphaIn
/* 800099CC 0000690C  38 60 00 00 */ li r3, 0
/* 800099D0 00006910  38 80 00 00 */ li r4, 0
/* 800099D4 00006914  38 A0 00 00 */ li r5, 0
/* 800099D8 00006918  38 C0 00 00 */ li r6, 0
/* 800099DC 0000691C  38 E0 00 01 */ li r7, 1
/* 800099E0 00006920  39 00 00 00 */ li r8, 0
/* 800099E4 00006924  48 35 59 31 */ bl GXSetTevAlphaOp
/* 800099E8 00006928  38 60 00 00 */ li r3, 0
/* 800099EC 0000692C  38 80 00 01 */ li r4, 1
/* 800099F0 00006930  38 A0 00 01 */ li r5, 1
/* 800099F4 00006934  48 35 5B 69 */ bl GXSetTevSwapMode
/* 800099F8 00006938  38 60 00 01 */ li r3, 1
/* 800099FC 0000693C  38 80 00 00 */ li r4, 0
/* 80009A00 00006940  38 A0 00 00 */ li r5, 0
/* 80009A04 00006944  38 C0 00 FF */ li r6, 0xff
/* 80009A08 00006948  48 35 5C ED */ bl GXSetTevOrder
/* 80009A0C 0000694C  38 60 00 01 */ li r3, 1
/* 80009A10 00006950  38 80 00 08 */ li r4, 8
/* 80009A14 00006954  38 A0 00 00 */ li r5, 0
/* 80009A18 00006958  38 C0 00 0D */ li r6, 0xd
/* 80009A1C 0000695C  38 E0 00 02 */ li r7, 2
/* 80009A20 00006960  48 35 58 05 */ bl GXSetTevColorIn
/* 80009A24 00006964  38 60 00 01 */ li r3, 1
/* 80009A28 00006968  38 80 00 00 */ li r4, 0
/* 80009A2C 0000696C  38 A0 00 00 */ li r5, 0
/* 80009A30 00006970  38 C0 00 00 */ li r6, 0
/* 80009A34 00006974  38 E0 00 01 */ li r7, 1
/* 80009A38 00006978  39 00 00 00 */ li r8, 0
/* 80009A3C 0000697C  48 35 58 71 */ bl GXSetTevColorOp
/* 80009A40 00006980  38 60 00 01 */ li r3, 1
/* 80009A44 00006984  38 80 00 07 */ li r4, 7
/* 80009A48 00006988  38 A0 00 07 */ li r5, 7
/* 80009A4C 0000698C  38 C0 00 07 */ li r6, 7
/* 80009A50 00006990  38 E0 00 07 */ li r7, 7
/* 80009A54 00006994  48 35 58 15 */ bl GXSetTevAlphaIn
/* 80009A58 00006998  38 60 00 01 */ li r3, 1
/* 80009A5C 0000699C  38 80 00 00 */ li r4, 0
/* 80009A60 000069A0  38 A0 00 00 */ li r5, 0
/* 80009A64 000069A4  38 C0 00 00 */ li r6, 0
/* 80009A68 000069A8  38 E0 00 01 */ li r7, 1
/* 80009A6C 000069AC  39 00 00 00 */ li r8, 0
/* 80009A70 000069B0  48 35 58 A5 */ bl GXSetTevAlphaOp
/* 80009A74 000069B4  38 60 00 01 */ li r3, 1
/* 80009A78 000069B8  38 80 00 03 */ li r4, 3
/* 80009A7C 000069BC  38 A0 00 03 */ li r5, 3
/* 80009A80 000069C0  48 35 5A DD */ bl GXSetTevSwapMode
/* 80009A84 000069C4  38 60 00 02 */ li r3, 2
/* 80009A88 000069C8  38 80 00 00 */ li r4, 0
/* 80009A8C 000069CC  38 A0 00 00 */ li r5, 0
/* 80009A90 000069D0  38 C0 00 FF */ li r6, 0xff
/* 80009A94 000069D4  48 35 5C 61 */ bl GXSetTevOrder
/* 80009A98 000069D8  38 60 00 02 */ li r3, 2
/* 80009A9C 000069DC  38 80 00 0F */ li r4, 0xf
/* 80009AA0 000069E0  38 A0 00 08 */ li r5, 8
/* 80009AA4 000069E4  38 C0 00 00 */ li r6, 0
/* 80009AA8 000069E8  38 E0 00 0F */ li r7, 0xf
/* 80009AAC 000069EC  48 35 57 79 */ bl GXSetTevColorIn
/* 80009AB0 000069F0  38 60 00 02 */ li r3, 2
/* 80009AB4 000069F4  38 80 00 00 */ li r4, 0
/* 80009AB8 000069F8  38 A0 00 00 */ li r5, 0
/* 80009ABC 000069FC  38 C0 00 00 */ li r6, 0
/* 80009AC0 00006A00  38 E0 00 01 */ li r7, 1
/* 80009AC4 00006A04  39 00 00 00 */ li r8, 0
/* 80009AC8 00006A08  48 35 57 E5 */ bl GXSetTevColorOp
/* 80009ACC 00006A0C  38 60 00 02 */ li r3, 2
/* 80009AD0 00006A10  38 80 00 07 */ li r4, 7
/* 80009AD4 00006A14  38 A0 00 07 */ li r5, 7
/* 80009AD8 00006A18  38 C0 00 07 */ li r6, 7
/* 80009ADC 00006A1C  38 E0 00 07 */ li r7, 7
/* 80009AE0 00006A20  48 35 57 89 */ bl GXSetTevAlphaIn
/* 80009AE4 00006A24  38 60 00 02 */ li r3, 2
/* 80009AE8 00006A28  38 80 00 00 */ li r4, 0
/* 80009AEC 00006A2C  38 A0 00 00 */ li r5, 0
/* 80009AF0 00006A30  38 C0 00 00 */ li r6, 0
/* 80009AF4 00006A34  38 E0 00 01 */ li r7, 1
/* 80009AF8 00006A38  39 00 00 00 */ li r8, 0
/* 80009AFC 00006A3C  48 35 58 19 */ bl GXSetTevAlphaOp
/* 80009B00 00006A40  38 60 00 00 */ li r3, 0
/* 80009B04 00006A44  38 80 00 00 */ li r4, 0
/* 80009B08 00006A48  38 A0 00 00 */ li r5, 0
/* 80009B0C 00006A4C  38 C0 00 07 */ li r6, 7
/* 80009B10 00006A50  48 35 60 E1 */ bl GXSetBlendMode
/* 80009B14 00006A54  80 62 80 B4 */ lwz r3, lbl_80451AB4-_SDA2_BASE_(r2)
/* 80009B18 00006A58  80 02 80 B8 */ lwz r0, lbl_80451AB8-_SDA2_BASE_(r2)
/* 80009B1C 00006A5C  90 61 00 24 */ stw r3, 0x24(r1)
/* 80009B20 00006A60  90 01 00 28 */ stw r0, 0x28(r1)
/* 80009B24 00006A64  88 1F 00 0A */ lbz r0, 0xa(r31)
/* 80009B28 00006A68  7C 00 00 D0 */ neg r0, r0
/* 80009B2C 00006A6C  B0 01 00 24 */ sth r0, 0x24(r1)
/* 80009B30 00006A70  B0 01 00 26 */ sth r0, 0x26(r1)
/* 80009B34 00006A74  B0 01 00 28 */ sth r0, 0x28(r1)
/* 80009B38 00006A78  80 61 00 24 */ lwz r3, 0x24(r1)
/* 80009B3C 00006A7C  80 01 00 28 */ lwz r0, 0x28(r1)
/* 80009B40 00006A80  90 61 00 1C */ stw r3, 0x1c(r1)
/* 80009B44 00006A84  90 01 00 20 */ stw r0, 0x20(r1)
/* 80009B48 00006A88  38 60 00 01 */ li r3, 1
/* 80009B4C 00006A8C  38 81 00 1C */ addi r4, r1, 0x1c
/* 80009B50 00006A90  48 35 58 8D */ bl GXSetTevColorS10
/* 80009B54 00006A94  80 02 D1 60 */ lwz r0, lbl_80456B60-_SDA2_BASE_(r2)
/* 80009B58 00006A98  90 01 00 18 */ stw r0, 0x18(r1)
/* 80009B5C 00006A9C  88 1F 00 0C */ lbz r0, 0xc(r31)
/* 80009B60 00006AA0  98 01 00 18 */ stb r0, 0x18(r1)
/* 80009B64 00006AA4  98 01 00 19 */ stb r0, 0x19(r1)
/* 80009B68 00006AA8  98 01 00 1A */ stb r0, 0x1a(r1)
/* 80009B6C 00006AAC  98 01 00 1B */ stb r0, 0x1b(r1)
/* 80009B70 00006AB0  80 01 00 18 */ lwz r0, 0x18(r1)
/* 80009B74 00006AB4  90 01 00 0C */ stw r0, 0xc(r1)
/* 80009B78 00006AB8  38 60 00 02 */ li r3, 2
/* 80009B7C 00006ABC  38 81 00 0C */ addi r4, r1, 0xc
/* 80009B80 00006AC0  48 35 57 FD */ bl GXSetTevColor
/* 80009B84 00006AC4  48 35 27 F1 */ bl GXPixModeSync
/* 80009B88 00006AC8  38 60 00 02 */ li r3, 2
/* 80009B8C 00006ACC  38 80 00 02 */ li r4, 2
/* 80009B90 00006AD0  4B FF F9 25 */ bl mDoGph_drawFilterQuad
/* 80009B94 00006AD4  38 60 00 01 */ li r3, 1
/* 80009B98 00006AD8  38 80 00 00 */ li r4, 0
/* 80009B9C 00006ADC  38 A0 00 00 */ li r5, 0
/* 80009BA0 00006AE0  38 C0 00 00 */ li r6, 0
/* 80009BA4 00006AE4  38 E0 00 03 */ li r7, 3
/* 80009BA8 00006AE8  48 35 59 FD */ bl GXSetTevSwapModeTable
/* 80009BAC 00006AEC  38 60 00 00 */ li r3, 0
/* 80009BB0 00006AF0  38 80 00 00 */ li r4, 0
/* 80009BB4 00006AF4  38 A0 00 00 */ li r5, 0
/* 80009BB8 00006AF8  48 35 59 A5 */ bl GXSetTevSwapMode
/* 80009BBC 00006AFC  38 60 00 01 */ li r3, 1
/* 80009BC0 00006B00  38 80 00 00 */ li r4, 0
/* 80009BC4 00006B04  38 A0 00 00 */ li r5, 0
/* 80009BC8 00006B08  48 35 59 95 */ bl GXSetTevSwapMode
/* 80009BCC 00006B0C  83 6D 86 58 */ lwz r27, lbl_80450BD8-_SDA_BASE_(r13)
/* 80009BD0 00006B10  38 60 00 00 */ li r3, 0
/* 80009BD4 00006B14  38 80 00 00 */ li r4, 0
/* 80009BD8 00006B18  38 A0 01 30 */ li r5, 0x130
/* 80009BDC 00006B1C  38 C0 00 E0 */ li r6, 0xe0
/* 80009BE0 00006B20  48 35 2E A1 */ bl GXSetTexCopySrc
/* 80009BE4 00006B24  38 60 00 98 */ li r3, 0x98
/* 80009BE8 00006B28  38 80 00 70 */ li r4, 0x70
/* 80009BEC 00006B2C  38 A0 00 06 */ li r5, 6
/* 80009BF0 00006B30  38 C0 00 01 */ li r6, 1
/* 80009BF4 00006B34  48 35 2F 3D */ bl GXSetTexCopyDst
/* 80009BF8 00006B38  7F 63 DB 78 */ mr r3, r27
/* 80009BFC 00006B3C  38 80 00 00 */ li r4, 0
/* 80009C00 00006B40  48 35 38 6D */ bl GXCopyTex
/* 80009C04 00006B44  38 61 00 4C */ addi r3, r1, 0x4c
/* 80009C08 00006B48  7F 64 DB 78 */ mr r4, r27
/* 80009C0C 00006B4C  38 A0 00 98 */ li r5, 0x98
/* 80009C10 00006B50  38 C0 00 70 */ li r6, 0x70
/* 80009C14 00006B54  38 E0 00 06 */ li r7, 6
/* 80009C18 00006B58  39 00 00 00 */ li r8, 0
/* 80009C1C 00006B5C  39 20 00 00 */ li r9, 0
/* 80009C20 00006B60  39 40 00 00 */ li r10, 0
/* 80009C24 00006B64  48 35 42 1D */ bl GXInitTexObj
/* 80009C28 00006B68  38 61 00 4C */ addi r3, r1, 0x4c
/* 80009C2C 00006B6C  38 80 00 01 */ li r4, 1
/* 80009C30 00006B70  38 A0 00 01 */ li r5, 1
/* 80009C34 00006B74  C0 22 80 38 */ lfs f1, lbl_80451A38-_SDA2_BASE_(r2)
/* 80009C38 00006B78  FC 40 08 90 */ fmr f2, f1
/* 80009C3C 00006B7C  FC 60 08 90 */ fmr f3, f1
/* 80009C40 00006B80  38 C0 00 00 */ li r6, 0
/* 80009C44 00006B84  38 E0 00 00 */ li r7, 0
/* 80009C48 00006B88  39 00 00 00 */ li r8, 0
/* 80009C4C 00006B8C  48 35 44 89 */ bl GXInitTexObjLOD
/* 80009C50 00006B90  38 61 00 4C */ addi r3, r1, 0x4c
/* 80009C54 00006B94  38 80 00 00 */ li r4, 0
/* 80009C58 00006B98  48 35 47 BD */ bl GXLoadTexObj
/* 80009C5C 00006B9C  38 60 00 08 */ li r3, 8
/* 80009C60 00006BA0  48 35 21 9D */ bl GXSetNumTexGens
/* 80009C64 00006BA4  3B 40 00 1E */ li r26, 0x1e
/* 80009C68 00006BA8  3B 20 00 00 */ li r25, 0
/* 80009C6C 00006BAC  38 60 00 00 */ li r3, 0
/* 80009C70 00006BB0  38 80 00 01 */ li r4, 1
/* 80009C74 00006BB4  38 A0 00 04 */ li r5, 4
/* 80009C78 00006BB8  38 C0 00 3C */ li r6, 0x3c
/* 80009C7C 00006BBC  38 E0 00 00 */ li r7, 0
/* 80009C80 00006BC0  39 00 00 7D */ li r8, 0x7d
/* 80009C84 00006BC4  48 35 1E F9 */ bl GXSetTexCoordGen2
/* 80009C88 00006BC8  3B 00 00 01 */ li r24, 1
/* 80009C8C 00006BCC  C3 A2 80 C0 */ lfs f29, lbl_80451AC0-_SDA2_BASE_(r2)
/* 80009C90 00006BD0  CB C2 80 C8 */ lfd f30, lbl_80451AC8-_SDA2_BASE_(r2)
/* 80009C94 00006BD4  3F 80 43 30 */ lis r28, 0x4330
/* 80009C98 00006BD8  3C 60 80 44 */ lis r3, lbl_80439A20@ha
/* 80009C9C 00006BDC  3B A3 9A 20 */ addi r29, r3, lbl_80439A20@l
/* 80009CA0 00006BE0  3C 60 80 3E */ lis r3, lbl_803DD470@ha
/* 80009CA4 00006BE4  3B C3 D4 70 */ addi r30, r3, lbl_803DD470@l
/* 80009CA8 00006BE8  C3 E2 80 3C */ lfs f31, lbl_80451A3C-_SDA2_BASE_(r2)
lbl_80009CAC:
/* 80009CAC 00006BEC  7F 03 C3 78 */ mr r3, r24
/* 80009CB0 00006BF0  38 80 00 01 */ li r4, 1
/* 80009CB4 00006BF4  38 A0 00 04 */ li r5, 4
/* 80009CB8 00006BF8  7F 46 D3 78 */ mr r6, r26
/* 80009CBC 00006BFC  38 E0 00 00 */ li r7, 0
/* 80009CC0 00006C00  39 00 00 7D */ li r8, 0x7d
/* 80009CC4 00006C04  48 35 1E B9 */ bl GXSetTexCoordGen2
/* 80009CC8 00006C08  88 1F 00 0B */ lbz r0, 0xb(r31)
/* 80009CCC 00006C0C  90 01 00 B4 */ stw r0, 0xb4(r1)
/* 80009CD0 00006C10  93 81 00 B0 */ stw r28, 0xb0(r1)
/* 80009CD4 00006C14  C8 01 00 B0 */ lfd f0, 0xb0(r1)
/* 80009CD8 00006C18  EC 00 F0 28 */ fsubs f0, f0, f30
/* 80009CDC 00006C1C  EC 5D 00 32 */ fmuls f2, f29, f0
/* 80009CE0 00006C20  57 20 04 38 */ rlwinm r0, r25, 0, 0x10, 0x1c
/* 80009CE4 00006C24  7C 9D 02 14 */ add r4, r29, r0
/* 80009CE8 00006C28  7F C3 F3 78 */ mr r3, r30
/* 80009CEC 00006C2C  C0 04 00 04 */ lfs f0, 4(r4)
/* 80009CF0 00006C30  EC 02 00 32 */ fmuls f0, f2, f0
/* 80009CF4 00006C34  EC 20 07 F2 */ fmuls f1, f0, f31
/* 80009CF8 00006C38  C0 04 00 00 */ lfs f0, 0(r4)
/* 80009CFC 00006C3C  EC 42 00 32 */ fmuls f2, f2, f0
/* 80009D00 00006C40  C0 62 80 38 */ lfs f3, lbl_80451A38-_SDA2_BASE_(r2)
/* 80009D04 00006C44  48 33 CB E5 */ bl PSMTXTrans
/* 80009D08 00006C48  7F C3 F3 78 */ mr r3, r30
/* 80009D0C 00006C4C  7F 44 D3 78 */ mr r4, r26
/* 80009D10 00006C50  38 A0 00 01 */ li r5, 1
/* 80009D14 00006C54  48 35 66 0D */ bl GXLoadTexMtxImm
/* 80009D18 00006C58  3B 18 00 01 */ addi r24, r24, 1
/* 80009D1C 00006C5C  2C 18 00 08 */ cmpwi r24, 8
/* 80009D20 00006C60  3B 5A 00 03 */ addi r26, r26, 3
/* 80009D24 00006C64  3B 39 24 92 */ addi r25, r25, 0x2492
/* 80009D28 00006C68  41 80 FF 84 */ blt lbl_80009CAC
/* 80009D2C 00006C6C  38 60 00 08 */ li r3, 8
/* 80009D30 00006C70  48 35 5B 61 */ bl GXSetNumTevStages
/* 80009D34 00006C74  38 60 00 00 */ li r3, 0
/* 80009D38 00006C78  38 80 00 00 */ li r4, 0
/* 80009D3C 00006C7C  38 A0 00 00 */ li r5, 0
/* 80009D40 00006C80  38 C0 00 FF */ li r6, 0xff
/* 80009D44 00006C84  48 35 59 B1 */ bl GXSetTevOrder
/* 80009D48 00006C88  38 60 00 00 */ li r3, 0
/* 80009D4C 00006C8C  38 80 00 0F */ li r4, 0xf
/* 80009D50 00006C90  38 A0 00 08 */ li r5, 8
/* 80009D54 00006C94  38 C0 00 05 */ li r6, 5
/* 80009D58 00006C98  38 E0 00 0F */ li r7, 0xf
/* 80009D5C 00006C9C  48 35 54 C9 */ bl GXSetTevColorIn
/* 80009D60 00006CA0  38 60 00 00 */ li r3, 0
/* 80009D64 00006CA4  38 80 00 00 */ li r4, 0
/* 80009D68 00006CA8  38 A0 00 00 */ li r5, 0
/* 80009D6C 00006CAC  38 C0 00 00 */ li r6, 0
/* 80009D70 00006CB0  38 E0 00 01 */ li r7, 1
/* 80009D74 00006CB4  39 00 00 00 */ li r8, 0
/* 80009D78 00006CB8  48 35 55 35 */ bl GXSetTevColorOp
/* 80009D7C 00006CBC  38 60 00 00 */ li r3, 0
/* 80009D80 00006CC0  38 80 00 07 */ li r4, 7
/* 80009D84 00006CC4  38 A0 00 07 */ li r5, 7
/* 80009D88 00006CC8  38 C0 00 07 */ li r6, 7
/* 80009D8C 00006CCC  38 E0 00 07 */ li r7, 7
/* 80009D90 00006CD0  48 35 54 D9 */ bl GXSetTevAlphaIn
/* 80009D94 00006CD4  38 60 00 00 */ li r3, 0
/* 80009D98 00006CD8  38 80 00 00 */ li r4, 0
/* 80009D9C 00006CDC  38 A0 00 00 */ li r5, 0
/* 80009DA0 00006CE0  38 C0 00 00 */ li r6, 0
/* 80009DA4 00006CE4  38 E0 00 01 */ li r7, 1
/* 80009DA8 00006CE8  39 00 00 00 */ li r8, 0
/* 80009DAC 00006CEC  48 35 55 69 */ bl GXSetTevAlphaOp
/* 80009DB0 00006CF0  3B 00 00 01 */ li r24, 1
lbl_80009DB4:
/* 80009DB4 00006CF4  7F 03 C3 78 */ mr r3, r24
/* 80009DB8 00006CF8  7F 04 C3 78 */ mr r4, r24
/* 80009DBC 00006CFC  38 A0 00 00 */ li r5, 0
/* 80009DC0 00006D00  38 C0 00 FF */ li r6, 0xff
/* 80009DC4 00006D04  48 35 59 31 */ bl GXSetTevOrder
/* 80009DC8 00006D08  7F 03 C3 78 */ mr r3, r24
/* 80009DCC 00006D0C  38 80 00 0F */ li r4, 0xf
/* 80009DD0 00006D10  38 A0 00 08 */ li r5, 8
/* 80009DD4 00006D14  38 C0 00 05 */ li r6, 5
/* 80009DD8 00006D18  38 E0 00 00 */ li r7, 0
/* 80009DDC 00006D1C  48 35 54 49 */ bl GXSetTevColorIn
/* 80009DE0 00006D20  7F 03 C3 78 */ mr r3, r24
/* 80009DE4 00006D24  38 80 00 00 */ li r4, 0
/* 80009DE8 00006D28  38 A0 00 00 */ li r5, 0
/* 80009DEC 00006D2C  38 C0 00 00 */ li r6, 0
/* 80009DF0 00006D30  38 E0 00 01 */ li r7, 1
/* 80009DF4 00006D34  39 00 00 00 */ li r8, 0
/* 80009DF8 00006D38  48 35 54 B5 */ bl GXSetTevColorOp
/* 80009DFC 00006D3C  7F 03 C3 78 */ mr r3, r24
/* 80009E00 00006D40  38 80 00 07 */ li r4, 7
/* 80009E04 00006D44  38 A0 00 07 */ li r5, 7
/* 80009E08 00006D48  38 C0 00 07 */ li r6, 7
/* 80009E0C 00006D4C  38 E0 00 01 */ li r7, 1
/* 80009E10 00006D50  48 35 54 59 */ bl GXSetTevAlphaIn
/* 80009E14 00006D54  7F 03 C3 78 */ mr r3, r24
/* 80009E18 00006D58  38 80 00 00 */ li r4, 0
/* 80009E1C 00006D5C  38 A0 00 00 */ li r5, 0
/* 80009E20 00006D60  38 C0 00 00 */ li r6, 0
/* 80009E24 00006D64  38 E0 00 01 */ li r7, 1
/* 80009E28 00006D68  39 00 00 00 */ li r8, 0
/* 80009E2C 00006D6C  48 35 54 E9 */ bl GXSetTevAlphaOp
/* 80009E30 00006D70  3B 18 00 01 */ addi r24, r24, 1
/* 80009E34 00006D74  2C 18 00 08 */ cmpwi r24, 8
/* 80009E38 00006D78  41 80 FF 7C */ blt lbl_80009DB4
/* 80009E3C 00006D7C  48 35 25 39 */ bl GXPixModeSync
/* 80009E40 00006D80  38 60 00 01 */ li r3, 1
/* 80009E44 00006D84  38 80 00 01 */ li r4, 1
/* 80009E48 00006D88  4B FF F6 6D */ bl mDoGph_drawFilterQuad
/* 80009E4C 00006D8C  38 60 00 00 */ li r3, 0
/* 80009E50 00006D90  38 80 00 00 */ li r4, 0
/* 80009E54 00006D94  38 A0 00 98 */ li r5, 0x98
/* 80009E58 00006D98  38 C0 00 70 */ li r6, 0x70
/* 80009E5C 00006D9C  48 35 2C 25 */ bl GXSetTexCopySrc
/* 80009E60 00006DA0  38 60 00 4C */ li r3, 0x4c
/* 80009E64 00006DA4  38 80 00 38 */ li r4, 0x38
/* 80009E68 00006DA8  38 A0 00 06 */ li r5, 6
/* 80009E6C 00006DAC  38 C0 00 01 */ li r6, 1
/* 80009E70 00006DB0  48 35 2C C1 */ bl GXSetTexCopyDst
/* 80009E74 00006DB4  7F 63 DB 78 */ mr r3, r27
/* 80009E78 00006DB8  38 80 00 00 */ li r4, 0
/* 80009E7C 00006DBC  48 35 35 F1 */ bl GXCopyTex
/* 80009E80 00006DC0  38 61 00 2C */ addi r3, r1, 0x2c
/* 80009E84 00006DC4  7F 64 DB 78 */ mr r4, r27
/* 80009E88 00006DC8  38 A0 00 4C */ li r5, 0x4c
/* 80009E8C 00006DCC  38 C0 00 38 */ li r6, 0x38
/* 80009E90 00006DD0  38 E0 00 06 */ li r7, 6
/* 80009E94 00006DD4  39 00 00 00 */ li r8, 0
/* 80009E98 00006DD8  39 20 00 00 */ li r9, 0
/* 80009E9C 00006DDC  39 40 00 00 */ li r10, 0
/* 80009EA0 00006DE0  48 35 3F A1 */ bl GXInitTexObj
/* 80009EA4 00006DE4  38 61 00 4C */ addi r3, r1, 0x4c
/* 80009EA8 00006DE8  38 80 00 01 */ li r4, 1
/* 80009EAC 00006DEC  38 A0 00 01 */ li r5, 1
/* 80009EB0 00006DF0  C0 22 80 38 */ lfs f1, lbl_80451A38-_SDA2_BASE_(r2)
/* 80009EB4 00006DF4  FC 40 08 90 */ fmr f2, f1
/* 80009EB8 00006DF8  FC 60 08 90 */ fmr f3, f1
/* 80009EBC 00006DFC  38 C0 00 00 */ li r6, 0
/* 80009EC0 00006E00  38 E0 00 00 */ li r7, 0
/* 80009EC4 00006E04  39 00 00 00 */ li r8, 0
/* 80009EC8 00006E08  48 35 42 0D */ bl GXInitTexObjLOD
/* 80009ECC 00006E0C  38 61 00 2C */ addi r3, r1, 0x2c
/* 80009ED0 00006E10  38 80 00 00 */ li r4, 0
/* 80009ED4 00006E14  48 35 45 41 */ bl GXLoadTexObj
/* 80009ED8 00006E18  38 60 00 01 */ li r3, 1
/* 80009EDC 00006E1C  38 80 00 04 */ li r4, 4
/* 80009EE0 00006E20  38 A0 00 05 */ li r5, 5
/* 80009EE4 00006E24  38 C0 00 07 */ li r6, 7
/* 80009EE8 00006E28  48 35 5D 09 */ bl GXSetBlendMode
/* 80009EEC 00006E2C  48 35 24 89 */ bl GXPixModeSync
/* 80009EF0 00006E30  48 35 47 75 */ bl GXInvalidateTexAll
/* 80009EF4 00006E34  38 60 00 01 */ li r3, 1
/* 80009EF8 00006E38  38 80 00 01 */ li r4, 1
/* 80009EFC 00006E3C  4B FF F5 B9 */ bl mDoGph_drawFilterQuad
/* 80009F00 00006E40  38 60 00 00 */ li r3, 0
/* 80009F04 00006E44  38 80 00 00 */ li r4, 0
/* 80009F08 00006E48  38 A0 00 98 */ li r5, 0x98
/* 80009F0C 00006E4C  38 C0 00 70 */ li r6, 0x70
/* 80009F10 00006E50  48 35 2B 71 */ bl GXSetTexCopySrc
/* 80009F14 00006E54  38 60 00 98 */ li r3, 0x98
/* 80009F18 00006E58  38 80 00 70 */ li r4, 0x70
/* 80009F1C 00006E5C  38 A0 00 06 */ li r5, 6
/* 80009F20 00006E60  38 C0 00 00 */ li r6, 0
/* 80009F24 00006E64  48 35 2C 0D */ bl GXSetTexCopyDst
/* 80009F28 00006E68  7F 63 DB 78 */ mr r3, r27
/* 80009F2C 00006E6C  38 80 00 00 */ li r4, 0
/* 80009F30 00006E70  48 35 35 3D */ bl GXCopyTex
/* 80009F34 00006E74  38 61 00 2C */ addi r3, r1, 0x2c
/* 80009F38 00006E78  80 9F 00 10 */ lwz r4, 0x10(r31)
/* 80009F3C 00006E7C  38 A0 01 30 */ li r5, 0x130
/* 80009F40 00006E80  38 C0 00 E0 */ li r6, 0xe0
/* 80009F44 00006E84  38 E0 00 06 */ li r7, 6
/* 80009F48 00006E88  39 00 00 00 */ li r8, 0
/* 80009F4C 00006E8C  39 20 00 00 */ li r9, 0
/* 80009F50 00006E90  39 40 00 00 */ li r10, 0
/* 80009F54 00006E94  48 35 3E ED */ bl GXInitTexObj
/* 80009F58 00006E98  38 61 00 2C */ addi r3, r1, 0x2c
/* 80009F5C 00006E9C  38 80 00 01 */ li r4, 1
/* 80009F60 00006EA0  38 A0 00 01 */ li r5, 1
/* 80009F64 00006EA4  C0 22 80 38 */ lfs f1, lbl_80451A38-_SDA2_BASE_(r2)
/* 80009F68 00006EA8  FC 40 08 90 */ fmr f2, f1
/* 80009F6C 00006EAC  FC 60 08 90 */ fmr f3, f1
/* 80009F70 00006EB0  38 C0 00 00 */ li r6, 0
/* 80009F74 00006EB4  38 E0 00 00 */ li r7, 0
/* 80009F78 00006EB8  39 00 00 00 */ li r8, 0
/* 80009F7C 00006EBC  48 35 41 59 */ bl GXInitTexObjLOD
/* 80009F80 00006EC0  38 61 00 2C */ addi r3, r1, 0x2c
/* 80009F84 00006EC4  38 80 00 00 */ li r4, 0
/* 80009F88 00006EC8  48 35 44 8D */ bl GXLoadTexObj
/* 80009F8C 00006ECC  38 60 00 01 */ li r3, 1
/* 80009F90 00006ED0  48 35 1E 6D */ bl GXSetNumTexGens
/* 80009F94 00006ED4  38 60 00 00 */ li r3, 0
/* 80009F98 00006ED8  38 80 00 01 */ li r4, 1
/* 80009F9C 00006EDC  38 A0 00 04 */ li r5, 4
/* 80009FA0 00006EE0  38 C0 00 3C */ li r6, 0x3c
/* 80009FA4 00006EE4  38 E0 00 00 */ li r7, 0
/* 80009FA8 00006EE8  39 00 00 7D */ li r8, 0x7d
/* 80009FAC 00006EEC  48 35 1B D1 */ bl GXSetTexCoordGen2
/* 80009FB0 00006EF0  38 60 00 01 */ li r3, 1
/* 80009FB4 00006EF4  48 35 58 DD */ bl GXSetNumTevStages
/* 80009FB8 00006EF8  38 60 00 00 */ li r3, 0
/* 80009FBC 00006EFC  38 80 00 00 */ li r4, 0
/* 80009FC0 00006F00  38 A0 00 00 */ li r5, 0
/* 80009FC4 00006F04  38 C0 00 FF */ li r6, 0xff
/* 80009FC8 00006F08  48 35 57 2D */ bl GXSetTevOrder
/* 80009FCC 00006F0C  38 60 00 00 */ li r3, 0
/* 80009FD0 00006F10  38 80 00 0F */ li r4, 0xf
/* 80009FD4 00006F14  38 A0 00 0F */ li r5, 0xf
/* 80009FD8 00006F18  38 C0 00 0F */ li r6, 0xf
/* 80009FDC 00006F1C  38 E0 00 08 */ li r7, 8
/* 80009FE0 00006F20  48 35 52 45 */ bl GXSetTevColorIn
/* 80009FE4 00006F24  38 60 00 00 */ li r3, 0
/* 80009FE8 00006F28  38 80 00 00 */ li r4, 0
/* 80009FEC 00006F2C  38 A0 00 00 */ li r5, 0
/* 80009FF0 00006F30  38 C0 00 00 */ li r6, 0
/* 80009FF4 00006F34  38 E0 00 01 */ li r7, 1
/* 80009FF8 00006F38  39 00 00 00 */ li r8, 0
/* 80009FFC 00006F3C  48 35 52 B1 */ bl GXSetTevColorOp
/* 8000A000 00006F40  38 60 00 00 */ li r3, 0
/* 8000A004 00006F44  38 80 00 07 */ li r4, 7
/* 8000A008 00006F48  38 A0 00 07 */ li r5, 7
/* 8000A00C 00006F4C  38 C0 00 07 */ li r6, 7
/* 8000A010 00006F50  38 E0 00 07 */ li r7, 7
/* 8000A014 00006F54  48 35 52 55 */ bl GXSetTevAlphaIn
/* 8000A018 00006F58  38 60 00 00 */ li r3, 0
/* 8000A01C 00006F5C  38 80 00 00 */ li r4, 0
/* 8000A020 00006F60  38 A0 00 00 */ li r5, 0
/* 8000A024 00006F64  38 C0 00 00 */ li r6, 0
/* 8000A028 00006F68  38 E0 00 01 */ li r7, 1
/* 8000A02C 00006F6C  39 00 00 00 */ li r8, 0
/* 8000A030 00006F70  48 35 52 E5 */ bl GXSetTevAlphaOp
/* 8000A034 00006F74  38 60 00 00 */ li r3, 0
/* 8000A038 00006F78  38 80 00 01 */ li r4, 1
/* 8000A03C 00006F7C  38 A0 00 01 */ li r5, 1
/* 8000A040 00006F80  38 C0 00 07 */ li r6, 7
/* 8000A044 00006F84  48 35 5B AD */ bl GXSetBlendMode
/* 8000A048 00006F88  38 60 00 02 */ li r3, 2
/* 8000A04C 00006F8C  38 80 00 02 */ li r4, 2
/* 8000A050 00006F90  4B FF F4 65 */ bl mDoGph_drawFilterQuad
/* 8000A054 00006F94  38 61 00 4C */ addi r3, r1, 0x4c
/* 8000A058 00006F98  38 80 00 00 */ li r4, 0
/* 8000A05C 00006F9C  48 35 43 B9 */ bl GXLoadTexObj
/* 8000A060 00006FA0  80 1F 00 00 */ lwz r0, 0(r31)
/* 8000A064 00006FA4  90 01 00 08 */ stw r0, 8(r1)
/* 8000A068 00006FA8  38 60 00 01 */ li r3, 1
/* 8000A06C 00006FAC  38 81 00 08 */ addi r4, r1, 8
/* 8000A070 00006FB0  48 35 53 0D */ bl GXSetTevColor
/* 8000A074 00006FB4  38 60 00 01 */ li r3, 1
/* 8000A078 00006FB8  48 35 58 19 */ bl GXSetNumTevStages
/* 8000A07C 00006FBC  38 60 00 00 */ li r3, 0
/* 8000A080 00006FC0  38 80 00 00 */ li r4, 0
/* 8000A084 00006FC4  38 A0 00 00 */ li r5, 0
/* 8000A088 00006FC8  38 C0 00 FF */ li r6, 0xff
/* 8000A08C 00006FCC  48 35 56 69 */ bl GXSetTevOrder
/* 8000A090 00006FD0  38 60 00 00 */ li r3, 0
/* 8000A094 00006FD4  38 80 00 0F */ li r4, 0xf
/* 8000A098 00006FD8  38 A0 00 08 */ li r5, 8
/* 8000A09C 00006FDC  38 C0 00 02 */ li r6, 2
/* 8000A0A0 00006FE0  38 E0 00 0F */ li r7, 0xf
/* 8000A0A4 00006FE4  48 35 51 81 */ bl GXSetTevColorIn
/* 8000A0A8 00006FE8  38 60 00 00 */ li r3, 0
/* 8000A0AC 00006FEC  38 80 00 00 */ li r4, 0
/* 8000A0B0 00006FF0  38 A0 00 00 */ li r5, 0
/* 8000A0B4 00006FF4  38 C0 00 00 */ li r6, 0
/* 8000A0B8 00006FF8  38 E0 00 01 */ li r7, 1
/* 8000A0BC 00006FFC  39 00 00 00 */ li r8, 0
/* 8000A0C0 00007000  48 35 51 ED */ bl GXSetTevColorOp
/* 8000A0C4 00007004  38 60 00 00 */ li r3, 0
/* 8000A0C8 00007008  38 80 00 07 */ li r4, 7
/* 8000A0CC 0000700C  38 A0 00 07 */ li r5, 7
/* 8000A0D0 00007010  38 C0 00 07 */ li r6, 7
/* 8000A0D4 00007014  38 E0 00 01 */ li r7, 1
/* 8000A0D8 00007018  48 35 51 91 */ bl GXSetTevAlphaIn
/* 8000A0DC 0000701C  38 60 00 00 */ li r3, 0
/* 8000A0E0 00007020  38 80 00 00 */ li r4, 0
/* 8000A0E4 00007024  38 A0 00 00 */ li r5, 0
/* 8000A0E8 00007028  38 C0 00 00 */ li r6, 0
/* 8000A0EC 0000702C  38 E0 00 01 */ li r7, 1
/* 8000A0F0 00007030  39 00 00 00 */ li r8, 0
/* 8000A0F4 00007034  48 35 52 21 */ bl GXSetTevAlphaOp
/* 8000A0F8 00007038  38 60 00 01 */ li r3, 1
/* 8000A0FC 0000703C  88 1F 00 09 */ lbz r0, 9(r31)
/* 8000A100 00007040  28 00 00 01 */ cmplwi r0, 1
/* 8000A104 00007044  38 80 00 01 */ li r4, 1
/* 8000A108 00007048  40 82 00 08 */ bne lbl_8000A110
/* 8000A10C 0000704C  38 80 00 03 */ li r4, 3
lbl_8000A110:
/* 8000A110 00007050  38 A0 00 04 */ li r5, 4
/* 8000A114 00007054  38 C0 00 07 */ li r6, 7
/* 8000A118 00007058  48 35 5A D9 */ bl GXSetBlendMode
/* 8000A11C 0000705C  48 35 22 59 */ bl GXPixModeSync
/* 8000A120 00007060  48 35 45 45 */ bl GXInvalidateTexAll
/* 8000A124 00007064  38 60 00 04 */ li r3, 4
/* 8000A128 00007068  38 80 00 04 */ li r4, 4
/* 8000A12C 0000706C  4B FF F3 89 */ bl mDoGph_drawFilterQuad
lbl_8000A130:
/* 8000A130 00007070  E3 E1 01 08 */ psq_l f31, 264(r1), 0, 0
/* 8000A134 00007074  CB E1 01 00 */ lfd f31, 0x100(r1)
/* 8000A138 00007078  E3 C1 00 F8 */ psq_l f30, 248(r1), 0, 0
/* 8000A13C 0000707C  CB C1 00 F0 */ lfd f30, 0xf0(r1)
/* 8000A140 00007080  E3 A1 00 E8 */ psq_l f29, 232(r1), 0, 0
/* 8000A144 00007084  CB A1 00 E0 */ lfd f29, 0xe0(r1)
/* 8000A148 00007088  39 61 00 E0 */ addi r11, r1, 0xe0
/* 8000A14C 0000708C  48 35 80 C9 */ bl _restgpr_24
/* 8000A150 00007090  80 01 01 14 */ lwz r0, 0x114(r1)
/* 8000A154 00007094  7C 08 03 A6 */ mtlr r0
/* 8000A158 00007098  38 21 01 10 */ addi r1, r1, 0x110
/* 8000A15C 0000709C  4E 80 00 20 */ blr
