include $(PROJECT_PATH)/config.mk

SRC=$(wildcard *.c)
OBJ=$(patsubst %.c, %.o, $(SRC))

all: $(OBJ)

*.o: *.c
	$(CC) -c $< $(CFLAGS) -o $@

clean:
	rm -rf $(OBJ)
	


