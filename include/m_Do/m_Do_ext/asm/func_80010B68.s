/* 80010B68 0000DAA8  94 21 FF 30 */ stwu r1, -0xd0(r1)
/* 80010B6C 0000DAAC  7C 08 02 A6 */ mflr r0
/* 80010B70 0000DAB0  90 01 00 D4 */ stw r0, 0xd4(r1)
/* 80010B74 0000DAB4  DB E1 00 C0 */ stfd f31, 0xc0(r1)
/* 80010B78 0000DAB8  F3 E1 00 C8 */ psq_st f31, 200(r1), 0, 0
/* 80010B7C 0000DABC  DB C1 00 B0 */ stfd f30, 0xb0(r1)
/* 80010B80 0000DAC0  F3 C1 00 B8 */ psq_st f30, 184(r1), 0, 0
/* 80010B84 0000DAC4  39 61 00 B0 */ addi r11, r1, 0xb0
/* 80010B88 0000DAC8  48 35 16 51 */ bl _savegpr_28
/* 80010B8C 0000DACC  7C 7C 1B 78 */ mr r28, r3
/* 80010B90 0000DAD0  80 03 00 04 */ lwz r0, 4(r3)
/* 80010B94 0000DAD4  28 00 00 00 */ cmplwi r0, 0
/* 80010B98 0000DAD8  41 82 02 B0 */ beq lbl_80010E48
/* 80010B9C 0000DADC  80 6D 90 74 */ lwz r3, lbl_804515F4-_SDA_BASE_(r13)
/* 80010BA0 0000DAE0  A3 E3 00 14 */ lhz r31, 0x14(r3)
/* 80010BA4 0000DAE4  3C 60 80 43 */ lis r3, lbl_80434AC8@ha
/* 80010BA8 0000DAE8  38 63 4A C8 */ addi r3, r3, lbl_80434AC8@l
/* 80010BAC 0000DAEC  93 83 00 30 */ stw r28, 0x30(r3)
/* 80010BB0 0000DAF0  80 7C 00 20 */ lwz r3, 0x20(r28)
/* 80010BB4 0000DAF4  28 03 00 00 */ cmplwi r3, 0
/* 80010BB8 0000DAF8  40 82 00 0C */ bne lbl_80010BC4
/* 80010BBC 0000DAFC  3B C1 00 48 */ addi r30, r1, 0x48
/* 80010BC0 0000DB00  48 00 00 0C */ b lbl_80010BCC
lbl_80010BC4:
/* 80010BC4 0000DB04  57 E0 2A F4 */ rlwinm r0, r31, 5, 0xb, 0x1a
/* 80010BC8 0000DB08  7F C3 02 14 */ add r30, r3, r0
lbl_80010BCC:
/* 80010BCC 0000DB0C  80 9C 00 24 */ lwz r4, 0x24(r28)
/* 80010BD0 0000DB10  28 04 00 00 */ cmplwi r4, 0
/* 80010BD4 0000DB14  40 82 00 0C */ bne lbl_80010BE0
/* 80010BD8 0000DB18  3B A1 00 18 */ addi r29, r1, 0x18
/* 80010BDC 0000DB1C  48 00 00 0C */ b lbl_80010BE8
lbl_80010BE0:
/* 80010BE0 0000DB20  57 E0 23 36 */ rlwinm r0, r31, 4, 0xc, 0x1b
/* 80010BE4 0000DB24  7F A4 02 14 */ add r29, r4, r0
lbl_80010BE8:
/* 80010BE8 0000DB28  80 1C 00 08 */ lwz r0, 8(r28)
/* 80010BEC 0000DB2C  28 00 00 00 */ cmplwi r0, 0
/* 80010BF0 0000DB30  40 82 00 8C */ bne lbl_80010C7C
/* 80010BF4 0000DB34  80 7C 00 04 */ lwz r3, 4(r28)
/* 80010BF8 0000DB38  80 63 00 04 */ lwz r3, 4(r3)
/* 80010BFC 0000DB3C  80 63 00 28 */ lwz r3, 0x28(r3)
/* 80010C00 0000DB40  57 E0 13 BA */ rlwinm r0, r31, 2, 0xe, 0x1d
/* 80010C04 0000DB44  7C 63 00 2E */ lwzx r3, r3, r0
/* 80010C08 0000DB48  E0 03 00 18 */ psq_l f0, 24(r3), 0, 0
/* 80010C0C 0000DB4C  F0 1E 00 00 */ psq_st f0, 0(r30), 0, 0
/* 80010C10 0000DB50  C0 03 00 20 */ lfs f0, 0x20(r3)
/* 80010C14 0000DB54  D0 1E 00 08 */ stfs f0, 8(r30)
/* 80010C18 0000DB58  80 03 00 24 */ lwz r0, 0x24(r3)
/* 80010C1C 0000DB5C  90 1E 00 0C */ stw r0, 0xc(r30)
/* 80010C20 0000DB60  A8 03 00 28 */ lha r0, 0x28(r3)
/* 80010C24 0000DB64  B0 1E 00 10 */ sth r0, 0x10(r30)
/* 80010C28 0000DB68  E0 03 00 2C */ psq_l f0, 44(r3), 0, 0
/* 80010C2C 0000DB6C  F0 1E 00 14 */ psq_st f0, 20(r30), 0, 0
/* 80010C30 0000DB70  C0 03 00 34 */ lfs f0, 0x34(r3)
/* 80010C34 0000DB74  D0 1E 00 1C */ stfs f0, 0x1c(r30)
/* 80010C38 0000DB78  80 7C 00 38 */ lwz r3, 0x38(r28)
/* 80010C3C 0000DB7C  28 03 00 00 */ cmplwi r3, 0
/* 80010C40 0000DB80  41 82 00 1C */ beq lbl_80010C5C
/* 80010C44 0000DB84  7F E4 FB 78 */ mr r4, r31
/* 80010C48 0000DB88  7F C5 F3 78 */ mr r5, r30
/* 80010C4C 0000DB8C  81 83 00 00 */ lwz r12, 0(r3)
/* 80010C50 0000DB90  81 8C 00 08 */ lwz r12, 8(r12)
/* 80010C54 0000DB94  7D 89 03 A6 */ mtctr r12
/* 80010C58 0000DB98  4E 80 04 21 */ bctrl
lbl_80010C5C:
/* 80010C5C 0000DB9C  A8 7E 00 0C */ lha r3, 0xc(r30)
/* 80010C60 0000DBA0  A8 9E 00 0E */ lha r4, 0xe(r30)
/* 80010C64 0000DBA4  A8 BE 00 10 */ lha r5, 0x10(r30)
/* 80010C68 0000DBA8  7F A6 EB 78 */ mr r6, r29
/* 80010C6C 0000DBAC  48 32 8C 0D */ bl JMAEulerToQuat
/* 80010C70 0000DBB0  7F C3 F3 78 */ mr r3, r30
/* 80010C74 0000DBB4  48 31 E3 49 */ bl J3DMtxCalcCalcTransformMaya_NS_calcTransform
/* 80010C78 0000DBB8  48 00 01 B0 */ b lbl_80010E28
lbl_80010C7C:
/* 80010C7C 0000DBBC  C0 3C 00 28 */ lfs f1, 0x28(r28)
/* 80010C80 0000DBC0  C0 02 81 18 */ lfs f0, lbl_80451B18-_SDA2_BASE_(r2)
/* 80010C84 0000DBC4  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 80010C88 0000DBC8  4C 41 13 82 */ cror 2, 1, 2
/* 80010C8C 0000DBCC  41 82 00 14 */ beq lbl_80010CA0
/* 80010C90 0000DBD0  28 03 00 00 */ cmplwi r3, 0
/* 80010C94 0000DBD4  41 82 00 0C */ beq lbl_80010CA0
/* 80010C98 0000DBD8  28 04 00 00 */ cmplwi r4, 0
/* 80010C9C 0000DBDC  40 82 00 58 */ bne lbl_80010CF4
lbl_80010CA0:
/* 80010CA0 0000DBE0  7F 83 E3 78 */ mr r3, r28
/* 80010CA4 0000DBE4  7F E4 FB 78 */ mr r4, r31
/* 80010CA8 0000DBE8  7F C5 F3 78 */ mr r5, r30
/* 80010CAC 0000DBEC  48 00 05 A5 */ bl mDoExt_McaMorfSO_NS_getTransform
/* 80010CB0 0000DBF0  80 7C 00 38 */ lwz r3, 0x38(r28)
/* 80010CB4 0000DBF4  28 03 00 00 */ cmplwi r3, 0
/* 80010CB8 0000DBF8  41 82 00 1C */ beq lbl_80010CD4
/* 80010CBC 0000DBFC  7F E4 FB 78 */ mr r4, r31
/* 80010CC0 0000DC00  7F C5 F3 78 */ mr r5, r30
/* 80010CC4 0000DC04  81 83 00 00 */ lwz r12, 0(r3)
/* 80010CC8 0000DC08  81 8C 00 08 */ lwz r12, 8(r12)
/* 80010CCC 0000DC0C  7D 89 03 A6 */ mtctr r12
/* 80010CD0 0000DC10  4E 80 04 21 */ bctrl
lbl_80010CD4:
/* 80010CD4 0000DC14  A8 7E 00 0C */ lha r3, 0xc(r30)
/* 80010CD8 0000DC18  A8 9E 00 0E */ lha r4, 0xe(r30)
/* 80010CDC 0000DC1C  A8 BE 00 10 */ lha r5, 0x10(r30)
/* 80010CE0 0000DC20  7F A6 EB 78 */ mr r6, r29
/* 80010CE4 0000DC24  48 32 8B 95 */ bl JMAEulerToQuat
/* 80010CE8 0000DC28  7F C3 F3 78 */ mr r3, r30
/* 80010CEC 0000DC2C  48 31 E2 D1 */ bl J3DMtxCalcCalcTransformMaya_NS_calcTransform
/* 80010CF0 0000DC30  48 00 01 38 */ b lbl_80010E28
lbl_80010CF4:
/* 80010CF4 0000DC34  88 1C 00 55 */ lbz r0, 0x55(r28)
/* 80010CF8 0000DC38  28 00 00 00 */ cmplwi r0, 0
/* 80010CFC 0000DC3C  41 82 00 0C */ beq lbl_80010D08
/* 80010D00 0000DC40  FF E0 00 90 */ fmr f31, f0
/* 80010D04 0000DC44  48 00 00 14 */ b lbl_80010D18
lbl_80010D08:
/* 80010D08 0000DC48  C0 5C 00 2C */ lfs f2, 0x2c(r28)
/* 80010D0C 0000DC4C  EC 21 10 28 */ fsubs f1, f1, f2
/* 80010D10 0000DC50  EC 00 10 28 */ fsubs f0, f0, f2
/* 80010D14 0000DC54  EF E1 00 24 */ fdivs f31, f1, f0
lbl_80010D18:
/* 80010D18 0000DC58  C0 02 81 18 */ lfs f0, lbl_80451B18-_SDA2_BASE_(r2)
/* 80010D1C 0000DC5C  EF C0 F8 28 */ fsubs f30, f0, f31
/* 80010D20 0000DC60  7F 83 E3 78 */ mr r3, r28
/* 80010D24 0000DC64  7F E4 FB 78 */ mr r4, r31
/* 80010D28 0000DC68  38 A1 00 28 */ addi r5, r1, 0x28
/* 80010D2C 0000DC6C  48 00 05 25 */ bl mDoExt_McaMorfSO_NS_getTransform
/* 80010D30 0000DC70  80 7C 00 38 */ lwz r3, 0x38(r28)
/* 80010D34 0000DC74  28 03 00 00 */ cmplwi r3, 0
/* 80010D38 0000DC78  41 82 00 1C */ beq lbl_80010D54
/* 80010D3C 0000DC7C  7F E4 FB 78 */ mr r4, r31
/* 80010D40 0000DC80  38 A1 00 28 */ addi r5, r1, 0x28
/* 80010D44 0000DC84  81 83 00 00 */ lwz r12, 0(r3)
/* 80010D48 0000DC88  81 8C 00 08 */ lwz r12, 8(r12)
/* 80010D4C 0000DC8C  7D 89 03 A6 */ mtctr r12
/* 80010D50 0000DC90  4E 80 04 21 */ bctrl
lbl_80010D54:
/* 80010D54 0000DC94  A8 61 00 34 */ lha r3, 0x34(r1)
/* 80010D58 0000DC98  A8 81 00 36 */ lha r4, 0x36(r1)
/* 80010D5C 0000DC9C  A8 A1 00 38 */ lha r5, 0x38(r1)
/* 80010D60 0000DCA0  38 C1 00 08 */ addi r6, r1, 8
/* 80010D64 0000DCA4  48 32 8B 15 */ bl JMAEulerToQuat
/* 80010D68 0000DCA8  7F A3 EB 78 */ mr r3, r29
/* 80010D6C 0000DCAC  38 81 00 08 */ addi r4, r1, 8
/* 80010D70 0000DCB0  FC 20 F8 90 */ fmr f1, f31
/* 80010D74 0000DCB4  7F A5 EB 78 */ mr r5, r29
/* 80010D78 0000DCB8  48 32 8B C1 */ bl JMAQuatLerp
/* 80010D7C 0000DCBC  38 61 00 68 */ addi r3, r1, 0x68
/* 80010D80 0000DCC0  7F A4 EB 78 */ mr r4, r29
/* 80010D84 0000DCC4  48 33 5C 65 */ bl PSMTXQuat
/* 80010D88 0000DCC8  C0 1E 00 14 */ lfs f0, 0x14(r30)
/* 80010D8C 0000DCCC  EC 20 07 B2 */ fmuls f1, f0, f30
/* 80010D90 0000DCD0  C0 01 00 3C */ lfs f0, 0x3c(r1)
/* 80010D94 0000DCD4  EC 00 07 F2 */ fmuls f0, f0, f31
/* 80010D98 0000DCD8  EC 01 00 2A */ fadds f0, f1, f0
/* 80010D9C 0000DCDC  D0 1E 00 14 */ stfs f0, 0x14(r30)
/* 80010DA0 0000DCE0  C0 1E 00 18 */ lfs f0, 0x18(r30)
/* 80010DA4 0000DCE4  EC 20 07 B2 */ fmuls f1, f0, f30
/* 80010DA8 0000DCE8  C0 01 00 40 */ lfs f0, 0x40(r1)
/* 80010DAC 0000DCEC  EC 00 07 F2 */ fmuls f0, f0, f31
/* 80010DB0 0000DCF0  EC 01 00 2A */ fadds f0, f1, f0
/* 80010DB4 0000DCF4  D0 1E 00 18 */ stfs f0, 0x18(r30)
/* 80010DB8 0000DCF8  C0 1E 00 1C */ lfs f0, 0x1c(r30)
/* 80010DBC 0000DCFC  EC 20 07 B2 */ fmuls f1, f0, f30
/* 80010DC0 0000DD00  C0 01 00 44 */ lfs f0, 0x44(r1)
/* 80010DC4 0000DD04  EC 00 07 F2 */ fmuls f0, f0, f31
/* 80010DC8 0000DD08  EC 01 00 2A */ fadds f0, f1, f0
/* 80010DCC 0000DD0C  D0 1E 00 1C */ stfs f0, 0x1c(r30)
/* 80010DD0 0000DD10  C0 1E 00 00 */ lfs f0, 0(r30)
/* 80010DD4 0000DD14  EC 20 07 B2 */ fmuls f1, f0, f30
/* 80010DD8 0000DD18  C0 01 00 28 */ lfs f0, 0x28(r1)
/* 80010DDC 0000DD1C  EC 00 07 F2 */ fmuls f0, f0, f31
/* 80010DE0 0000DD20  EC 01 00 2A */ fadds f0, f1, f0
/* 80010DE4 0000DD24  D0 1E 00 00 */ stfs f0, 0(r30)
/* 80010DE8 0000DD28  C0 1E 00 04 */ lfs f0, 4(r30)
/* 80010DEC 0000DD2C  EC 20 07 B2 */ fmuls f1, f0, f30
/* 80010DF0 0000DD30  C0 01 00 2C */ lfs f0, 0x2c(r1)
/* 80010DF4 0000DD34  EC 00 07 F2 */ fmuls f0, f0, f31
/* 80010DF8 0000DD38  EC 01 00 2A */ fadds f0, f1, f0
/* 80010DFC 0000DD3C  D0 1E 00 04 */ stfs f0, 4(r30)
/* 80010E00 0000DD40  C0 1E 00 08 */ lfs f0, 8(r30)
/* 80010E04 0000DD44  EC 20 07 B2 */ fmuls f1, f0, f30
/* 80010E08 0000DD48  C0 01 00 30 */ lfs f0, 0x30(r1)
/* 80010E0C 0000DD4C  EC 00 07 F2 */ fmuls f0, f0, f31
/* 80010E10 0000DD50  EC 01 00 2A */ fadds f0, f1, f0
/* 80010E14 0000DD54  D0 1E 00 08 */ stfs f0, 8(r30)
/* 80010E18 0000DD58  38 61 00 68 */ addi r3, r1, 0x68
/* 80010E1C 0000DD5C  7F C4 F3 78 */ mr r4, r30
/* 80010E20 0000DD60  7F E5 FB 78 */ mr r5, r31
/* 80010E24 0000DD64  4B FF C2 89 */ bl mDoMtx_stack_c_NS_dtor_X1_
lbl_80010E28:
/* 80010E28 0000DD68  80 7C 00 3C */ lwz r3, 0x3c(r28)
/* 80010E2C 0000DD6C  28 03 00 00 */ cmplwi r3, 0
/* 80010E30 0000DD70  41 82 00 18 */ beq lbl_80010E48
/* 80010E34 0000DD74  7F E4 FB 78 */ mr r4, r31
/* 80010E38 0000DD78  81 83 00 00 */ lwz r12, 0(r3)
/* 80010E3C 0000DD7C  81 8C 00 08 */ lwz r12, 8(r12)
/* 80010E40 0000DD80  7D 89 03 A6 */ mtctr r12
/* 80010E44 0000DD84  4E 80 04 21 */ bctrl
lbl_80010E48:
/* 80010E48 0000DD88  E3 E1 00 C8 */ psq_l f31, 200(r1), 0, 0
/* 80010E4C 0000DD8C  CB E1 00 C0 */ lfd f31, 0xc0(r1)
/* 80010E50 0000DD90  E3 C1 00 B8 */ psq_l f30, 184(r1), 0, 0
/* 80010E54 0000DD94  CB C1 00 B0 */ lfd f30, 0xb0(r1)
/* 80010E58 0000DD98  39 61 00 B0 */ addi r11, r1, 0xb0
/* 80010E5C 0000DD9C  48 35 13 C9 */ bl _restgpr_28
/* 80010E60 0000DDA0  80 01 00 D4 */ lwz r0, 0xd4(r1)
/* 80010E64 0000DDA4  7C 08 03 A6 */ mtlr r0
/* 80010E68 0000DDA8  38 21 00 D0 */ addi r1, r1, 0xd0
/* 80010E6C 0000DDAC  4E 80 00 20 */ blr
