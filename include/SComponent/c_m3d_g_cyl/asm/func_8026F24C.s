/* 8026F24C 0026C18C  C0 23 00 00 */ lfs f1, 0(r3)
/* 8026F250 0026C190  C0 03 00 0C */ lfs f0, 0xc(r3)
/* 8026F254 0026C194  EC 01 00 28 */ fsubs f0, f1, f0
/* 8026F258 0026C198  D0 04 00 00 */ stfs f0, 0(r4)
/* 8026F25C 0026C19C  C0 03 00 04 */ lfs f0, 4(r3)
/* 8026F260 0026C1A0  D0 04 00 04 */ stfs f0, 4(r4)
/* 8026F264 0026C1A4  C0 23 00 08 */ lfs f1, 8(r3)
/* 8026F268 0026C1A8  C0 03 00 0C */ lfs f0, 0xc(r3)
/* 8026F26C 0026C1AC  EC 01 00 28 */ fsubs f0, f1, f0
/* 8026F270 0026C1B0  D0 04 00 08 */ stfs f0, 8(r4)
/* 8026F274 0026C1B4  C0 23 00 00 */ lfs f1, 0(r3)
/* 8026F278 0026C1B8  C0 03 00 0C */ lfs f0, 0xc(r3)
/* 8026F27C 0026C1BC  EC 01 00 2A */ fadds f0, f1, f0
/* 8026F280 0026C1C0  D0 05 00 00 */ stfs f0, 0(r5)
/* 8026F284 0026C1C4  C0 23 00 04 */ lfs f1, 4(r3)
/* 8026F288 0026C1C8  C0 03 00 10 */ lfs f0, 0x10(r3)
/* 8026F28C 0026C1CC  EC 01 00 2A */ fadds f0, f1, f0
/* 8026F290 0026C1D0  D0 05 00 04 */ stfs f0, 4(r5)
/* 8026F294 0026C1D4  C0 23 00 08 */ lfs f1, 8(r3)
/* 8026F298 0026C1D8  C0 03 00 0C */ lfs f0, 0xc(r3)
/* 8026F29C 0026C1DC  EC 01 00 2A */ fadds f0, f1, f0
/* 8026F2A0 0026C1E0  D0 05 00 08 */ stfs f0, 8(r5)
/* 8026F2A4 0026C1E4  4E 80 00 20 */ blr