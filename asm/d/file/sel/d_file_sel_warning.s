.include "macros.inc"

.section .text, "ax" # 80191bac


.global dFile_warning_c
dFile_warning_c:
/* 80191BAC 0018EAEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80191BB0 0018EAF0  7C 08 02 A6 */	mflr r0
/* 80191BB4 0018EAF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80191BB8 0018EAF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80191BBC 0018EAFC  7C 7F 1B 78 */	mr r31, r3
/* 80191BC0 0018EB00  3C C0 80 3C */	lis r6, lbl_803BB480@ha
/* 80191BC4 0018EB04  38 06 B4 80 */	addi r0, r6, lbl_803BB480@l
/* 80191BC8 0018EB08  90 03 00 00 */	stw r0, 0(r3)
/* 80191BCC 0018EB0C  3C C0 80 3A */	lis r6, lbl_803A6F88@ha
/* 80191BD0 0018EB10  38 06 6F 88 */	addi r0, r6, lbl_803A6F88@l
/* 80191BD4 0018EB14  90 03 00 08 */	stw r0, 8(r3)
/* 80191BD8 0018EB18  3C C0 80 3C */	lis r6, lbl_803BB44C@ha
/* 80191BDC 0018EB1C  38 06 B4 4C */	addi r0, r6, lbl_803BB44C@l
/* 80191BE0 0018EB20  90 03 00 08 */	stw r0, 8(r3)
/* 80191BE4 0018EB24  90 83 00 04 */	stw r4, 4(r3)
/* 80191BE8 0018EB28  98 A3 00 3E */	stb r5, 0x3e(r3)
/* 80191BEC 0018EB2C  48 00 01 09 */	bl dFile_warning_c_NS_screenSet
/* 80191BF0 0018EB30  38 00 00 00 */	li r0, 0
/* 80191BF4 0018EB34  98 1F 00 18 */	stb r0, 0x18(r31)
/* 80191BF8 0018EB38  C0 02 9F D8 */	lfs f0, lbl_804539D8-_SDA2_BASE_(r2)
/* 80191BFC 0018EB3C  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 80191C00 0018EB40  7F E3 FB 78 */	mr r3, r31
/* 80191C04 0018EB44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80191C08 0018EB48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80191C0C 0018EB4C  7C 08 03 A6 */	mtlr r0
/* 80191C10 0018EB50  38 21 00 10 */	addi r1, r1, 0x10
/* 80191C14 0018EB54  4E 80 00 20 */	blr 
/* 80191C18 0018EB58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80191C1C 0018EB5C  7C 08 02 A6 */	mflr r0
/* 80191C20 0018EB60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80191C24 0018EB64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80191C28 0018EB68  93 C1 00 08 */	stw r30, 8(r1)
/* 80191C2C 0018EB6C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80191C30 0018EB70  7C 9F 23 78 */	mr r31, r4
/* 80191C34 0018EB74  41 82 00 A4 */	beq lbl_80191CD8
/* 80191C38 0018EB78  3C 60 80 3C */	lis r3, lbl_803BB480@ha
/* 80191C3C 0018EB7C  38 03 B4 80 */	addi r0, r3, lbl_803BB480@l
/* 80191C40 0018EB80  90 1E 00 00 */	stw r0, 0(r30)
/* 80191C44 0018EB84  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80191C48 0018EB88  38 80 00 01 */	li r4, 1
/* 80191C4C 0018EB8C  48 0B 80 DD */	bl dMsgString_c_NS_dtor
/* 80191C50 0018EB90  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80191C54 0018EB94  28 03 00 00 */	cmplwi r3, 0
/* 80191C58 0018EB98  41 82 00 18 */	beq lbl_80191C70
/* 80191C5C 0018EB9C  38 80 00 01 */	li r4, 1
/* 80191C60 0018EBA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80191C64 0018EBA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80191C68 0018EBA8  7D 89 03 A6 */	mtctr r12
/* 80191C6C 0018EBAC  4E 80 04 21 */	bctrl 
lbl_80191C70:
/* 80191C70 0018EBB0  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80191C74 0018EBB4  28 03 00 00 */	cmplwi r3, 0
/* 80191C78 0018EBB8  41 82 00 18 */	beq lbl_80191C90
/* 80191C7C 0018EBBC  38 80 00 01 */	li r4, 1
/* 80191C80 0018EBC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80191C84 0018EBC4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80191C88 0018EBC8  7D 89 03 A6 */	mtctr r12
/* 80191C8C 0018EBCC  4E 80 04 21 */	bctrl 
lbl_80191C90:
/* 80191C90 0018EBD0  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 80191C94 0018EBD4  28 03 00 00 */	cmplwi r3, 0
/* 80191C98 0018EBD8  41 82 00 18 */	beq lbl_80191CB0
/* 80191C9C 0018EBDC  38 80 00 01 */	li r4, 1
/* 80191CA0 0018EBE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80191CA4 0018EBE4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80191CA8 0018EBE8  7D 89 03 A6 */	mtctr r12
/* 80191CAC 0018EBEC  4E 80 04 21 */	bctrl 
lbl_80191CB0:
/* 80191CB0 0018EBF0  4B E8 2D 7D */	bl mDoExt_removeMesgFont
/* 80191CB4 0018EBF4  34 1E 00 08 */	addic. r0, r30, 8
/* 80191CB8 0018EBF8  41 82 00 10 */	beq lbl_80191CC8
/* 80191CBC 0018EBFC  3C 60 80 3C */	lis r3, lbl_803BB44C@ha
/* 80191CC0 0018EC00  38 03 B4 4C */	addi r0, r3, lbl_803BB44C@l
/* 80191CC4 0018EC04  90 1E 00 08 */	stw r0, 8(r30)
lbl_80191CC8:
/* 80191CC8 0018EC08  7F E0 07 35 */	extsh. r0, r31
/* 80191CCC 0018EC0C  40 81 00 0C */	ble lbl_80191CD8
/* 80191CD0 0018EC10  7F C3 F3 78 */	mr r3, r30
/* 80191CD4 0018EC14  48 13 D0 69 */	bl __dl__FPv
lbl_80191CD8:
/* 80191CD8 0018EC18  7F C3 F3 78 */	mr r3, r30
/* 80191CDC 0018EC1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80191CE0 0018EC20  83 C1 00 08 */	lwz r30, 8(r1)
/* 80191CE4 0018EC24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80191CE8 0018EC28  7C 08 03 A6 */	mtlr r0
/* 80191CEC 0018EC2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80191CF0 0018EC30  4E 80 00 20 */	blr 

