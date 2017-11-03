
output: giftlist.o classdef.o
	g++ giftlist.o classdef.o -o run

giftlist.o: giftlist.cpp
	g++ -c -std=c++0x giftlist.cpp

classdef.o: classdef.cpp classdef.h
	g++ -c -std=c++0x classdef.cpp

clean:
	rm *.o run
