#include<foo.h>
#include<graphics.h>
void fun()
{
    rectangle(50, 100, getmaxx() - 50, getmaxy() - 100);
    char *txt = (char*)"CODEWAR";
    settextstyle(BOLD_FONT, HORIZ_DIR, 8);
    outtextxy(getmaxx()/2 - textwidth(txt)/2, getmaxy()/2 - textheight(txt)/2, txt); 
}