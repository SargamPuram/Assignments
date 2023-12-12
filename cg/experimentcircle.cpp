#include <graphics.h>
#include <iostream>

int main()
{
int gd = DETECT,gm;
initgraph(&gd, &gm,NULL);
circle(200,200,100);
getch();
closegraph();
}

//g++ circle.cpp -o circle -lgraph