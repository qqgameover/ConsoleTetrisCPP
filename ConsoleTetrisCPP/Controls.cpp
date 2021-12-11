#include "Controls.h"
#include <iostream>

position Controls::HandleInput() 
{
    if(_kbhit())
    {
        switch(_getch())
        {
            case 'A':
                std::cout << "Hei";
                return {1, 0};
            case 'B':
                return {1, 0};
            case 'C':
                return {1, 1};
            case 'D':
                return {1, -1};
            default: return { 1, 0 };;
        }
    }
    return {1, 0};
}
