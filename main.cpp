#include <iostream>
#include "printwall.h"

int main (int argc, char *argv[])
{
    PrintWall printWall;
    if(argc != 3)
    {
        std::cout << "incorect" << std::endl;
        std::cout << "using" << std::endl;
        std::cout << "we use this arguments " << printWall.getPlayFieldX() << " " << printWall.getPlayFieldY() << std::endl;
    }
    else
    {
        printWall.setPlayFieldX(atoi(argv[1]));
        printWall.setPlayFiledY(atoi(argv[2]));
        std::cout << "we use this arguments " << printWall.getPlayFieldX() << " " << printWall.getPlayFieldY() << std::endl;
    }
}
