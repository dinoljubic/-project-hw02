include config.mk

PROJECT_PATH=$(shell pwd)
export PROJECT_PATH

SORCS=$(PROJECT_PATH)/src
MAINS=$(PROJECT_PATH)/tst
EXECS=$(PROJECT_PATH)/exe



.SECONDARY:

all: mains
	#to be added

mains: sources
	$(foreach main, $(MAINS), $(MAKE) -C $(main) all &&) 		true
	
sources: $(PATHS)
	$(foreach path,$(SORCS),$(MAKE) -C $(path) &&) true

clean:
	$(foreach path,$(SORCS) $(MAINS),$(MAKE) -C $(path) 		clean &&) true
	rm -rf exe/*.elf

run:	all
	
	
	
