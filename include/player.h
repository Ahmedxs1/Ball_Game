#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"

typedef enum
{
    PLAYER_ONE,
    PLAYER_TWO
} PlayerNum;

typedef struct
{
    Rectangle rec;
    Color color;

    float width;
    float margin;

    PlayerNum player_num;
} Player;



void init_player(Player *p, PlayerNum num, Color color);
void update_player(Player *p);
void draw_player(Player *p);

#endif