#include "printwall.h"

PrintWall::PrintWall()
{
    mPlayFieldX = 16;
    mPlayFiledY = 20;
}

int PrintWall::getPlayFieldX() const
{
    return mPlayFieldX;
}

int PrintWall::getPlayFieldY() const
{
    return mPlayFiledY;
}

void PrintWall::setPlayFieldX(int newPlayFieldX)
{
    mPlayFieldX = newPlayFieldX;
}

void PrintWall::setWalls()
{
    for (int x = 0; x <= X_SIZE; x++)
        setChar(x, 0, CHAR_SIDE);

    for (int x = 0; x <= X_SIZE; x++)
        setChar(x, mPlayFieldX, CHAR_SIDE);

    for (int x = 0; x <= X_SIZE; x++)
        setChar(x, Y_SIZE, CHAR_SIDE);

    for (int y = 0; y <= Y_SIZE; y++)
        setChar(0, y, CHAR_SIDE);

    for (int y = 0; y <= mPlayFiledY; y++)
        setChar(mPlayFieldX, y, CHAR_SIDE);

    for (int y = 0; y <= Y_SIZE; y++)
        setChar(X_SIZE, y, CHAR_SIDE);
}

void PrintWall::setPlayFiledY(int newPlayFiledY)
{
    mPlayFiledY = newPlayFiledY;
}

