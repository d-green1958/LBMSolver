# Compiler and flags
CC = g++
CFLAGS = -std=c++11 -Wall -O3

# Directories
SRC_DIR = src
BUILD_DIR = build
BIN_DIR = bin

# Files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))
LIBRARY = $(BIN_DIR)/libLBM.a


# Targets and rules
all: $(LIBRARY)

$(LIBRARY): $(OBJS)
	ar rcs $@ $(OBJS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR):
	mkdir -p $@

$(BUILD_DIR):
	mkdir -p $@

clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

.PHONY: all clean

