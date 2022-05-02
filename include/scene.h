#ifndef SCENE_H
#define SCENE_H

#include "cube.h"
#include "player.h"
#include "quadTree.h"

#define MAX_PLAYER_COUNT 3
#define MAX_CUBE_COUNT 10

typedef struct Scene {
    Player players[MAX_PLAYER_COUNT];
    Cube playersEnd[MAX_PLAYER_COUNT];
    Cube cubes[MAX_CUBE_COUNT];
    int playersCount;
    int cubesCount;
    int currentPlayerIndex;
    QuadTree quadTree;
} Scene;

Scene createScene();

void addPlayerToScene(Scene* scene, Player player, float x, float y);

void addCubeToScene(Scene* scene, Cube cube);

void switchCurrentPlayer(Scene* scene);

void addQuadTreeToScene(Scene* scene, QuadTree quadTree);

void drawScene(Scene scene);

void drawHUD(Scene scene);

void checkLevelState(Scene scene);

#endif