.global dFile_warning_c_NS_screenSet
dFile_warning_c_NS_screenSet:
/* 80191CF4 0018EC34  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80191CF8 0018EC38  7C 08 02 A6 */	mflr r0
/* 80191CFC 0018EC3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80191D00 0018EC40  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80191D04 0018EC44  7C 7F 1B 78 */	mr r31, r3
/* 80191D08 0018EC48  80 62 9F DC */	lwz r3, lbl_804539DC-_SDA2_BASE_(r2)
/* 80191D0C 0018EC4C  80 02 9F E0 */	lwz r0, lbl_804539E0-_SDA2_BASE_(r2)
/* 80191D10 0018EC50  90 61 00 10 */	stw r3, 0x10(r1)
/* 80191D14 0018EC54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80191D18 0018EC58  80 62 9F E4 */	lwz r3, lbl_804539E4-_SDA2_BASE_(r2)
/* 80191D1C 0018EC5C  80 02 9F E8 */	lwz r0, lbl_804539E8-_SDA2_BASE_(r2)
/* 80191D20 0018EC60  90 61 00 08 */	stw r3, 8(r1)
/* 80191D24 0018EC64  90 01 00 0C */	stw r0, 0xc(r1)
/* 80191D28 0018EC68  38 60 01 18 */	li r3, 0x118
/* 80191D2C 0018EC6C  48 13 CF 21 */	bl __nw__FUl
/* 80191D30 0018EC70  7C 60 1B 79 */	or. r0, r3, r3
/* 80191D34 0018EC74  41 82 00 0C */	beq lbl_80191D40
/* 80191D38 0018EC78  48 16 67 61 */	bl __ct__9J2DScreenFv
/* 80191D3C 0018EC7C  7C 60 1B 78 */	mr r0, r3
lbl_80191D40:
/* 80191D40 0018EC80  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80191D44 0018EC84  38 60 00 2C */	li r3, 0x2c
/* 80191D48 0018EC88  48 13 CF 05 */	bl __nw__FUl
/* 80191D4C 0018EC8C  7C 60 1B 79 */	or. r0, r3, r3
/* 80191D50 0018EC90  41 82 00 0C */	beq lbl_80191D5C
/* 80191D54 0018EC94  48 0B 7E CD */	bl dMsgString_c
/* 80191D58 0018EC98  7C 60 1B 78 */	mr r0, r3
lbl_80191D5C:
/* 80191D5C 0018EC9C  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80191D60 0018ECA0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80191D64 0018ECA4  88 1F 00 3E */	lbz r0, 0x3e(r31)
/* 80191D68 0018ECA8  54 00 10 3A */	slwi r0, r0, 2
/* 80191D6C 0018ECAC  38 81 00 10 */	addi r4, r1, 0x10
/* 80191D70 0018ECB0  7C 84 00 2E */	lwzx r4, r4, r0
/* 80191D74 0018ECB4  3C A0 00 10 */	lis r5, 0x10
/* 80191D78 0018ECB8  80 DF 00 04 */	lwz r6, 4(r31)
/* 80191D7C 0018ECBC  48 16 68 CD */	bl J2DScreen_NS_setPriority
/* 80191D80 0018ECC0  88 1F 00 3E */	lbz r0, 0x3e(r31)
/* 80191D84 0018ECC4  54 00 10 3A */	slwi r0, r0, 2
/* 80191D88 0018ECC8  38 61 00 08 */	addi r3, r1, 8
/* 80191D8C 0018ECCC  7C 63 00 2E */	lwzx r3, r3, r0
/* 80191D90 0018ECD0  80 9F 00 04 */	lwz r4, 4(r31)
/* 80191D94 0018ECD4  48 14 24 DD */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 80191D98 0018ECD8  48 17 6C D5 */	bl J2DAnmLoaderDataBase_NS_load
/* 80191D9C 0018ECDC  90 7F 00 24 */	stw r3, 0x24(r31)
/* 80191DA0 0018ECE0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80191DA4 0018ECE4  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80191DA8 0018ECE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80191DAC 0018ECEC  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 80191DB0 0018ECF0  7D 89 03 A6 */	mtctr r12
/* 80191DB4 0018ECF4  4E 80 04 21 */	bctrl 
/* 80191DB8 0018ECF8  C0 02 9F EC */	lfs f0, lbl_804539EC-_SDA2_BASE_(r2)
/* 80191DBC 0018ECFC  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80191DC0 0018ED00  D0 03 00 08 */	stfs f0, 8(r3)
/* 80191DC4 0018ED04  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80191DC8 0018ED08  48 16 78 C9 */	bl J2DScreen_NS_animation
/* 80191DCC 0018ED0C  4B E8 2C 25 */	bl mDoExt_getMesgFont
/* 80191DD0 0018ED10  90 7F 00 10 */	stw r3, 0x10(r31)
/* 80191DD4 0018ED14  38 60 00 6C */	li r3, 0x6c
/* 80191DD8 0018ED18  48 13 CE 75 */	bl __nw__FUl
/* 80191DDC 0018ED1C  7C 60 1B 79 */	or. r0, r3, r3
/* 80191DE0 0018ED20  41 82 00 24 */	beq lbl_80191E04
/* 80191DE4 0018ED24  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 80191DE8 0018ED28  3C A0 6D 5F */	lis r5, 0x6D5F3032@ha
/* 80191DEC 0018ED2C  38 C5 30 32 */	addi r6, r5, 0x6D5F3032@l
/* 80191DF0 0018ED30  38 A0 00 4E */	li r5, 0x4e
/* 80191DF4 0018ED34  38 E0 00 00 */	li r7, 0
/* 80191DF8 0018ED38  39 00 00 00 */	li r8, 0
/* 80191DFC 0018ED3C  48 0C 1B 89 */	bl CPaneMgr_X1_
/* 80191E00 0018ED40  7C 60 1B 78 */	mr r0, r3
lbl_80191E04:
/* 80191E04 0018ED44  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80191E08 0018ED48  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 80191E0C 0018ED4C  80 63 00 04 */	lwz r3, 4(r3)
/* 80191E10 0018ED50  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 80191E14 0018ED54  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 80191E18 0018ED58  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80191E1C 0018ED5C  3C 80 67 5F */	lis r4, 0x675F6A70@ha
/* 80191E20 0018ED60  38 C4 6A 70 */	addi r6, r4, 0x675F6A70@l
/* 80191E24 0018ED64  3C 80 77 5F */	lis r4, 0x775F6D73@ha
/* 80191E28 0018ED68  38 A4 6D 73 */	addi r5, r4, 0x775F6D73@l
/* 80191E2C 0018ED6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80191E30 0018ED70  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80191E34 0018ED74  7D 89 03 A6 */	mtctr r12
/* 80191E38 0018ED78  4E 80 04 21 */	bctrl 
/* 80191E3C 0018ED7C  38 00 00 00 */	li r0, 0
/* 80191E40 0018ED80  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80191E44 0018ED84  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80191E48 0018ED88  3C 80 6F 72 */	lis r4, 0x6F725F32@ha
/* 80191E4C 0018ED8C  38 C4 5F 32 */	addi r6, r4, 0x6F725F32@l
/* 80191E50 0018ED90  3C 80 6D 73 */	lis r4, 0x6D735F66@ha
/* 80191E54 0018ED94  38 A4 5F 66 */	addi r5, r4, 0x6D735F66@l
/* 80191E58 0018ED98  81 83 00 00 */	lwz r12, 0(r3)
/* 80191E5C 0018ED9C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80191E60 0018EDA0  7D 89 03 A6 */	mtctr r12
/* 80191E64 0018EDA4  4E 80 04 21 */	bctrl 
/* 80191E68 0018EDA8  38 00 00 00 */	li r0, 0
/* 80191E6C 0018EDAC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80191E70 0018EDB0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80191E74 0018EDB4  3C 80 6F 72 */	lis r4, 0x6F725F33@ha
/* 80191E78 0018EDB8  38 C4 5F 33 */	addi r6, r4, 0x6F725F33@l
/* 80191E7C 0018EDBC  3C 80 6D 73 */	lis r4, 0x6D735F66@ha
/* 80191E80 0018EDC0  38 A4 5F 66 */	addi r5, r4, 0x6D735F66@l
/* 80191E84 0018EDC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80191E88 0018EDC8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80191E8C 0018EDCC  7D 89 03 A6 */	mtctr r12
/* 80191E90 0018EDD0  4E 80 04 21 */	bctrl 
/* 80191E94 0018EDD4  90 7F 00 20 */	stw r3, 0x20(r31)
/* 80191E98 0018EDD8  38 00 00 01 */	li r0, 1
/* 80191E9C 0018EDDC  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80191EA0 0018EDE0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80191EA4 0018EDE4  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80191EA8 0018EDE8  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 80191EAC 0018EDEC  81 83 00 00 */	lwz r12, 0(r3)
/* 80191EB0 0018EDF0  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 80191EB4 0018EDF4  7D 89 03 A6 */	mtctr r12
/* 80191EB8 0018EDF8  4E 80 04 21 */	bctrl 
/* 80191EBC 0018EDFC  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80191EC0 0018EE00  38 80 02 00 */	li r4, 0x200
/* 80191EC4 0018EE04  3C A0 80 39 */	lis r5, lbl_80394828@ha
/* 80191EC8 0018EE08  38 A5 48 28 */	addi r5, r5, lbl_80394828@l
/* 80191ECC 0018EE0C  38 A5 00 88 */	addi r5, r5, 0x88
/* 80191ED0 0018EE10  4C C6 31 82 */	crclr 6
/* 80191ED4 0018EE14  48 16 E8 79 */	bl J2DTextBox_NS_setString_X1_
/* 80191ED8 0018EE18  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80191EDC 0018EE1C  38 80 00 53 */	li r4, 0x53
/* 80191EE0 0018EE20  80 BF 00 20 */	lwz r5, 0x20(r31)
/* 80191EE4 0018EE24  38 C0 00 00 */	li r6, 0
/* 80191EE8 0018EE28  80 FF 00 10 */	lwz r7, 0x10(r31)
/* 80191EEC 0018EE2C  39 00 00 00 */	li r8, 0
/* 80191EF0 0018EE30  39 20 00 00 */	li r9, 0
/* 80191EF4 0018EE34  81 83 00 00 */	lwz r12, 0(r3)
/* 80191EF8 0018EE38  81 8C 00 08 */	lwz r12, 8(r12)
/* 80191EFC 0018EE3C  7D 89 03 A6 */	mtctr r12
/* 80191F00 0018EE40  4E 80 04 21 */	bctrl 
/* 80191F04 0018EE44  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80191F08 0018EE48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80191F0C 0018EE4C  7C 08 03 A6 */	mtlr r0
/* 80191F10 0018EE50  38 21 00 20 */	addi r1, r1, 0x20
/* 80191F14 0018EE54  4E 80 00 20 */	blr 

