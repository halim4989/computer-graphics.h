#include<graphics.h>
#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    initwindow(800,600);
    POINT CursorPosition;

    while(1)
    {
        GetCursorPos(&CursorPosition);

         ScreenToClient(GetForegroundWindow(), &CursorPosition);

         cout << "x: " << CursorPosition.x << " y: " << CursorPosition.y << endl;



//        cout << CursorPosition.x << endl;
//        cout << CursorPosition.y << endl;

        if(GetAsyncKeyState(VK_LCONTROL)) {
        bar(CursorPosition.x, CursorPosition.y, CursorPosition.x+50,
        CursorPosition.y+50);
        }

        delay(5);
        Sleep(5);
        system("cls");
    }

// while (1)
//    {
//        if (GetAsyncKeyState(VK_RBUTTON))
//        {
//            POINT pnt;
//            GetCursorPos(&pnt);
//            ScreenToClient(GetForegroundWindow(), &pnt);
//
//            cout << "x: " << pnt.x << " y: " << pnt.y << endl;
//
//            delay(5);
//            Sleep(5);
//            system("cls");
//        }
//    }
}
