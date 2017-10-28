
output: giftlist.o classdef.o
	g++ giftlist.o classdef.o -o run

giftlist.o: giftlist.cpp
	g++ -c giftlist.cpp

classdef.o: classdef.cpp classdef.h
	g++ -c classdef.cpp

clean:
	rm *.o run
