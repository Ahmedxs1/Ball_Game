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
    const int posX = 100;
    const int posY = 100;
    const Color color = WHITE;
    const char* text = "Score";


    DrawText(text, posX, posY, fontSize, color);

}
