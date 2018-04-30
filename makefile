list:src/list.cpp
	g++ -c src/list.cpp -o obj/list.o
	g++ -o list obj/list.o

clean:
	rm -f obj/list.o list
