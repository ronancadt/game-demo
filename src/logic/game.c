#include "game.h"

void moveHero(Hero* hero, int dx, int dy) {
    hero->x += dx;
    hero->y += dy;
}