.global dFile_warning_c_NS__move
dFile_warning_c_NS__move:
/* 80191F18 0018EE58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80191F1C 0018EE5C  7C 08 02 A6 */	mflr r0
/* 80191F20 0018EE60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80191F24 0018EE64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80191F28 0018EE68  7C 7F 1B 78 */	mr r31, r3
/* 80191F2C 0018EE6C  88 03 00 18 */	lbz r0, 0x18(r3)
/* 80191F30 0018EE70  1C A0 00 0C */	mulli r5, r0, 0xc
/* 80191F34 0018EE74  3C 80 80 3C */	lis r4, lbl_803BB434@ha
/* 80191F38 0018EE78  38 04 B4 34 */	addi r0, r4, lbl_803BB434@l
/* 80191F3C 0018EE7C  7D 80 2A 14 */	add r12, r0, r5
/* 80191F40 0018EE80  48 1D 01 45 */	bl func_80362084
/* 80191F44 0018EE84  60 00 00 00 */	nop 
/* 80191F48 0018EE88  C0 02 9F D8 */	lfs f0, lbl_804539D8-_SDA2_BASE_(r2)
/* 80191F4C 0018EE8C  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 80191F50 0018EE90  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80191F54 0018EE94  41 82 00 28 */	beq lbl_80191F7C
/* 80191F58 0018EE98  C0 1F 00 34 */	lfs f0, 0x34(r31)
/* 80191F5C 0018EE9C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80191F60 0018EEA0  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 80191F64 0018EEA4  80 63 00 04 */	lwz r3, 4(r3)
/* 80191F68 0018EEA8  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 80191F6C 0018EEAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80191F70 0018EEB0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80191F74 0018EEB4  7D 89 03 A6 */	mtctr r12
/* 80191F78 0018EEB8  4E 80 04 21 */	bctrl 
lbl_80191F7C:
/* 80191F7C 0018EEBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80191F80 0018EEC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80191F84 0018EEC4  7C 08 03 A6 */	mtlr r0
/* 80191F88 0018EEC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80191F8C 0018EECC  4E 80 00 20 */	blr 
/* 80191F90 0018EED0  4E 80 00 20 */	blr 
/* 80191F94 0018EED4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80191F98 0018EED8  7C 08 02 A6 */	mflr r0
/* 80191F9C 0018EEDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80191FA0 0018EEE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80191FA4 0018EEE4  7C 7F 1B 78 */	mr r31, r3
/* 80191FA8 0018EEE8  48 00 00 2D */	bl dFile_warning_c_NS_baseMoveAnm
/* 80191FAC 0018EEEC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80191FB0 0018EEF0  28 00 00 01 */	cmplwi r0, 1
/* 80191FB4 0018EEF4  40 82 00 0C */	bne lbl_80191FC0
/* 80191FB8 0018EEF8  38 00 00 00 */	li r0, 0
/* 80191FBC 0018EEFC  98 1F 00 18 */	stb r0, 0x18(r31)
lbl_80191FC0:
/* 80191FC0 0018EF00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80191FC4 0018EF04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80191FC8 0018EF08  7C 08 03 A6 */	mtlr r0
/* 80191FCC 0018EF0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80191FD0 0018EF10  4E 80 00 20 */	blr 

