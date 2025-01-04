#ifndef LOGIC_H
#define LOGIC_H
#include <raylib.h>
#include "./sprite.h"

// void processInput();
void updateCurrentTime(short* hour, short* min, short* sec);
void update(Sprite* faceSpr, Sprite* handSpr);
void render(Sprite* faceSpr, Sprite* handSpr);

#endif
