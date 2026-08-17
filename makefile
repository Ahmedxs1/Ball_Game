CC = gcc
# CFLAGS = -Wall -Wextra -std=c11 shows warings
TARGET = build/game
INCLUDE = -I./include \
			-I./external/raylib/src

SRC = src/main.c \
		src/ball.c	\
		src/scene.c \
		src/collision.c \
		src/player.c	\
		src/score.c


LDFLAGS = -L./external/raylib/build/raylib
LIBS = -lraylib -lm -lpthread -ldl -lrt -lX11



all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC) $(INCLUDE) $(LDFLAGS) $(LIBS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)