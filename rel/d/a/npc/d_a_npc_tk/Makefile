#
# Generated By: dol2asm
#

M370_TARGET := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_tk.plf
M370_LDSCRIPT := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_tk.lcf
M370_MAP := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_tk.map

M370_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/npc/d_a_npc_tk/d_a_npc_tk.cpp \

M370_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/npc/d_a_npc_tk/d_a_npc_tk.o \

M370_LIBS := \

M370_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M370_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M370_LDSCRIPT) \
	-unused -map $(M370_MAP) \
	-w off \

$(M370_TARGET): $(M370_O_FILES) $(M370_LIBS)
	@echo [370] creating $(M370_TARGET)
	@echo $(M370_LIBS) $(M370_O_FILES) > build/M370_ofiles
	@python3 tools/lcf.py rel 370 --output $(M370_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M370_LDFLAGS) -o $(M370_TARGET) @build/M370_ofiles

$(BUILD_DIR)/rel/d/a/npc/d_a_npc_tk/%.o: rel/d/a/npc/d_a_npc_tk/%.cpp $(BUILD_DIR)/rel/d/a/npc/d_a_npc_tk/%.d
	@echo [370] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M370_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M370_D_FILES := $(M370_O_FILES:.o=.d)
$(M370_D_FILES):
include $(wildcard $(M370_D_FILES))
endif


