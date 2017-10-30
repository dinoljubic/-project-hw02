SRC=$(wildcard src/*.c)
TST=$(wildcard tst/*.c)
OSRC=$(patsubst %.c, %.o, $(SRC))
OTST=$(patsubst %.c, %.o, $(TST))
OBJ=$(OSRC) $(OTST)

INC=inc/
CFLAGS=-I $(INC)

EXE=$(patsubst tst/%.c, exe/%.elf, $(TST))

define \n


endef

.SECONDARY:

all: $(EXE)


exe/%.elf: $(OSRC) tst/%.o
	gcc $(OSRC) $(patsubst exe/%.elf, tst/%.o, $@) -o $@ -lm -lfftw3

%.o: %.c
	gcc -c $< $(CFLAGS) -o $@

clean:
	rm -f $(OBJ) exe/*.elf

run:	all
	
	
