#include "ball.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

float random_direction(void)
{
    return (float)(rand() % 360);
}

void init_ball(Ball* b, int size, int speed, Color color)
{
    b->pos = (Vector2){
        GetScreenWidth() / 2.0f,
        GetScreenHeight() / 2.0f
    };

    b->size = size;
    b->color = color;
    b->speed = speed;

    b->dir = random_direction();
    b->timer = 0.0f;
}

void draw_ball(Ball* b)
{
    DrawCircleV(b->pos, (float)b->size, b->color);
}

void update_ball(Ball* b)
{
    float dt = GetFrameTime();
    b->timer += dt;

    const int SPEED_INCREMENT = 20;
    const int MAX_SPEED = 1500;

    if (b->timer > 5.0 && b->speed < MAX_SPEED){
        b->speed += SPEED_INCREMENT;
        b->timer = 0.0f;
    }

    float radians = b->dir * DEG2RAD;

    b->pos.x += cosf(radians) * b->speed * dt;
    b->pos.y += sinf(radians) * b->speed * dt;
}

void reset_ball(Ball* b)
{
    b->pos = (Vector2){
        GetScreenWidth() / 2.0f,
        GetScreenHeight() / 2.0f
    };

    b->dir = random_direction();
}