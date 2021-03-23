#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(700, 450);
    //face
    circle(350, 225, 200);

    //eyes
    circle(443, 148, 20);
    circle(253, 148, 20);

    //nose
    rectangle(339, 170, 360, 243);

    //smile
    arc(350, 225, 200, 340, 150);


    cin.get();
}
