# @file Makefile
# @author Isaac McKnew and Jose Jaime
# @date 2026-04-13
# @brief Makefile for Deque Toolkit
# Makefile for compiling the Deque Toolkit project

# Compiler
CC = g++

# Target Executable Name
TARGET = test

# Compile with all error and warnings
CFLAGS = -c -Wall -Wextra

# Default Target
all: $(TARGET)

# Link all object files into the final executable
$(TARGET): main.o deque.o
	$(CC) -o $(TARGET) main.o deque.o

# Compile main.cpp into main.o
main.o: main.cpp deque.h
	$(CC) $(CFLAGS) main.cpp

# Compile deque.cpp into deque.h
deque.o: deque.cpp deque.h
	$(CC) $(CFLAGS) deque.cpp

# Clean up compiled files
clean:
	$(RM) $(TARGET) *.o *~