.global dFile_warning_c_NS_baseMoveAnm
dFile_warning_c_NS_baseMoveAnm:
/* 80191FD4 0018EF14  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80191FD8 0018EF18  7C 08 02 A6 */	mflr r0
/* 80191FDC 0018EF1C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80191FE0 0018EF20  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80191FE4 0018EF24  7C 7F 1B 78 */	mr r31, r3
/* 80191FE8 0018EF28  80 83 00 28 */	lwz r4, 0x28(r3)
/* 80191FEC 0018EF2C  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 80191FF0 0018EF30  7C 04 00 00 */	cmpw r4, r0
/* 80191FF4 0018EF34  41 82 00 78 */	beq lbl_8019206C
/* 80191FF8 0018EF38  40 80 00 24 */	bge lbl_8019201C
/* 80191FFC 0018EF3C  38 04 00 02 */	addi r0, r4, 2
/* 80192000 0018EF40  90 1F 00 28 */	stw r0, 0x28(r31)
/* 80192004 0018EF44  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 80192008 0018EF48  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8019200C 0018EF4C  7C 00 18 00 */	cmpw r0, r3
/* 80192010 0018EF50  40 81 00 28 */	ble lbl_80192038
/* 80192014 0018EF54  90 7F 00 28 */	stw r3, 0x28(r31)
/* 80192018 0018EF58  48 00 00 20 */	b lbl_80192038
lbl_8019201C:
/* 8019201C 0018EF5C  38 04 FF FE */	addi r0, r4, -2
/* 80192020 0018EF60  90 1F 00 28 */	stw r0, 0x28(r31)
/* 80192024 0018EF64  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 80192028 0018EF68  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8019202C 0018EF6C  7C 00 18 00 */	cmpw r0, r3
/* 80192030 0018EF70  40 80 00 08 */	bge lbl_80192038
/* 80192034 0018EF74  90 7F 00 28 */	stw r3, 0x28(r31)
lbl_80192038:
/* 80192038 0018EF78  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 8019203C 0018EF7C  C8 22 9F F0 */	lfd f1, lbl_804539F0-_SDA2_BASE_(r2)
/* 80192040 0018EF80  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80192044 0018EF84  90 01 00 0C */	stw r0, 0xc(r1)
/* 80192048 0018EF88  3C 00 43 30 */	lis r0, 0x4330
/* 8019204C 0018EF8C  90 01 00 08 */	stw r0, 8(r1)
/* 80192050 0018EF90  C8 01 00 08 */	lfd f0, 8(r1)
/* 80192054 0018EF94  EC 00 08 28 */	fsubs f0, f0, f1
/* 80192058 0018EF98  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8019205C 0018EF9C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80192060 0018EFA0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80192064 0018EFA4  48 16 76 2D */	bl J2DScreen_NS_animation
/* 80192068 0018EFA8  38 60 00 00 */	li r3, 0
lbl_8019206C:
/* 8019206C 0018EFAC  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 80192070 0018EFB0  80 1F 00 2C */	lwz r0, 0x2c(r31)
/* 80192074 0018EFB4  7C 04 00 00 */	cmpw r4, r0
/* 80192078 0018EFB8  40 82 00 2C */	bne lbl_801920A4
/* 8019207C 0018EFBC  2C 04 0B 2B */	cmpwi r4, 0xb2b
/* 80192080 0018EFC0  40 82 00 10 */	bne lbl_80192090
/* 80192084 0018EFC4  38 00 00 01 */	li r0, 1
/* 80192088 0018EFC8  98 1F 00 3C */	stb r0, 0x3c(r31)
/* 8019208C 0018EFCC  48 00 00 0C */	b lbl_80192098
lbl_80192090:
/* 80192090 0018EFD0  38 00 00 00 */	li r0, 0
/* 80192094 0018EFD4  98 1F 00 3C */	stb r0, 0x3c(r31)
lbl_80192098:
/* 80192098 0018EFD8  38 00 00 01 */	li r0, 1
/* 8019209C 0018EFDC  98 1F 00 3D */	stb r0, 0x3d(r31)
/* 801920A0 0018EFE0  38 60 00 01 */	li r3, 1
lbl_801920A4:
/* 801920A4 0018EFE4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801920A8 0018EFE8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801920AC 0018EFEC  7C 08 03 A6 */	mtlr r0
/* 801920B0 0018EFF0  38 21 00 20 */	addi r1, r1, 0x20
/* 801920B4 0018EFF4  4E 80 00 20 */	blr 

