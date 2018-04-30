list:list.cpp
	g++ -c list.cpp -o list.o
	g++ -o list list.o

clean:
	rm -f list.o list
