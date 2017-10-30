define \n


endef

PREFIX = 

CC = $(PREFIX)gcc

CFLAGS = -Wall

INCLUDE = -I $(PROJECT_PATH)/inc/

CFLAGS += $(INCLUDE)

LFLAGS = -lfftw3 -lm


