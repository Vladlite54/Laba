all : main

build : main

debug : main

main : main.o SPString.o StatString.o stack.o MyString.o 
	g++ Source.o SPString.o StatString.o stack.o MyString.o -o main

main.o : Source.cpp
	g++ -Wall -c -g Source.cpp

SPString.o :
	g++ -Wall -c -g SPString.cpp

StatString.o :
	g++ -Wall -c -g StatString.cpp

stack.o :
	g++ -Wall -c -g stack.cpp

MyString.o : MyString.cpp
	g++ -Wall -c -g MyString.cpp

clean : 
	rm -rf *.o main