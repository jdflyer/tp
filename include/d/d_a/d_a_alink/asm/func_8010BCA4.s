/* 8010BCA4 00108BE4  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 8010BCA8 00108BE8  7C 08 02 A6 */ mflr r0
/* 8010BCAC 00108BEC  90 01 00 24 */ stw r0, 0x24(r1)
/* 8010BCB0 00108BF0  DB E1 00 10 */ stfd f31, 0x10(r1)
/* 8010BCB4 00108BF4  F3 E1 00 18 */ psq_st f31, 24(r1), 0, 0
/* 8010BCB8 00108BF8  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8010BCBC 00108BFC  7C 7F 1B 78 */ mr r31, r3
/* 8010BCC0 00108C00  4B FF D2 A5 */ bl daAlink_c_NS_cancelHookshotMove
/* 8010BCC4 00108C04  7F E3 FB 78 */ mr r3, r31
/* 8010BCC8 00108C08  38 80 00 00 */ li r4, 0
/* 8010BCCC 00108C0C  4B FA E4 05 */ bl daAlink_c_NS_checkNextAction
/* 8010BCD0 00108C10  2C 03 00 00 */ cmpwi r3, 0
/* 8010BCD4 00108C14  40 82 00 9C */ bne lbl_8010BD70
/* 8010BCD8 00108C18  C3 E2 92 BC */ lfs f31, lbl_80452CBC-_SDA2_BASE_(r2)
/* 8010BCDC 00108C1C  7F E3 FB 78 */ mr r3, r31
/* 8010BCE0 00108C20  4B FA 7C 25 */ bl daAlink_c_NS_checkZeroSpeedF
/* 8010BCE4 00108C24  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8010BCE8 00108C28  41 82 00 34 */ beq lbl_8010BD1C
/* 8010BCEC 00108C2C  80 1F 31 A0 */ lwz r0, 0x31a0(r31)
/* 8010BCF0 00108C30  60 00 00 01 */ ori r0, r0, 1
/* 8010BCF4 00108C34  90 1F 31 A0 */ stw r0, 0x31a0(r31)
/* 8010BCF8 00108C38  88 1F 2F 98 */ lbz r0, 0x2f98(r31)
/* 8010BCFC 00108C3C  28 00 00 02 */ cmplwi r0, 2
/* 8010BD00 00108C40  41 82 00 28 */ beq lbl_8010BD28
/* 8010BD04 00108C44  38 00 00 02 */ li r0, 2
/* 8010BD08 00108C48  98 1F 2F 98 */ stb r0, 0x2f98(r31)
/* 8010BD0C 00108C4C  3C 60 80 39 */ lis r3, lbl_8038D664@ha
/* 8010BD10 00108C50  38 63 D6 64 */ addi r3, r3, lbl_8038D664@l
/* 8010BD14 00108C54  C3 E3 00 18 */ lfs f31, 0x18(r3)
/* 8010BD18 00108C58  48 00 00 10 */ b lbl_8010BD28
lbl_8010BD1C:
/* 8010BD1C 00108C5C  80 1F 31 A0 */ lwz r0, 0x31a0(r31)
/* 8010BD20 00108C60  54 00 00 3C */ rlwinm r0, r0, 0, 0, 0x1e
/* 8010BD24 00108C64  90 1F 31 A0 */ stw r0, 0x31a0(r31)
lbl_8010BD28:
/* 8010BD28 00108C68  7F E3 FB 78 */ mr r3, r31
/* 8010BD2C 00108C6C  4B FF CC ED */ bl daAlink_c_NS_checkHookshotWait
/* 8010BD30 00108C70  2C 03 00 00 */ cmpwi r3, 0
/* 8010BD34 00108C74  41 82 00 20 */ beq lbl_8010BD54
/* 8010BD38 00108C78  7F E3 FB 78 */ mr r3, r31
/* 8010BD3C 00108C7C  FC 20 F8 90 */ fmr f1, f31
/* 8010BD40 00108C80  4B FA 2D 31 */ bl daAlink_c_NS_setBlendAtnMoveAnime
/* 8010BD44 00108C84  7F E3 FB 78 */ mr r3, r31
/* 8010BD48 00108C88  38 80 00 00 */ li r4, 0
/* 8010BD4C 00108C8C  4B FA F5 65 */ bl daAlink_c_NS_setBodyAngleXReadyAnime
/* 8010BD50 00108C90  48 00 00 20 */ b lbl_8010BD70
lbl_8010BD54:
/* 8010BD54 00108C94  7F E3 FB 78 */ mr r3, r31
/* 8010BD58 00108C98  4B FF CB 71 */ bl daAlink_c_NS_checkChaseHookshot
/* 8010BD5C 00108C9C  2C 03 00 00 */ cmpwi r3, 0
/* 8010BD60 00108CA0  41 82 00 10 */ beq lbl_8010BD70
/* 8010BD64 00108CA4  7F E3 FB 78 */ mr r3, r31
/* 8010BD68 00108CA8  38 80 00 00 */ li r4, 0
/* 8010BD6C 00108CAC  4B FA F5 45 */ bl daAlink_c_NS_setBodyAngleXReadyAnime
lbl_8010BD70:
/* 8010BD70 00108CB0  38 60 00 01 */ li r3, 1
/* 8010BD74 00108CB4  E3 E1 00 18 */ psq_l f31, 24(r1), 0, 0
/* 8010BD78 00108CB8  CB E1 00 10 */ lfd f31, 0x10(r1)
/* 8010BD7C 00108CBC  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8010BD80 00108CC0  80 01 00 24 */ lwz r0, 0x24(r1)
/* 8010BD84 00108CC4  7C 08 03 A6 */ mtlr r0
/* 8010BD88 00108CC8  38 21 00 20 */ addi r1, r1, 0x20
/* 8010BD8C 00108CCC  4E 80 00 20 */ blr
