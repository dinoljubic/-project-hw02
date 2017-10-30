SRC=$(wildcard src/*.c)
TST=$(wildcard tst/*.c)
OSRC=$(patsubst %.c, %.o, $(SRC))
OTST=$(patsubst %.c, %.o, $(TST))
OBJ=$(OSRC) $(OTST)

INC=inc/
CFLAGS=-I $(INC)

EXE=$(patsubst tst/%.c, exe/%.elf, $(TST))

.SECONDARY:

all: $(EXE)


%.elf: $(OSRC) tst/%.o
	gcc $(OSRC) $(patsubst %.elf, tst/%.o, $@) -o exe/$@ -lm -lfftw3

%.o: %.c
	gcc -c $< $(CFLAGS) -o $@

clean:
	rm -f $(OBJ) $(EXE)

run:	all
	
	
