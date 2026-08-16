#include "raylib.h"
#include "ball.h"
#include "scene.h"
#include "collision.h"
#include "player.h"

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 800;
const char* WINDOW_TITLE = "BALL GAME";
const int FPS = 300;
const Color BG_COLOR = BLACK;

const int BALL_SIZE = 20;
const Color BALL_COLOR = RED; 
const Vector2 INITIAL_POS = {200, 200};

int main(void)
{
    // SetConfigFlags(FLAG_WINDOW_RESIZABLE); 
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);
    SetTargetFPS(FPS);


    Ball ball;
    init_ball(&ball, INITIAL_POS, BALL_SIZE, BALL_COLOR);

    Scene scene;
    init_scene(&scene);

    Player p1;
    Player p2;

    init_player(&p1, PLAYER_ONE, GREEN);
    init_player(&p2, PLAYER_TWO, GREEN);


    while (!WindowShouldClose())
    {

        update_ball(&ball);
        update_scene(&scene);

        update_player(&p1);
        update_player(&p2);

        handle_ball_panel_collision(&scene, &ball);
        
        handle_ball_player_collision(&p1, &ball);
        handle_ball_player_collision(&p2, &ball);


        BeginDrawing();
            ClearBackground(BG_COLOR);

            draw_ball(&ball);
            draw_scene(&scene);

            draw_player(&p1);
            draw_player(&p2);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
