
#include "./include/logic.h"
#include "./include/sprite.h"
#include "./include/config.h"
#include <raylib.h>
#include <time.h>

void updateCurrentTime(short* hour, short* min, short* sec)
{
    // Get the current system time
    time_t now = time(NULL);
    struct tm* local = localtime(&now);
    // Syncronize the hand rotation to the system time
    *hour = (short) local->tm_hour;
    *min = (short) local->tm_min;
    *sec = (short) local->tm_sec;
}

// void processInput();
void update(Sprite* faceSpr, Sprite* handSpr)
{
    short hours = 0, minutes = 0, seconds = 0;
    updateCurrentTime(&hours, &minutes, &seconds);
    // rotate seconds hand in sync with frame timing
    handSpr[0].rotation = (float) hours * 30.0f;
    handSpr[1].rotation = (float) minutes * 6.0f;
    handSpr[2].rotation = (float) seconds * 6.0f;
}
void render(Sprite* faceSpr, Sprite* handSpr)
{
    BeginDrawing();
        ClearBackground(BLUE);
        drawFaceSprite(faceSpr);
        for (int i = 0; i < HAND_COUNT; i++)
        {
            drawRotatedHandSprite(&handSpr[i]);
        }
        DrawFPS(10, 10);
    EndDrawing();

}
