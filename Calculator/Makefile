# Makefile for Command-Line Calculator

CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = calculator
SRC = calculator.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