.global dFile_warning_c_NS_openInit
dFile_warning_c_NS_openInit:
/* 801920B8 0018EFF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801920BC 0018EFFC  38 00 0B 21 */	li r0, 0xb21
/* 801920C0 0018F000  90 03 00 28 */	stw r0, 0x28(r3)
/* 801920C4 0018F004  38 00 0B 2B */	li r0, 0xb2b
/* 801920C8 0018F008  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801920CC 0018F00C  80 03 00 28 */	lwz r0, 0x28(r3)
/* 801920D0 0018F010  C8 22 9F F0 */	lfd f1, lbl_804539F0-_SDA2_BASE_(r2)
/* 801920D4 0018F014  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801920D8 0018F018  90 01 00 0C */	stw r0, 0xc(r1)
/* 801920DC 0018F01C  3C 00 43 30 */	lis r0, 0x4330
/* 801920E0 0018F020  90 01 00 08 */	stw r0, 8(r1)
/* 801920E4 0018F024  C8 01 00 08 */	lfd f0, 8(r1)
/* 801920E8 0018F028  EC 00 08 28 */	fsubs f0, f0, f1
/* 801920EC 0018F02C  80 83 00 24 */	lwz r4, 0x24(r3)
/* 801920F0 0018F030  D0 04 00 08 */	stfs f0, 8(r4)
/* 801920F4 0018F034  38 00 00 00 */	li r0, 0
/* 801920F8 0018F038  98 03 00 3D */	stb r0, 0x3d(r3)
/* 801920FC 0018F03C  38 00 00 01 */	li r0, 1
/* 80192100 0018F040  98 03 00 18 */	stb r0, 0x18(r3)
/* 80192104 0018F044  38 21 00 10 */	addi r1, r1, 0x10
/* 80192108 0018F048  4E 80 00 20 */	blr 

