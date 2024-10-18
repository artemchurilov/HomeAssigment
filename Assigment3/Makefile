prog: main.o transformer.o create.o
	g++ main.cpp transformer.cpp create.cpp -o test
main.o: main.cpp
	g++ -c main.cpp
transformer.o:
	g++ -c transformer.cpp
create.o:
	g++ -c create.cpp
clean:
	rm -f *o
cleanall: clean
	rm -f test
