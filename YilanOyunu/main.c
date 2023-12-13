#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "player.h"

#define ROW 9
#define COL 16

#define RIGHT_ARROW -3277
#define LEFT_ARROW -3275
#define UP_ARROW -3272
#define DOWN_ARROW -3280

enum GRID_STATES
{
    EMPTY = 0,
    PLAYER = 1,
    FOOD = 2
};

int grids[ROW][COL];

struct Player currentPlayer = {};

void SetPlayerPosition(int newX, int newY);
void GameOver(void);
void ResetPlayer(void);
char GetPlayerChar(void);
void UpdateGrid(void);
void ResetGrid(void);
void GenerateFood(void);

int GetPlayerX()
{
    return currentPlayer.playerCoordinate.x;
}

int GetPlayerY()
{
    return currentPlayer.playerCoordinate.y;
}

int main()
{
    system("cls");
    currentPlayer.playerScore = 0;
    currentPlayer.playerHealth = 3;
    StartGame();
}

void StartGame()
{
    ResetPlayer();
    ResetGrid();
    GenerateFood();
    UpdateGrid();
    UpdateGame();
}

void UpdateGame()
{
    while (currentPlayer.playerHealth > 0)
    {
        Sleep(300);

        int dx = currentPlayer.playerDir == RIGHT ? 1 : currentPlayer.playerDir == LEFT ? -1
                                                                                        : 0;
        int dy = currentPlayer.playerDir == UP ? -1 : currentPlayer.playerDir == DOWN ? 1
                                                                                      : 0;

        if (GetPlayerX() == 0 && dx == -1 || GetPlayerX() == COL - 1 && dx == 1 || GetPlayerY() == 0 && dy == -1 || GetPlayerY() == ROW - 1 && dy == 1)
        {
            currentPlayer.playerHealth--;
            StartGame();
            continue;
        }

        if (grids[GetPlayerY() + dy][GetPlayerX() + dx] == FOOD)
        {
            currentPlayer.playerScore++;
            grids[GetPlayerY()][GetPlayerX()] = EMPTY;
            SetPlayerPosition(GetPlayerX() + dx, GetPlayerY() + dy);
            GenerateFood();
            continue;
        }

        grids[GetPlayerY()][GetPlayerX()] = EMPTY;
        SetPlayerPosition(GetPlayerX() + dx, GetPlayerY() + dy);
        UpdateGrid();
    }

    if (currentPlayer.playerHealth == 0)
        GameOver();
}

void GameOver(void)
{
    system("cls");
    printf("Kaybettin, Skorun: %d", currentPlayer.playerScore);
}

void ResetPlayer(void)
{
    currentPlayer.playerDir = RIGHT;
    SetPlayerPosition(0, 0);
}

void SetPlayerPosition(int newX, int newY)
{
    currentPlayer.playerCoordinate.x = newX;
    currentPlayer.playerCoordinate.y = newY;
    grids[newY][newX] = PLAYER;
}

char GetPlayerChar(void)
{
    if (currentPlayer.playerDir == LEFT || currentPlayer.playerDir == RIGHT)
        return '-';

    return '|';
}

void UpdateGrid(void)
{
    system("cls");
    printf("Kalan Can: %d\tSkor: %d\n\n", currentPlayer.playerHealth, currentPlayer.playerScore);

    for (int x = 0; x < ROW; x++)
    {
        for (int y = 0; y < COL; y++)
        {
            char c;

            enum GRID_STATES gridState = grids[x][y];

            switch (gridState)
            {
            case EMPTY:
                c = 'O';
                break;
            case PLAYER:
                c = GetPlayerChar();
                break;
            case FOOD:
                c = '*';
                break;
            }

            printf("%c  ", c);
        }
        printf("\n");
    }
}

void ResetGrid(void)
{
    for (int x = 0; x < ROW; x++)
    {
        for (int y = 0; y < COL; y++)
        {
            grids[x][y] = EMPTY;
        }
    }
}

void GenerateFood(void)
{
    srand(time(NULL));

    int x = (rand() % (ROW - 2)) + 1;
    int y = (rand() % (COL - 2)) + 1;

    grids[x][y] = FOOD;
}