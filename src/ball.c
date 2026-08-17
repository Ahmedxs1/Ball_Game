#include "ball.h"
#include <stdio.h>

void init_ball(Ball* b, Vector2 initial_pos, int size, int speed, Color color)
{
    b->pos = initial_pos;
    b->size = size;
    b->color = color;
    b->dir = (Vector2){1 , 1};
    b->speed = speed;
}

void draw_ball(Ball* b)
{
    DrawCircleV(b->pos, (float)b->size, b->color);
}

void update_ball(Ball* b)
{
    const float dt = GetFrameTime();


    b->pos.x += (b->speed * b->dir.x) * dt;
    b->pos.y += (b->speed * b->dir.y) * dt;
}


void reset_ball(Ball* b)
{
    b->pos = (Vector2){100, 100};
    b->dir = (Vector2){1 , 1};
    printf("Ball resset");
}