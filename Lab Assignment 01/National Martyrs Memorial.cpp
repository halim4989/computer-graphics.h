//coordinates from figma
#include<iostream>
#include<graphics.h>

int main()
{
    int x = 700, y = 450;
    initwindow(x, y, "National Martyrs Memorial", 300, 200);
    //ground
    line(25, 415, 675, 415);

    //left side from mid to left
    line(310, 415, 350, 23);
    line(271, 415, x - 359, 109);
    line(233, 415, x - 383, 214);
    line(192, 415, x - 412, 284);
    line(154, 415, x - 452, 339);
    line(115, 415, x - 501, 378);
    line(82, 415, x - 559, 403);

    //right side from mid to right
    line(x - 310, 415, 349, 23);
    line(x - 272, 415, 358, 109);
    line(x - 234, 415, 382, 214);
    line(x - 193, 415, 411, 284);
    line(x - 155, 415, 451, 339);
    line(x - 116, 415, 500, 378);
    line(x - 83, 415, 558, 403);

    //freeze window
    std::cin.get();
    return 0;
}



