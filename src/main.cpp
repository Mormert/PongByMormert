#include "raylib.h"

int main(int argc, char* argv[])
{

	int screenWidth = 800;
	int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "Pong by Mormert in C++");

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{

		BeginDrawing();

		ClearBackground(RAYWHITE);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}