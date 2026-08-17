#include "ball.h"
#include "scene.h"
#include "player.h"

#ifndef COLLISION_H
#define COLLISION_H

void handle_ball_panel_collision(Scene* s, Ball* b);
void handle_ball_player_collision(Player* p, Ball* b);

#endif 