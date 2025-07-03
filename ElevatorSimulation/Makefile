# Makefile for Elevator Simulation

CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = elevator
SRC = elevator.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
