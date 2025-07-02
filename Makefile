TARGET = dreamClock

CC = gcc
SRC = dreamClock.c sprite.c logic.c sound.c
CFLAGS = -std=c23 -Wall -Werror -Wextra -O2
LDFLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

all:
	$(CC) $(SRC) -o $(TARGET) $(CFLAGS) $(LDFLAGS)
clean:
	rm $(TARGET)
run:
	./$(TARGET)
