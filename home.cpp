#include "graphics.h"
#include "picture.hpp"

void home()
{

   setfillstyle(SOLID_FILL, BROWN);
   bar(400, 250, 550, 400);
   setcolor(BROWN);
   setlinestyle(SOLID_LINE, 16,  8);
   line(350, 350, 475, 100);
   line(475, 100, 625, 385);
   getch();
}
