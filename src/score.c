#include "score.h"



void init_score(Score* s)
{
    s->p1_score = 0;
    s->p2_score = 0;
}


void handle_score(Score* s, Ball* b)
{
    if (b->pos.x < 0){
        s->p2_score++;
        reset_ball(b);
    }else if (b->pos.x > GetScreenWidth()){
        s->p1_score++;
        reset_ball(b);
    }
    
}
void draw_score(Score* s)
{
    const int fontSize = 20;
    const int posX = 375;
    const int posY = 60;
    const Color color = WHITE;

    DrawText(
        TextFormat("%d : %d", s->p1_score, s->p2_score),
        posX,
        posY,
        fontSize,
        WHITE
    );
}
