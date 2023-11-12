#include <iostream>
#include "../Header Files/exercises.h"
const int screenWidth = 1280;
const int screenHeight = 720;

//Grade 9, question5
void wrong95()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("This answer is wrong!  :(", 100, 80, 55, BLACK);
        DrawText("Press the space bar key to continue", 50, 200, 55, BLACK);
        DrawText("to the next question ", 50, 280, 55, BLACK);
        //if (IsKeyDown(KEY_SPACE))
            //questions94();
        EndDrawing();
    }


}
void correct95()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("This answer is correct!  :)", 100, 80, 55, BLACK);
        DrawText("Press the space bar key to continue", 50, 200, 55, BLACK);
        DrawText("to the next question ", 50, 280, 55, BLACK);
        //if (IsKeyDown(KEY_SPACE))
            //questions94();
        EndDrawing();
    }


}
void question95()
{

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("Question 5", screenWidth / 2.3 - MeasureText("questions", 30) + 60, 80, 55, BLACK);
        DrawText("Non-membraned organelles are:", 300, 250, 35, BLACK);

        //Question one, option "a"
        Rectangle a5 = { 170, 310, 300, 120 };
        DrawRectangleRec(a5, GRAY);
        DrawText("ribosomes", screenWidth / 4 - MeasureText("9 grade", 20) + 10, 350, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), a5)) {
            DrawRectangleLinesEx(a5, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                correct95();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }

        //Question one, option "b"
        Rectangle b5 = { 750, 310, 300, 120 };
        DrawRectangleRec(b5, GRAY);
        DrawText("mitochondria", 810, 350, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), b5)) {
            DrawRectangleLinesEx(b5, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong95();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }

        //Question one, option "c"
        Rectangle c5 = { 170, 510, 300, 120 };
        DrawRectangleRec(c5, GRAY);
        DrawText("the chloroplasts", screenWidth / 4 - MeasureText("9 grade", 20) - 50, 550, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), c5)) {
            DrawRectangleLinesEx(c5, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong95();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }

        //Question one, option "d"
        Rectangle d5 = { 750, 510, 300, 120 };
        DrawRectangleRec(d5, GRAY);
        DrawText("lysosomes", 830, 550, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), d5)) {
            DrawRectangleLinesEx(d5, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong95();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }



        EndDrawing();
    }
}


//Grade 9, question 4
void wrong94()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("This answer is wrong!  :(", 100, 80, 55, BLACK);
        DrawText("Press the space bar key to continue", 50, 200, 55, BLACK);
        DrawText("to the next question ", 50, 280, 55, BLACK);
        if (IsKeyDown(KEY_SPACE))
            question95();
        EndDrawing();
    }


}
void correct94()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("This answer is correct!  :)", 100, 80, 55, BLACK);
        DrawText("Press the space bar key to continue", 50, 200, 55, BLACK);
        DrawText("to the next question ", 50, 280, 55, BLACK);
        if (IsKeyDown(KEY_SPACE))
            question95();
        EndDrawing();
    }


}
void question94()
{

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("Question 4", screenWidth / 2.3 - MeasureText("questions", 30) + 60, 80, 55, BLACK);
        DrawText("The DNA to RNA genetic information shall be carried out in:", 120, 250, 35, BLACK);

        //Question one, option "a"
        Rectangle a4 = { 170, 310, 300, 120 };
        DrawRectangleRec(a4, GRAY);
        DrawText("translation ", screenWidth / 4 - MeasureText("9 grade", 20), 350, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), a4)) {
            DrawRectangleLinesEx(a4, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                correct94();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }

        //Question one, option "b"
        Rectangle b4 = { 750, 310, 300, 120 };
        DrawRectangleRec(b4, GRAY);
        DrawText("replication", 830, 350, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), b4)) {
            DrawRectangleLinesEx(b4, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong94();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }

        //Question one, option "c"
        Rectangle c4 = { 170, 510, 300, 120 };
        DrawRectangleRec(c4, GRAY);
        DrawText("transcription", screenWidth / 4 - MeasureText("9 grade", 20) - 20, 550, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), c4)) {
            DrawRectangleLinesEx(c4, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong94();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }

        //Question one, option "d"
        Rectangle d4 = { 750, 510, 300, 120 };
        DrawRectangleRec(d4, GRAY);
        DrawText("translocation", 800, 550, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), d4)) {
            DrawRectangleLinesEx(d4, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong94();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }



        EndDrawing();
    }
}



//Grade 9, question 3
void wrong93()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("This answer is wrong!  :(", 100, 80, 55, BLACK);
        DrawText("Press the space bar key to continue", 50, 200, 55, BLACK);
        DrawText("to the next question ", 50, 280, 55, BLACK);
        if (IsKeyDown(KEY_SPACE))
            question94();
        EndDrawing();
    }


}
void correct93()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("This answer is correct!  :)", 100, 80, 55, BLACK);
        DrawText("Press the space bar key to continue", 50, 200, 55, BLACK);
        DrawText("to the next question ", 50, 280, 55, BLACK);
        if (IsKeyDown(KEY_SPACE))
            question94();
        EndDrawing();
    }


}
void question93()
{

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("Question 3", screenWidth / 2.3 - MeasureText("questions", 30) + 60, 80, 55, BLACK);
        DrawText("In meiosis, unlike mitosis, we obtain: ", 320, 250, 35, BLACK);

        //Question one, option "a"
        Rectangle a3 = { 170, 310, 300, 120 };
        DrawRectangleRec(a3, GRAY);
        DrawText("2 haploid cells", screenWidth / 4 - MeasureText("9 grade", 20) - 30, 350, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), a3)) {
            DrawRectangleLinesEx(a3, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong93();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }

        //Question one, option "b"
        Rectangle b3 = { 750, 310, 300, 120 };
        DrawRectangleRec(b3, GRAY);
        DrawText("2 diploid cells", 800, 350, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), b3)) {
            DrawRectangleLinesEx(b3, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong93();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }

        //Question one, option "c"
        Rectangle c3 = { 170, 510, 300, 120 };
        DrawRectangleRec(c3, GRAY);
        DrawText("4 haploid cells", screenWidth / 4 - MeasureText("9 grade", 20) - 30, 550, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), c3)) {
            DrawRectangleLinesEx(c3, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                correct93();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }

        //Question one, option "d"
        Rectangle d3 = { 750, 510, 300, 120 };
        DrawRectangleRec(d3, GRAY);
        DrawText("4 diploid cells", 800, 550, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), d3)) {
            DrawRectangleLinesEx(d3, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong93();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }



        EndDrawing();
    }
}