.global dFile_warning_c_NS_closeInit
dFile_warning_c_NS_closeInit:
/* 8019210C 0018F04C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80192110 0018F050  38 00 0B 2B */	li r0, 0xb2b
/* 80192114 0018F054  90 03 00 28 */	stw r0, 0x28(r3)
/* 80192118 0018F058  38 00 0B 21 */	li r0, 0xb21
/* 8019211C 0018F05C  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80192120 0018F060  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80192124 0018F064  C8 22 9F F0 */	lfd f1, lbl_804539F0-_SDA2_BASE_(r2)
/* 80192128 0018F068  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8019212C 0018F06C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80192130 0018F070  3C 00 43 30 */	lis r0, 0x4330
/* 80192134 0018F074  90 01 00 08 */	stw r0, 8(r1)
/* 80192138 0018F078  C8 01 00 08 */	lfd f0, 8(r1)
/* 8019213C 0018F07C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80192140 0018F080  80 83 00 24 */	lwz r4, 0x24(r3)
/* 80192144 0018F084  D0 04 00 08 */	stfs f0, 8(r4)
/* 80192148 0018F088  38 00 00 00 */	li r0, 0
/* 8019214C 0018F08C  98 03 00 3D */	stb r0, 0x3d(r3)
/* 80192150 0018F090  38 00 00 01 */	li r0, 1
/* 80192154 0018F094  98 03 00 18 */	stb r0, 0x18(r3)
/* 80192158 0018F098  38 21 00 10 */	addi r1, r1, 0x10
/* 8019215C 0018F09C  4E 80 00 20 */	blr 

.global dFile_warning_c_NS_init
dFile_warning_c_NS_init:
/* 80192160 0018F0A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80192164 0018F0A4  7C 08 02 A6 */	mflr r0
/* 80192168 0018F0A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019216C 0018F0AC  C0 02 9F EC */	lfs f0, lbl_804539EC-_SDA2_BASE_(r2)
/* 80192170 0018F0B0  80 83 00 24 */	lwz r4, 0x24(r3)
/* 80192174 0018F0B4  D0 04 00 08 */	stfs f0, 8(r4)
/* 80192178 0018F0B8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8019217C 0018F0BC  48 16 75 15 */	bl J2DScreen_NS_animation
/* 80192180 0018F0C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80192184 0018F0C4  7C 08 03 A6 */	mtlr r0
/* 80192188 0018F0C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8019218C 0018F0CC  4E 80 00 20 */	blr 

.global dFile_warning_c_NS__draw
dFile_warning_c_NS__draw:
/* 80192190 0018F0D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80192194 0018F0D4  7C 08 02 A6 */	mflr r0
/* 80192198 0018F0D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019219C 0018F0DC  7C 66 1B 78 */	mr r6, r3
/* 801921A0 0018F0E0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 801921A4 0018F0E4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 801921A8 0018F0E8  38 63 5F 64 */	addi r3, r3, 0x5f64
/* 801921AC 0018F0EC  38 83 01 B4 */	addi r4, r3, 0x1b4
/* 801921B0 0018F0F0  38 A3 01 B8 */	addi r5, r3, 0x1b8
/* 801921B4 0018F0F4  38 C6 00 08 */	addi r6, r6, 8
/* 801921B8 0018F0F8  4B EC 45 DD */	bl dDlst_list_c_NS_set
/* 801921BC 0018F0FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801921C0 0018F100  7C 08 03 A6 */	mtlr r0
/* 801921C4 0018F104  38 21 00 10 */	addi r1, r1, 0x10
/* 801921C8 0018F108  4E 80 00 20 */	blr 

.global dFile_warning_c_NS_drawSelf
dFile_warning_c_NS_drawSelf:
/* 801921CC 0018F10C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801921D0 0018F110  7C 08 02 A6 */	mflr r0
/* 801921D4 0018F114  90 01 00 14 */	stw r0, 0x14(r1)
/* 801921D8 0018F118  85 83 00 08 */	lwzu r12, 8(r3)
/* 801921DC 0018F11C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801921E0 0018F120  7D 89 03 A6 */	mtctr r12
/* 801921E4 0018F124  4E 80 04 21 */	bctrl 
/* 801921E8 0018F128  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801921EC 0018F12C  7C 08 03 A6 */	mtlr r0
/* 801921F0 0018F130  38 21 00 10 */	addi r1, r1, 0x10
/* 801921F4 0018F134  4E 80 00 20 */	blr 

