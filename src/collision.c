#include "collision.h"
#include <stdio.h>
#include "raylib.h"


void handle_ball_panel_collision(Scene *s, Ball *b)
{
    if (CheckCollisionCircleRec(b->pos, b->size, s->top_panel))
    {
        b->pos.y = s->top_panel.y + s->top_panel.height + b->size;
        b->dir.y = 1;
    }

    if (CheckCollisionCircleRec(b->pos, b->size, s->bottom_panel))
    {
        b->pos.y = s->bottom_panel.y - b->size ;
        b->dir.y = -1;
    }
}


void handle_ball_player_collision(Player* p, Ball* b)
{
    if (!CheckCollisionCircleRec(b->pos, b->size, p->rec)) return;

    if (p->player_num == PLAYER_ONE){
        b->dir.x = 1;
    }
    if (p->player_num == PLAYER_TWO){
        b->dir.x = -1;
    }
}