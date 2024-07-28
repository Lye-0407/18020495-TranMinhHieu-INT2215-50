all:
	g++ -std=c++11 -Wall -Ilibrary\include -Llibrary\lib -w -o main src\main.cpp  -lmingw32 -lSDL2main -lSDL2