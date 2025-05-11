#include "Headers/Base/Actor.hpp"
#include "Headers/Character/Character.hpp"
#include"raylib.h"
int main(){

	InitWindow(600, 600, "Game Demo");

	Character chr1=Character({300.0f,400.0f,0.0f},{50.0f,50.0f,50.0f},"sprites/zfr.jpg");


	float time=GetTime();
	float speed=500.0f;


	SetTargetFPS(120);
    while (!WindowShouldClose()) {

        float deltaTime=GetTime()-time;
        time=GetTime();


        BeginDrawing();


        ClearBackground(BLACK);
        DrawFPS(0,0);


        if(IsKeyDown(KEY_W)) chr1.Move({0.0,-speed,0.0}, deltaTime);
        if(IsKeyDown(KEY_S)) chr1.Move({0.0, speed,0.0}, deltaTime);
        if(IsKeyDown(KEY_A)) chr1.Move({-speed,0.0,0.0}, deltaTime);
        if(IsKeyDown(KEY_D)) chr1.Move({speed,0.0,0.0}, deltaTime);


        chr1.DrawCharacter();

        EndDrawing();
    }
	return 0;
}