.global dFile_warning_c_NS_setText
dFile_warning_c_NS_setText:
/* 801921F8 0018F138  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801921FC 0018F13C  7C 08 02 A6 */	mflr r0
/* 80192200 0018F140  90 01 00 14 */	stw r0, 0x14(r1)
/* 80192204 0018F144  7C 67 1B 78 */	mr r7, r3
/* 80192208 0018F148  80 63 00 14 */	lwz r3, 0x14(r3)
/* 8019220C 0018F14C  80 A7 00 20 */	lwz r5, 0x20(r7)
/* 80192210 0018F150  38 C0 00 00 */	li r6, 0
/* 80192214 0018F154  80 E7 00 10 */	lwz r7, 0x10(r7)
/* 80192218 0018F158  39 00 00 00 */	li r8, 0
/* 8019221C 0018F15C  39 20 00 00 */	li r9, 0
/* 80192220 0018F160  81 83 00 00 */	lwz r12, 0(r3)
/* 80192224 0018F164  81 8C 00 08 */	lwz r12, 8(r12)
/* 80192228 0018F168  7D 89 03 A6 */	mtctr r12
/* 8019222C 0018F16C  4E 80 04 21 */	bctrl 
/* 80192230 0018F170  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80192234 0018F174  7C 08 03 A6 */	mtlr r0
/* 80192238 0018F178  38 21 00 10 */	addi r1, r1, 0x10
/* 8019223C 0018F17C  4E 80 00 20 */	blr 

