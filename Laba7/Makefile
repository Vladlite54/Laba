all : main

build : main

debug : main

main : main.o MyString.o 
	g++ Source.o MyString.o -o main

main.o : Source.cpp
	g++ -Wall -c -g Source.cpp

MyString.o : MyString.cpp
	g++ -Wall -c -g MyString.cpp

clean : 
	rm -rf *.o main