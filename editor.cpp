#include <iostream>
#include <curses.h>
#include <graphics.h>
#include <windows.h>

main()
{
  initwindow(400, 400, "");
  int mx, my;
  POINT cp;
  bool end = false;

  while(!end)
    {
      GetCursor(Pos(&cp));
      mx = cp.x;
      my = cp.y;

      delay(10);
      if(GetAsyncKeyState(VK_LBUTTON))
	{
	  setcolor(2);
	  circle(mx, my, 11);
	}

      if(GetAsyncKeyState(VK_RBUTTON))
	{
	  end = true;
	}
    }

  getch();
  closegraph();
}
