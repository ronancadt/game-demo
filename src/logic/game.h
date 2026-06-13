#ifndef GAME_H
#define GAME_H

typedef enum {TREE, ROAD, SAND} CellType;

typedef struct {
    CellType type;
    int value;
} Cell;

typedef struct {
    Cell cells[50][50];
} Board;

typedef struct {
    int x;
    int y;
} Hero;

void moveHero(Hero* hero);


#endif
