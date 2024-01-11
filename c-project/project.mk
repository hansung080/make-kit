# Makefile for each project

include bin.mk

CFLAGS +=
LDFLAGS +=
DY_FLAGS +=
TEST_CFLAGS +=
TEST_LDFLAGS +=
LD_LIBRARY_PATH := $(LD_LIBRARY_PATH)
DYLD_LIBRARY_PATH := $(DYLD_LIBRARY_PATH)

.PHONY: ext
ext:
	@echo "$(call blue,# Extended Variables)"
	@echo "CFLAGS=$(CFLAGS);"
	@echo "LDFLAGS=$(LDFLAGS);"
	@echo "DY_FLAGS=$(DY_FLAGS);"
	@echo "TEST_CFLAGS=$(TEST_CFLAGS);"
	@echo "TEST_LDFLAGS=$(TEST_LDFLAGS);"
	@echo "LD_LIBRARY_PATH=$(LD_LIBRARY_PATH);"
	@echo "DYLD_LIBRARY_PATH=$(DYLD_LIBRARY_PATH);"
