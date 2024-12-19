#include<iostream>
#include<graphics.h>

int main()
{
    initwindow(700, 450, "Smiling Face", 300, 200);
    //face
    circle(350, 225, 200);

    //eyes
    circle(443, 148, 20);
    circle(253, 148, 20);

    //nose
    rectangle(339, 170, 360, 243);

    //smile
    arc(350, 225, 200, 340, 150);

    //freeze window
    std::cin.get();
}



