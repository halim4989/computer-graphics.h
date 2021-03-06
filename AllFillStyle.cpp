/* setfillstyle example */

#include <graphics.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>

/* the names of the fill styles supported */
char *fname[] = { "EMPTY_FILL", "SOLID_FILL", "LINE_FILL",
                  "LTSLASH_FILL", "SLASH_FILL", "BKSLASH_FILL", "LTBKSLASH_FILL",
                  "HATCH_FILL", "XHATCH_FILL", "INTERLEAVE_FILL", "WIDE_DOT_FILL",
                  "CLOSE_DOT_FILL", "USER_FILL"
                };

int main()
{
    /* request autodetection */
    int gdriver = DETECT, gmode, errorcode;
    int style, midx, midy;

    char stylestr[40];


    /* initialize graphics and local variables */
    initgraph(&gdriver, &gmode, "");

    /* read result of initialization */
    errorcode = graphresult();
    if (errorcode != grOk)    /* an error occurred */
    {
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("Press any key to halt:");
        getch();
        exit(1);   /* terminate with an error code */
    }

    midx = getmaxx() / 2;
    midy = getmaxy() / 2;

    for (style = EMPTY_FILL; style < USER_FILL; style++)
    {
        /* select the fill style */
        setfillstyle(style, getmaxcolor());

        /* convert style into a string */
        strcpy(stylestr, fname[style]);
        std::cout << style << "\n";

        /* fill a bar */
        bar3d(0, 0, midx-10, midy, 0, 0);

        /* output a message */
        outtextxy(midx, midy, stylestr);

        /* wait for a key */
        getch();
        cleardevice();
    }

    /* clean up */
    getch();
    closegraph();

    return 0;
}
