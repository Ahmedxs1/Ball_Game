#include "scene.h"

void init_scene(Scene* s)
{
    s->panel_width = 10.0f;

    s->top_panel = (Rectangle){
        0.0f,
        0.0f,
        (float)GetScreenWidth(),
        s->panel_width
    };

    s->bottom_panel = (Rectangle){
        0.0f,
        GetScreenHeight() - s->panel_width,
        (float)GetScreenWidth(),
        s->panel_width
    };

    s->color = WHITE;
}
void update_scene(Scene* s)
{
    s->top_panel.width = (float)GetScreenWidth(); 
    s->bottom_panel.width = (float)GetScreenWidth(); 
}
void draw_scene(Scene* s)
{
    DrawRectangleRec(s->top_panel, s->color);
    DrawRectangleRec(s->bottom_panel, s->color); 
}
