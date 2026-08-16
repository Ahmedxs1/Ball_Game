#include "raylib.h"

#ifndef SCENE_H
#define SCENE_H

typedef struct {
    Rectangle top_panel;
    Rectangle bottom_panel;

    float panel_width;
    Color color;

} Scene;

void init_scene(Scene* s);
void update_scene(Scene* s);
void draw_scene(Scene* s);

#endif