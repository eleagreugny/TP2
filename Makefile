all: Main
Main:Main.o Node.o Vector.o List.o
	g++ Main.o Node.o Vector.o List.o -g -o Main --std=c++11
Main.o: Main.cpp Node.h Vector.h List.h
	g++ -c Main.cpp -o Main.o -g --std=c++11
Node.o: Node.cpp Node.h Vector.h
	g++ -c Node.cpp -o Node.o -g --std=c++11
Vector.o: Vector.cpp Vector.h
	g++ -c Vector.cpp -o Vector.o -g --std=c++11
List.o: List.cpp List.h
	g++ -c List.cpp -o List.o -g --std=c++11

