myProg: house.o roof.o
	g++ house.cpp roof.cpp -o myProg
	
house.o: house.cpp
	g++ -c house.cpp

roof.o: roof.cpp
	g++ -c house.cpp

clean:
	rm -f *o  myProg
