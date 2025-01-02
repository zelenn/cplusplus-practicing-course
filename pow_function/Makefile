TARGET = pow_function

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

SRC = $(TARGET).cpp
OBJ = $(TARGET).o

all: build run

build: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $<

run:
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)

format:
	clang-format --style=Google -i $(SRC)
