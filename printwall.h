#ifndef PRINTWALL_H
#define PRINTWALL_H

#define CHAR_SIDE '#'

#include "baseapp.h"

class PrintWall : public BaseApp
{
public:
    PrintWall();
    int getPlayFieldX() const;

    int getPlayFieldY() const;

    void setPlayFiledY(int newPlayFiledY);

    void setPlayFieldX(int newPlayFieldX);

    void setWalls();

private:
    int mPlayFieldX;
    int mPlayFiledY;
};

#endif // PRINTWALL_H
