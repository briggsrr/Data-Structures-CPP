CXX=clang++
# CXX=g++

CXXFLAGS = -std=c++11 -Wall -Wextra -Wno-unused-parameter -Wno-unused-private-field


BINARIES=main

all: ${BINARIES}

main: main.o Linkedlist.o 
	${CXX} $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o