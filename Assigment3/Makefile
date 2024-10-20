prog: transformer.o create.o inventory.o main.o battleground.o
	g++ main.cpp transformer.cpp create.cpp inventory.cpp battleground.cpp -o test
transformer.o:
	g++ -c transformer.cpp
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
