#include "baseapp.h"

BaseApp::BaseApp() : X_SIZE(100), Y_SIZE(80)
{
    mChiBuffer = new CHAR_INFO[(X_SIZE+1)*(Y_SIZE+1)];
}

BaseApp::~BaseApp()
{
    delete []mChiBuffer;
}

void BaseApp::setChar(int x, int y, wchar_t c)
{
    mChiBuffer[x + (X_SIZE+1)*y].Char.UnicodeChar = c;
    mChiBuffer[x + (X_SIZE+1)*y].Attributes = FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED;
}
