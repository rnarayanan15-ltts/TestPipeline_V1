# Makefile
CC = gcc
CFLAGS = -Wall -g
TARGET_DIR = bin
TARGET = $(TARGET_DIR)/output_file
SRCS = main.c Add.c Swap.c

all: $(TARGET_DIR) $(TARGET)

$(TARGET_DIR):
	mkdir -p $(TARGET_DIR)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -rf $(TARGET_DIR)
