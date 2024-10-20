prog: transformer.o create.o inventory.o main.o battleground.o
	g++ main.cpp decepticon.cpp transformer.cpp create.cpp player.cpp inventory.cpp battleground.cpp autobot.cpp -o test
transformer.o:
	g++ -c transformer.cpp
autobot.o:
	g++ -c autobot.cpp
decepticon.o:
	g++ -c decepticon.cpp
player.o:
	g++ -c player.cpp
create.o:
	g++ -c create.cpp
inventory.o:
	g++ -c inventory.cpp
main.o:
	g++ -c main.cpp
battleground.o:
	g++ -c battleground.cpp

clean:
	rm -f *o
cleanall: clean
	rm -f test
