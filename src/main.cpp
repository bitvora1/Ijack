#include "Headers/Base/Actor.hpp"
#include"raylib.h"
int main(){

	InitWindow(600, 600, "Game Demo");

	Actor a({300,300,0},{20,20,0});


	float time=GetTime();
	float speed=500.0f;


	SetTargetFPS(120);
    while (!WindowShouldClose()) {

        float deltaTime=GetTime()-time;
        time=GetTime();


        BeginDrawing();


        ClearBackground(BLACK);
        DrawFPS(0,0);


        if(IsKeyDown(KEY_W)) a.Move({0.0,-speed,0.0}, deltaTime);
        if(IsKeyDown(KEY_S)) a.Move({0.0, speed,0.0}, deltaTime);
        if(IsKeyDown(KEY_A)) a.Move({-speed,0.0,0.0}, deltaTime);
        if(IsKeyDown(KEY_D)) a.Move({speed,0.0,0.0}, deltaTime);

        //Draw The Collider of Object
        a.DrawCollider((Color){255,0,0,255});

        EndDrawing();
    }
	return 0;
}
