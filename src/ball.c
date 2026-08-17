#include "ball.h"
#include <stdio.h>
#include <stdlib.h>

int One_or_minusOne();

void init_ball(Ball* b, int size, int speed, Color color)
{
    b->pos = (Vector2){GetScreenWidth()/2, GetScreenHeight()/2};
    b->size = size;
    b->color = color;
    b->dir = (Vector2){One_or_minusOne() , One_or_minusOne()};
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
    b->pos = (Vector2){GetScreenWidth()/2, GetScreenHeight()/2};
    b->dir = (Vector2){One_or_minusOne() , One_or_minusOne()};
    printf("Ball resset");
}


int One_or_minusOne()
{
    return (rand() % 2) ? 1 : -1;
}