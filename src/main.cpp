#include <raylib.h>

int main()
{   
    int ballX = 400;
    int ballY = 400;
    Color green = {20, 160, 133, 255};

    InitWindow(800, 800, "My first raylib game");
    SetTargetFPS(60);

    // Game loop
    while(WindowShouldClose() == false)
    {
        // 1. Event handling
        if(IsKeyDown(KEY_D))
        {
            // Right
            ballX += 3;
        }
        else if (IsKeyDown(KEY_A))
        {
            // Left
            ballX -= 3;
        }
        else if (IsKeyDown(KEY_W))
        {
            // Up
            ballY -= 3;
        }
        else if (IsKeyDown(KEY_S))
        {
            // Down
            ballY += 3;
        }
 
        // 2. Updating game position
        


        // 3. Drawing
        BeginDrawing();
        ClearBackground(green);
        DrawCircle(ballX, ballY, 20, WHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}