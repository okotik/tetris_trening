#ifndef BASEAPP_H
#define BASEAPP_H

#include <windows.h>

class BaseApp
{
public:
    BaseApp();
    ~BaseApp();

    void setChar(int x, int y, wchar_t c);

    //розміри самої гри
    const int X_SIZE;
    const int Y_SIZE;

private:
    CHAR_INFO *mChiBuffer;
};

#endif // BASEAPP_H
