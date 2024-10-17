prog: main.o transformer.o
	g++ main.cpp transformer.cpp -o test
main.o: main.cpp
	g++ -c main.cpp
transformer.o:
	g++ -c transformer.cpp
clean:
	rm -f *o
cleanall: clean
	rm -f test
