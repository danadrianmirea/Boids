#pragma once
#include "raylib.h"

typedef struct Boid {
    Vector2 origin;
    float rotation;
    Vector2* positions;
    Vector2 velocity;
    double lastUpdate;
} Boid;

Boid* newBoid(Vector2 origin, Vector2 velocity, float rotation);
void updateBoid(Boid* boid, Boid** flock, int flockSize);
void rotateBoid(Boid* boid, float theta);
void drawBoid(Boid* boid);
