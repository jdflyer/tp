#
# Generate By: dol2asm
# Module: 415
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_bsGate",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_bsGate",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".bss",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80BC27A0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC27CC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC27F8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC2818,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC2834,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC288C,'size':60,'pad':0,'label':"__ct__14daBsGate_HIO_cFv",'name':"__ct__14daBsGate_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC28C8,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC2910,'size':156,'pad':0,'label':"setBaseMtx__10daBsGate_cFv",'name':"setBaseMtx__10daBsGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC29AC,'size':108,'pad':0,'label':"CreateHeap__10daBsGate_cFv",'name':"CreateHeap__10daBsGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC2A18,'size':340,'pad':0,'label':"create__10daBsGate_cFv",'name':"create__10daBsGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC2B6C,'size':80,'pad':0,'label':"Execute__10daBsGate_cFPPA3_A4_f",'name':"Execute__10daBsGate_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC2BBC,'size':264,'pad':0,'label':"moveGate__10daBsGate_cFv",'name':"moveGate__10daBsGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC2CC4,'size':12,'pad':0,'label':"init_modeWait__10daBsGate_cFv",'name':"init_modeWait__10daBsGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC2CD0,'size':4,'pad':0,'label':"modeWait__10daBsGate_cFv",'name':"modeWait__10daBsGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BC2CD4,'size':12,'pad':0,'label':"init_modeOpen__10daBsGate_cFv",'name':"init_modeOpen__10daBsGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC2CE0,'size':340,'pad':0,'label':"modeOpen__10daBsGate_cFv",'name':"modeOpen__10daBsGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC2E34,'size':12,'pad':0,'label':"init_modeClose__10daBsGate_cFv",'name':"init_modeClose__10daBsGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC2E40,'size':340,'pad':0,'label':"modeClose__10daBsGate_cFv",'name':"modeClose__10daBsGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC2F94,'size':164,'pad':0,'label':"Draw__10daBsGate_cFv",'name':"Draw__10daBsGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC3038,'size':48,'pad':0,'label':"Delete__10daBsGate_cFv",'name':"Delete__10daBsGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC3068,'size':44,'pad':0,'label':"daBsGate_Draw__FP10daBsGate_c",'name':"daBsGate_Draw__FP10daBsGate_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC3094,'size':32,'pad':0,'label':"daBsGate_Execute__FP10daBsGate_c",'name':"daBsGate_Execute__FP10daBsGate_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC30B4,'size':32,'pad':0,'label':"daBsGate_Delete__FP10daBsGate_c",'name':"daBsGate_Delete__FP10daBsGate_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC30D4,'size':32,'pad':0,'label':"daBsGate_Create__FP10fopAc_ac_c",'name':"daBsGate_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC30F4,'size':92,'pad':0,'label':"__dt__14daBsGate_HIO_cFv",'name':"__dt__14daBsGate_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC3150,'size':60,'pad':0,'label':"__sinit_d_a_obj_bsGate_cpp",'name':"__sinit_d_a_obj_bsGate_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80BC318C,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BC3194,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BC31A0,'size':4,'pad':0,'label':"lit_3625",'name':"@3625",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BC31A4,'size':4,'pad':0,'label':"lit_3626",'name':"@3626",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BC31A8,'size':4,'pad':0,'label':"lit_3647",'name':"@3647",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC31AC,'size':4,'pad':0,'label':"lit_3710",'name':"@3710",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BC31B0,'size':4,'pad':0,'label':"lit_3783",'name':"@3783",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BC31B4,'size':4,'pad':0,'label':"lit_3784",'name':"@3784",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BC31B8,'size':4,'pad':0,'label':"lit_3785",'name':"@3785",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BC31BC,'size':4,'pad':0,'label':"lit_3786",'name':"@3786",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BC31C0,'size':4,'pad':0,'label':"lit_3820",'name':"@3820",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BC31C4,'size':8,'pad':0,'label':"d_a_obj_bsGate__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80BC31CC,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC31D8,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC31EC,'size':12,'pad':0,'label':"lit_3724",'name':"@3724",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC31F8,'size':12,'pad':0,'label':"lit_3725",'name':"@3725",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC3204,'size':12,'pad':0,'label':"lit_3726",'name':"@3726",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC3210,'size':36,'pad':0,'label':"mode_proc",'name':"mode_proc$3723",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC3234,'size':32,'pad':0,'label':"l_daBsGate_Method",'name':"l_daBsGate_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC3254,'size':48,'pad':0,'label':"g_profile_Obj_BsGate",'name':"g_profile_Obj_BsGate",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC3284,'size':40,'pad':0,'label':"__vt__10daBsGate_c",'name':"__vt__10daBsGate_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BC32AC,'size':12,'pad':0,'label':"__vt__14daBsGate_HIO_c",'name':"__vt__14daBsGate_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BC32B8,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BC32C8,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC32D0,'size':12,'pad':0,'label':"lit_3619",'name':"@3619",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC32DC,'size':16,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC32EC,'size':4,'pad':0,'label':"data_80BC32EC",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daBsGate_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__10daBsGate_cFv":7,
	"CreateHeap__10daBsGate_cFv":8,
	"create__10daBsGate_cFv":9,
	"Execute__10daBsGate_cFPPA3_A4_f":10,
	"moveGate__10daBsGate_cFv":11,
	"init_modeWait__10daBsGate_cFv":12,
	"modeWait__10daBsGate_cFv":13,
	"init_modeOpen__10daBsGate_cFv":14,
	"modeOpen__10daBsGate_cFv":15,
	"init_modeClose__10daBsGate_cFv":16,
	"modeClose__10daBsGate_cFv":17,
	"Draw__10daBsGate_cFv":18,
	"Delete__10daBsGate_cFv":19,
	"daBsGate_Draw__FP10daBsGate_c":20,
	"daBsGate_Execute__FP10daBsGate_c":21,
	"daBsGate_Delete__FP10daBsGate_c":22,
	"daBsGate_Create__FP10fopAc_ac_c":23,
	"__dt__14daBsGate_HIO_cFv":24,
	"__sinit_d_a_obj_bsGate_cpp":25,
	"_ctors":26,
	"_dtors":27,
	"lit_3625":28,
	"lit_3626":29,
	"lit_3647":30,
	"lit_3710":31,
	"lit_3783":32,
	"lit_3784":33,
	"lit_3785":34,
	"lit_3786":35,
	"lit_3820":36,
	"d_a_obj_bsGate__stringBase0":37,
	"cNullVec__6Z2Calc":38,
	"lit_1787":39,
	"lit_3724":40,
	"lit_3725":41,
	"lit_3726":42,
	"mode_proc":43,
	"l_daBsGate_Method":44,
	"g_profile_Obj_BsGate":45,
	"__vt__10daBsGate_c":46,
	"__vt__14daBsGate_HIO_c":47,
	"__vt__14mDoHIO_entry_c":48,
	"__global_destructor_chain":49,
	"lit_3619":50,
	"l_HIO":51,
	"data_80BC32EC":52,
}