//Grade 9, question 2
void wrong92()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("This answer is wrong!  :(", 100, 80, 55, BLACK);
        DrawText("Press the space bar key to continue", 50, 200, 55, BLACK);
        DrawText("to the next question ", 50, 280, 55, BLACK);
        if (IsKeyDown(KEY_SPACE))
            question93();
        EndDrawing();
    }


}
void correct92()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("This answer is correct!  :)", 100, 80, 55, BLACK);
        DrawText("Press the space bar key to continue", 50, 200, 55, BLACK);
        DrawText("to the next question ", 50, 280, 55, BLACK);
        if (IsKeyDown(KEY_SPACE))
            question93();
        EndDrawing();
    }


}
void question92()
{

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("Question 2", screenWidth / 2.3 - MeasureText("questions", 30) + 60, 80, 55, BLACK);
        DrawText("What process the replication is?", 320, 250, 35, BLACK);

        //Question one, option "a"
        Rectangle a2 = { 170, 310, 300, 120 };
        DrawRectangleRec(a2, GRAY);
        DrawText("cabolite", screenWidth / 4 - MeasureText("9 grade", 20) + 20, 350, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), a2)) {
            DrawRectangleLinesEx(a2, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong92();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }

        //Question one, option "b"
        Rectangle b2 = { 750, 310, 300, 120 };
        DrawRectangleRec(b2, GRAY);
        DrawText("anabolic ", 850, 350, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), b2)) {
            DrawRectangleLinesEx(b2, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                correct92();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }

        //Question one, option "c"
        Rectangle c2 = { 170, 510, 300, 120 };
        DrawRectangleRec(c2, GRAY);
        DrawText("exothermic ", screenWidth / 4 - MeasureText("9 grade", 20), 550, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), c2)) {
            DrawRectangleLinesEx(c2, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong92();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }

        //Question one, option "d"
        Rectangle d2 = { 750, 510, 300, 120 };
        DrawRectangleRec(d2, GRAY);
        DrawText("oxidation ", 850, 550, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), d2)) {
            DrawRectangleLinesEx(d2, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong92();
                if (IsKeyPressed(KEY_RIGHT))
                {
                    EndDrawing();
                }
            }
        }



        EndDrawing();
    }
}



//Grade 9, question 1
void wrong91()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("This answer is wrong!  :(", 100, 80, 55, BLACK);
        DrawText("Press the space bar key to continue", 50, 200, 55, BLACK);
        DrawText("to the next question ", 50, 280, 55, BLACK);
        if (IsKeyDown(KEY_SPACE))
            question92();
        EndDrawing();
    }
    
    
}
void correct91()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("This answer is correct!  :)", 100, 80, 55, BLACK);
        DrawText("Press the space bar key to continue", 50, 200, 55, BLACK);
        DrawText("to the next question ", 50, 280, 55, BLACK);
        if (IsKeyDown(KEY_SPACE))
            question92();
        EndDrawing();
    }


}
void question91()
{
    
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        DrawText("Question 1", screenWidth / 2.3 - MeasureText("questions", 30) + 60, 80, 55, BLACK);
        DrawText("The function of the nucleus in the cell can be defined as:", 150, 250, 35, BLACK);

        //Question one, option "a"
        Rectangle a1 = { 170, 310, 300, 120 };
        DrawRectangleRec(a1, GRAY);
        DrawText("protective", screenWidth / 4 - MeasureText("9 grade", 20), 350, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), a1)) {
            DrawRectangleLinesEx(a1, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) 
            {
                wrong91();
                if(IsKeyDown(KEY_SPACE))
                    question92();
            }
        }

        //Question one, option "b"
        Rectangle b1 = { 750, 310, 300, 120 };
        DrawRectangleRec(b1, GRAY);
        DrawText("immune", 850, 350, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), b1)) {
            DrawRectangleLinesEx(b1, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong91();
                if (IsKeyDown(KEY_SPACE))
                    question92();
            }
        }

        //Question one, option "c"
        Rectangle c1 = { 170, 510, 300, 120 };
        DrawRectangleRec(c1, GRAY);
        DrawText("structural", screenWidth / 4 - MeasureText("9 grade", 20), 550, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), c1)) {
            DrawRectangleLinesEx(c1, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                wrong91();
                if (IsKeyDown(KEY_SPACE))
                    question92();
            }
        }

        //Question one, option "d"
        Rectangle d1 = { 750, 510, 300, 120 };
        DrawRectangleRec(d1, GRAY);
        DrawText("genetic", 850, 550, 30, BLACK);
        if (CheckCollisionPointRec(GetMousePosition(), d1)) {
            DrawRectangleLinesEx(d1, 2, BLACK);
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                correct91();
                if (IsKeyDown(KEY_SPACE))
                    question92();
            }
        }


        
        EndDrawing();
    }
}