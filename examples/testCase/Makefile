# Compiler and flags
CC = g++
CFLAGS = -std=c++11 -Wall -O3

# Directories
SRC_DIR = ../../src          # Relative path to the source directory
BUILD_DIR = ../../build      # Relative path to the build directory
BIN_DIR = ../../bin          # Relative path to the bin directory

# Example source file(s)
SRCS = $(wildcard *.cpp)

# Example executable
EXECUTABLE = $(notdir $(CURDIR))  # Use the directory name as the executable name

# Targets and rules
all: $(EXECUTABLE)

$(EXECUTABLE): $(SRCS) $(LIBRARY)
	$(CC) $(CFLAGS) $^ -o $@ -L$(BIN_DIR) -lLBM -I$(SRC_DIR)

clean:
	rm -f $(EXECUTABLE)

.PHONY: all clean
