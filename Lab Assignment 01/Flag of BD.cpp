//coordinates from figma
#include<iostream>
#include<graphics.h>

int main()
{
    initwindow(700, 450, "Flag of BD", 300, 200);

    setcolor(COLOR(0, 106, 78));
    setfillstyle(SOLID_FILL, COLOR(0, 106, 78));
    bar(50, 45, 650, 405);
//    floodfill(51, 46, COLOR(0, 106, 78));

    setcolor(COLOR(244, 42, 65));
    setfillstyle(SOLID_FILL, COLOR(244, 42, 65));
    circle(320, 225, 120);
    floodfill(320, 225, COLOR(244, 42, 65));
    
    //freeze window
    std::cin.get();
}
