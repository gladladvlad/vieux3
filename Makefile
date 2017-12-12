OBJS = main.cpp init.h init.cpp map.h map.cpp tile.h tile.cpp object.h object.cpp

CC = g++

COMPILER_FLAGS = -Wall -fexceptions -g -std=c++14 -lSDL2 -lSDL2_image

OUTPUT = run

all : $(OBJS)
	 $(CC) $(COMPILER_FLAGS) $(LINKER_FLAGS) $(OBJS) -o $(OUTPUT)
