#include <stdio.h>

enum PLAYER_DIRECTIONS
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

struct PlayerCoord
{
    int x;
    int y;
};

struct Player
{
    int playerHealth;
    int playerScore;
    enum PLAYER_DIRECTIONS playerDir;
    struct PlayerCoord playerCoordinate;
};
