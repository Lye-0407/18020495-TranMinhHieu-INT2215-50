
# g++ -std=c++11 -Wall -Ilibrary\include -Llibrary\lib -w src\main.cpp  -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -o main

CXX = g++

CXXFLAGS = -std=c++11 -Wall -Ilibrary\include

LDFLAGS = -Llibrary\lib -w 
LDLIBS = -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf

TARGET = main

SRCS = src/main.cpp src/ball.cpp src/entity.cpp src/hole.cpp src/renderwindow.cpp src/tile.cpp

OBJS = $(SRCS)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS) $(LDLIBS)

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)