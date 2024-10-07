mirror: main.o mirror.o
	g++ main.cpp mirror.cpp -o mirror

main.o: main.cpp
	g++ -c main.cpp
	
mirror.o: mirror.cpp
	g++ -c mirror.cpp
	
clean: 
	rm -f *o

cleanall: clean
	rm -f mirror final.txt
