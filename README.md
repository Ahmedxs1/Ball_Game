# Ball Game

A simple Pong-style game written in **C** using **raylib**.

This project is mainly a learning project focused on game programming in C, including:

- Game loops
- Structs and enums
- Modular C code
- Player movement
- Ball movement
- Collision detection
- Frame-independent movement
- Makefiles
- Git and project organization

## Tech Stack

- C
- raylib
- GCC
- Make
- CMake
- Linux

## Project Structure

```text
Ball_Game/
├── build/          # Compiled game
├── build.bash      # Build and run script
├── external/       # External dependencies
│   └── raylib/
├── include/        # Header files
│   ├── ball.h
│   ├── collision.h
│   ├── player.h
│   └── scene.h
├── src/            # Source files
│   ├── ball.c
│   ├── collision.c
│   ├── main.c
│   ├── player.c
│   └── scene.c
└── makefile
