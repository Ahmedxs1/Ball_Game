#ifndef BALL_H
#define BALL_H

#include "raylib.h"

typedef struct {
    Vector2 pos;

    float dir;      

    int speed;
    int size;
    Color color;

    float timer;

} Ball;

void init_ball(Ball* b, int size, int speed, Color color);
void draw_ball(Ball* b);
void update_ball(Ball* b);
void reset_ball(Ball* b);

#endif