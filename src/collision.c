#include "collision.h"
#include <math.h>
#include "raylib.h"

void handle_ball_panel_collision(Scene *s, Ball *b)
{
    // Top panel
    if (CheckCollisionCircleRec(b->pos, b->size, s->top_panel))
    {
        b->pos.y = s->top_panel.y + s->top_panel.height + b->size;

        // Reflect vertically
        b->dir = 360.0f - b->dir;
    }

    // Bottom panel
    if (CheckCollisionCircleRec(b->pos, b->size, s->bottom_panel))
    {
        b->pos.y = s->bottom_panel.y - b->size;

        // Reflect vertically
        b->dir = 360.0f - b->dir;
    }
}


void handle_ball_player_collision(Player* p, Ball* b)
{
    if (!CheckCollisionCircleRec(b->pos, b->size, p->rec))
        return;

    if (p->player_num == PLAYER_ONE)
    {
        // Move ball outside paddle
        b->pos.x = p->rec.x + p->rec.width + b->size;

        // Reflect horizontally
        b->dir = 180.0f - b->dir;
    }

    else if (p->player_num == PLAYER_TWO)
    {
        // Move ball outside paddle
        b->pos.x = p->rec.x - b->size;

        // Reflect horizontally
        b->dir = 180.0f - b->dir;
    }

    // Keep angle between 0 and 360
    if (b->dir < 0)
        b->dir += 360.0f;

    if (b->dir >= 360.0f)
        b->dir -= 360.0f;
}