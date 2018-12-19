all: calc main mLib arrays functions pointers class objectFunctions inheritance

main: main.o
	g++ main.o -o run

main.o: main.cpp
	g++ -c main.cpp

calc: calc.o
	g++ calc.o -o calc

calc.o: calc.cpp calc.h
	g++ -c calc.cpp

mLib: MadLib.o
	g++ MadLib.o -o mLib

MadLib.o: MadLib.cpp
	g++ -c MadLib.cpp

arrays: arrays.o
	g++ arrays.o -o arrays

arrays.o: arrays.cpp
	g++ -c arrays.cpp	

functions: functions.o
	g++ functions.o -o functions

functions.o: functions.cpp functions.h
	g++ -c functions.cpp

pointers: pointers.o
	g++ pointers.o -o pointers

pointers.o: pointers.cpp pointers.h
	g++ -c pointers.cpp
	
class: class.o
	g++ class.o -o class

class.o: class.cpp class.h
	g++ -c class.cpp

objectFunctions: objectFunctions.o
	g++ objectFunctions.o -o objectFunctions

objectFunctions.o: objectFunctions.cpp objectFunctions.h
	g++ -c objectFunctions.cpp

inheritance: inheritance.o
	g++ inheritance.o -o inheritance

inheritance.o: inheritance.cpp inheritance.h
	g++ -c inheritance.cpp

clean:
	rm *.o run calc mLib arrays functions pointers class objectFunctions inheritance