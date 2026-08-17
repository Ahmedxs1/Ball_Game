#ifndef SCORE_H
#define SCORE_H

#include "ball.h"

typedef struct {
    int p1_score;
    int p2_score;

}Score;

void init_score(Score* s);
void handle_score(Score* s, Ball* b);
void draw_score(Score* s);

#endif