#include <iostream>
#include "../Header Files/topics.h"

void theTopics()
{
    const int screenWidth = 1280;
    const int screenHeight = 720;
    
    //Categories
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("Choose a category", screenWidth / 2 - MeasureText("Menu\n", 30) - 180, 80, 55, BLACK);

        // Draw the "8 grade" option
        Rectangle eightGrade = { screenWidth / 2 - 150, 420, 300, 120 };
        DrawRectangleRec(eightGrade, GRAY);
        DrawText("8 Grade", screenWidth / 2 - MeasureText("8 Grade", 20), 460, 45, BLACK);



        // Draw the "9 grade" option
        Rectangle ninthgrade = { screenWidth / 2 - 150, 290, 300, 120 };
        DrawRectangleRec(ninthgrade, GRAY);
        DrawText("9 grade", screenWidth / 2 - MeasureText("9 grade", 20), 330, 45, BLACK);

        // Check if the mouse is over the "8 grade" button
        if (CheckCollisionPointRec(GetMousePosition(), eightGrade)) {
            DrawRectangleLinesEx(eightGrade, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
                question81();
                CloseWindow();
            }
        }

        // Check if the mouse is over the "9 grade" button
        if (CheckCollisionPointRec(GetMousePosition(), ninthgrade)) {
            DrawRectangleLinesEx(ninthgrade, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                
                question91();
                CloseWindow();
            }
        }

        EndDrawing();
    }

}