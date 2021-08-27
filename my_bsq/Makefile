# The compiler: gcc for C programs
CC = gcc

# Compiler flags:
CFLAGS += -W -g3 -Iinclude -Wall -Wextra  

# headers file
HEADER += include/bsq.h

# All the .o files we need for our executable.
OBJFILES =  obj/bigger_pos.o obj/copy_buff.o obj/draw_square.o obj/littler.o \
obj/main.o obj/map.o obj/my_functions.o obj/numbers_algo.o

# The name of the program that we are producing.
BIN = bin/my_bsq

# When we just run "make", what gets built? 
# This is a "phony" target
# that just tells make what other targets to build.
all: $(BIN)

# The executable
$(BIN): $(OBJFILES)
	$(CC) -o $(BIN) $(OBJFILES) $(CFLAGS)

# A "phony" target to remove built files and backups
obj/%.o: src/%.c 
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) bin/my_bsq bin/*.dSYM obj/*
