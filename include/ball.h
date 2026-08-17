#include "raylib.h"

#ifndef BALL_H
#define BALL_H

typedef struct{
    Vector2 pos;
    Vector2 dir;

    int speed;

    int size;
    Color color;

} Ball;

void init_ball(Ball* b, int size, int speed, Color color);
void draw_ball(Ball* b);
void update_ball(Ball* b);
void reset_ball(Ball* b);

#endif