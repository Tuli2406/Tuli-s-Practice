#compiler
CC=g++
c=gcc
FLAGS=-wall -wextra -g -std=c++11

#source file and output
SRC1=setCount.cpp 
OUT1=setCount
SRC2=stupid2.cpp
OUT2=stupid2
SRC3=x1.c
OUT3=x1

run1:$(OUT1)
	./$(OUT1)

run2:$(out2)
	./$(out2)

clean:
	rm -f $:(OUT1)
	rm -f $(OUT2)
