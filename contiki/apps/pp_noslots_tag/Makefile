DEFINES+=PROJECT_CONF_H=\"project-conf.h\"
CONTIKI_PROJECT = pp_noslots_tag

APP_DIR := $(dir $(lastword $(MAKEFILE_LIST)))
TARGETDIRS += ../../../../atum/contiki/platform

all: $(CONTIKI_PROJECT)
# Force build of this every time to pick up common.h dep
.PHONY:	pp_noslots_tag.c

#LDFLAGS += --specs=nano.specs -u _printf_float
LDFLAGS += --specs=nano.specs

### Polypoint common stuff
PROJECTDIRS += $(APP_DIR)../pp_noslots_common
CONTIKI_TARGET_SOURCEFILES += pp_noslots_common.c

### Decawave support
PROJECTDIRS += $(APP_DIR)../../lib/decawave
PROJECTDIRS += $(APP_DIR)../../dev/dw1000
CONTIKI_TARGET_SOURCEFILES += dw1000.c
CONTIKI_TARGET_SOURCEFILES += deca_device.c deca_params_init.c deca_range_tables.c
TARGET_LIBFILES += -lm


CONTIKI = ../../../../contiki
include $(CONTIKI)/Makefile.include
