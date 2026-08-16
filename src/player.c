#include "player.h"

void init_player(Player *p, PlayerNum num, Color color)
{
    p->color = color;
    p->width = 10.0f;
    p->margin = 10.0f;
    p->player_num = num;

    float x;

    if (num == PLAYER_ONE)
    {
        x = p->margin;
    }
    else
    {
        x = (float)GetScreenWidth() - p->width - p->margin;
    }

    p->rec = (Rectangle){
        x,
        100.0f,
        p->width,
        400
    };
}

void update_player(Player *p)
{
    const float dt = GetFrameTime();
    const int PLAYER_SPEED = 600;
    const int VERTCAL_MARGIN = 30;

    bool should_move_up = IsKeyDown(KEY_UP) && p->player_num == PLAYER_TWO || IsKeyDown(KEY_W) && p->player_num == PLAYER_ONE;
    bool should_move_down = IsKeyDown(KEY_DOWN) && p->player_num == PLAYER_TWO || IsKeyDown(KEY_S) && p->player_num == PLAYER_ONE;



    if (should_move_up){
        p->rec.y -= PLAYER_SPEED * dt;
        if (p->rec.y < VERTCAL_MARGIN){
            p->rec.y += 10;
        }
        
    }
    if (should_move_down){
        p->rec.y += PLAYER_SPEED * dt;
        if (p->rec.y + p->rec.height > GetScreenHeight() - VERTCAL_MARGIN){
            p->rec.y -= 10;
        }
    }

}

void draw_player(Player *p)
{
    DrawRectangleRec(p->rec, p->color);
}