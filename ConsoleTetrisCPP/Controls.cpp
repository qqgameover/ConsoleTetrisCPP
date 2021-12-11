#include "Controls.h"
#include <iostream>

position Controls::HandleInput(piece &p) 
{
    if(_kbhit()) 
    {
        switch(_getch())
        {
            case 'w':
                p.RotateBlock(p.blockMatrix);
                return {1, 0};
            case 'r':
                return {1, 0};
            case 's':
                return {1, 1};
            case 'a':
                return {1, -1};
            default: return { 1, 0 };
        }
    }
    return {1, 0};
}