.global dFile_warning_c_NS_setFontColor
dFile_warning_c_NS_setFontColor:
/* 80192240 0018F180  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80192244 0018F184  7C 08 02 A6 */	mflr r0
/* 80192248 0018F188  90 01 00 34 */	stw r0, 0x34(r1)
/* 8019224C 0018F18C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80192250 0018F190  7C 7F 1B 78 */	mr r31, r3
/* 80192254 0018F194  80 05 00 00 */	lwz r0, 0(r5)
/* 80192258 0018F198  90 01 00 18 */	stw r0, 0x18(r1)
/* 8019225C 0018F19C  80 04 00 00 */	lwz r0, 0(r4)
/* 80192260 0018F1A0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80192264 0018F1A4  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80192268 0018F1A8  38 81 00 1C */	addi r4, r1, 0x1c
/* 8019226C 0018F1AC  38 A1 00 18 */	addi r5, r1, 0x18
/* 80192270 0018F1B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80192274 0018F1B4  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80192278 0018F1B8  7D 89 03 A6 */	mtctr r12
/* 8019227C 0018F1BC  4E 80 04 21 */	bctrl 
/* 80192280 0018F1C0  38 60 00 FF */	li r3, 0xff
/* 80192284 0018F1C4  98 61 00 08 */	stb r3, 8(r1)
/* 80192288 0018F1C8  98 61 00 09 */	stb r3, 9(r1)
/* 8019228C 0018F1CC  98 61 00 0A */	stb r3, 0xa(r1)
/* 80192290 0018F1D0  98 61 00 0B */	stb r3, 0xb(r1)
/* 80192294 0018F1D4  80 01 00 08 */	lwz r0, 8(r1)
/* 80192298 0018F1D8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8019229C 0018F1DC  98 61 00 10 */	stb r3, 0x10(r1)
/* 801922A0 0018F1E0  98 61 00 11 */	stb r3, 0x11(r1)
/* 801922A4 0018F1E4  98 61 00 12 */	stb r3, 0x12(r1)
/* 801922A8 0018F1E8  98 61 00 13 */	stb r3, 0x13(r1)
/* 801922AC 0018F1EC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 801922B0 0018F1F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801922B4 0018F1F4  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 801922B8 0018F1F8  88 01 00 14 */	lbz r0, 0x14(r1)
/* 801922BC 0018F1FC  98 03 01 04 */	stb r0, 0x104(r3)
/* 801922C0 0018F200  88 01 00 15 */	lbz r0, 0x15(r1)
/* 801922C4 0018F204  98 03 01 05 */	stb r0, 0x105(r3)
/* 801922C8 0018F208  88 01 00 16 */	lbz r0, 0x16(r1)
/* 801922CC 0018F20C  98 03 01 06 */	stb r0, 0x106(r3)
/* 801922D0 0018F210  88 01 00 17 */	lbz r0, 0x17(r1)
/* 801922D4 0018F214  98 03 01 07 */	stb r0, 0x107(r3)
/* 801922D8 0018F218  88 01 00 0C */	lbz r0, 0xc(r1)
/* 801922DC 0018F21C  98 03 01 08 */	stb r0, 0x108(r3)
/* 801922E0 0018F220  88 01 00 0D */	lbz r0, 0xd(r1)
/* 801922E4 0018F224  98 03 01 09 */	stb r0, 0x109(r3)
/* 801922E8 0018F228  88 01 00 0E */	lbz r0, 0xe(r1)
/* 801922EC 0018F22C  98 03 01 0A */	stb r0, 0x10a(r3)
/* 801922F0 0018F230  88 01 00 0F */	lbz r0, 0xf(r1)
/* 801922F4 0018F234  98 03 01 0B */	stb r0, 0x10b(r3)
/* 801922F8 0018F238  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801922FC 0018F23C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80192300 0018F240  7C 08 03 A6 */	mtlr r0
/* 80192304 0018F244  38 21 00 30 */	addi r1, r1, 0x30
/* 80192308 0018F248  4E 80 00 20 */	blr 
/* 8019230C 0018F24C  88 04 00 00 */	lbz r0, 0(r4)
/* 80192310 0018F250  98 03 01 2C */	stb r0, 0x12c(r3)
/* 80192314 0018F254  88 04 00 01 */	lbz r0, 1(r4)
/* 80192318 0018F258  98 03 01 2D */	stb r0, 0x12d(r3)
/* 8019231C 0018F25C  88 04 00 02 */	lbz r0, 2(r4)
/* 80192320 0018F260  98 03 01 2E */	stb r0, 0x12e(r3)
/* 80192324 0018F264  88 04 00 03 */	lbz r0, 3(r4)
/* 80192328 0018F268  98 03 01 2F */	stb r0, 0x12f(r3)
/* 8019232C 0018F26C  88 05 00 00 */	lbz r0, 0(r5)
/* 80192330 0018F270  98 03 01 28 */	stb r0, 0x128(r3)
/* 80192334 0018F274  88 05 00 01 */	lbz r0, 1(r5)
/* 80192338 0018F278  98 03 01 29 */	stb r0, 0x129(r3)
/* 8019233C 0018F27C  88 05 00 02 */	lbz r0, 2(r5)
/* 80192340 0018F280  98 03 01 2A */	stb r0, 0x12a(r3)
/* 80192344 0018F284  88 05 00 03 */	lbz r0, 3(r5)
/* 80192348 0018F288  98 03 01 2B */	stb r0, 0x12b(r3)
/* 8019234C 0018F28C  38 60 00 01 */	li r3, 1
/* 80192350 0018F290  4E 80 00 20 */	blr 
/* 80192354 0018F294  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80192358 0018F298  7C 08 02 A6 */	mflr r0
/* 8019235C 0018F29C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80192360 0018F2A0  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 80192364 0018F2A4  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l
/* 80192368 0018F2A8  80 84 5F 50 */	lwz r4, 0x5f50(r4)
/* 8019236C 0018F2AC  80 63 00 04 */	lwz r3, 4(r3)
/* 80192370 0018F2B0  C0 22 9F D8 */	lfs f1, lbl_804539D8-_SDA2_BASE_(r2)
/* 80192374 0018F2B4  FC 40 08 90 */	fmr f2, f1
/* 80192378 0018F2B8  48 16 6B 5D */	bl J2DScreen_NS_draw
/* 8019237C 0018F2BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80192380 0018F2C0  7C 08 03 A6 */	mtlr r0
/* 80192384 0018F2C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80192388 0018F2C8  4E 80 00 20 */	blr 
/* 8019238C 0018F2CC  3C 60 80 3C */	lis r3, lbl_803BB410@ha
/* 80192390 0018F2D0  38 A3 B4 10 */	addi r5, r3, lbl_803BB410@l
/* 80192394 0018F2D4  80 65 00 0C */	lwz r3, 0xc(r5)
/* 80192398 0018F2D8  80 05 00 10 */	lwz r0, 0x10(r5)
/* 8019239C 0018F2DC  90 65 00 24 */	stw r3, 0x24(r5)
/* 801923A0 0018F2E0  90 05 00 28 */	stw r0, 0x28(r5)
/* 801923A4 0018F2E4  80 05 00 14 */	lwz r0, 0x14(r5)
/* 801923A8 0018F2E8  90 05 00 2C */	stw r0, 0x2c(r5)
/* 801923AC 0018F2EC  38 85 00 24 */	addi r4, r5, 0x24
/* 801923B0 0018F2F0  80 65 00 18 */	lwz r3, 0x18(r5)
/* 801923B4 0018F2F4  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 801923B8 0018F2F8  90 64 00 0C */	stw r3, 0xc(r4)
/* 801923BC 0018F2FC  90 04 00 10 */	stw r0, 0x10(r4)
/* 801923C0 0018F300  80 05 00 20 */	lwz r0, 0x20(r5)
/* 801923C4 0018F304  90 04 00 14 */	stw r0, 0x14(r4)
/* 801923C8 0018F308  4E 80 00 20 */	blr 
/* 801923CC 0018F30C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801923D0 0018F310  7C 08 02 A6 */	mflr r0
/* 801923D4 0018F314  90 01 00 14 */	stw r0, 0x14(r1)
/* 801923D8 0018F318  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801923DC 0018F31C  7C 7F 1B 79 */	or. r31, r3, r3
/* 801923E0 0018F320  41 82 00 1C */	beq lbl_801923FC
/* 801923E4 0018F324  3C A0 80 3C */	lis r5, lbl_803BB44C@ha
/* 801923E8 0018F328  38 05 B4 4C */	addi r0, r5, lbl_803BB44C@l
/* 801923EC 0018F32C  90 1F 00 00 */	stw r0, 0(r31)
/* 801923F0 0018F330  7C 80 07 35 */	extsh. r0, r4
/* 801923F4 0018F334  40 81 00 08 */	ble lbl_801923FC
/* 801923F8 0018F338  48 13 C9 45 */	bl __dl__FPv
lbl_801923FC:
/* 801923FC 0018F33C  7F E3 FB 78 */	mr r3, r31
/* 80192400 0018F340  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80192404 0018F344  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80192408 0018F348  7C 08 03 A6 */	mtlr r0
/* 8019240C 0018F34C  38 21 00 10 */	addi r1, r1, 0x10
/* 80192410 0018F350  4E 80 00 20 */	blr 
/* 80192414 0018F354  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80192418 0018F358  7C 08 02 A6 */	mflr r0
/* 8019241C 0018F35C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80192420 0018F360  48 16 5B A5 */	bl J2DPane_NS_setAnimation_X7_
/* 80192424 0018F364  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80192428 0018F368  7C 08 03 A6 */	mtlr r0
/* 8019242C 0018F36C  38 21 00 10 */	addi r1, r1, 0x10
/* 80192430 0018F370  4E 80 00 20 */	blr 

