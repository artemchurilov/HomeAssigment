calc: main.o func.o
	g++ main.cpp func.cpp -o calc

main.o: main.cpp
	g++ -c main.cpp

func.o: func.cpp
	g++ -c func.cpp

clean:
	rm -f *o

cleanall: clean
	rm -f calc
