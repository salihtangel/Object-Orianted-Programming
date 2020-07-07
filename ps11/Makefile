all:
	g++ 1.cpp -o run

do: main.o class.o
	g++ main.o Balrogs.o Deamons.o Creature.o Human.o Elf.o Cyberdemon.o	-o run

issue.o: main.cpp
	g++ -c main.cpp

class.o: Balrogs.cpp Balrogs.h
	g++ -c Balrogs.cpp Deamons.cpp Human.cpp Creature.cpp Elf.cpp Cyberdemon.cpp
delete:
	rm -rf 1.cpp
segment:
	valgrind -v ./run
