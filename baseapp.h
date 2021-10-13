#ifndef BASEAPP_H
#define BASEAPP_H

#include <windows.h>
#include <vector>

class BaseApp
{
public:
    BaseApp();


    //розміри самої гри
    const int X_SIZE;
    const int Y_SIZE;

    void refreshScreen();

protected:
    void setChar(int x, int y, wchar_t c);

private:

    std::vector<CHAR_INFO> mChiBuffer;
    HANDLE mConsole;
    COORD mDwBufferSize;
    COORD mDwBufferCoord;
    SMALL_RECT mLpWriteRegion;
};

#endif // BASEAPP_H
