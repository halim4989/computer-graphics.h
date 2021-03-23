#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
initwindow(1024, 700);
settextstyle(BOLD_FONT, HORIZ_DIR, 6);
outtextxy(300, 300, "Hello world");
cin.get();
}
