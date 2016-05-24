all : bin/constructivo

bin/constructivo: obj/main.o obj/clases.o
	g++ -o bin/constructivo obj/main.o obj/clases.o

obj/main.o : src/main.cpp include/clases.h
	g++ -c -I./include -o obj/main.o src/main.cpp

obj/clases.o : src/clases.cpp include/clases.h
	g++ -c -I./include -o obj/clases.o src/clases.cpp
