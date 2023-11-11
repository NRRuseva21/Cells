#include <iostream>
#include "../Header Files/menu.h"

void mainMenu()
{
    const int screenWidth = 1280;
    const int screenHeight = 720;
    InitWindow(screenWidth, screenHeight, "Cells");

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        // Draw the menu title
        DrawText("Menu", screenWidth / 2 - MeasureText("Menu", 30) / 1.3, 80, 55, BLACK);

        // Draw the "Play" option
        Rectangle playButton = { screenWidth / 2 - 150, 160, 300, 120 };
        DrawRectangleRec(playButton, GRAY);
        DrawText("Play", screenWidth / 2 - MeasureText("Play", 20), 200, 45, BLACK);



        // Draw the "Exit" option
        Rectangle exitButton = { screenWidth / 2 - 150, 290, 300, 120 };
        DrawRectangleRec(exitButton, GRAY);
        DrawText("Exit", screenWidth / 2 - MeasureText("Exit", 20), 330, 45, BLACK);


        // Check if the mouse is over the "Play" button
        if (CheckCollisionPointRec(GetMousePosition(), playButton)) {
            DrawRectangleLinesEx(playButton, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {

            }
        }

        // Check if the mouse is over the "Exit" button
        if (CheckCollisionPointRec(GetMousePosition(), exitButton)) {
            DrawRectangleLinesEx(exitButton, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) || IsKeyPressed(KEY_ESCAPE))
            {
                CloseWindow();
            }
        }

        EndDrawing();
    }
}