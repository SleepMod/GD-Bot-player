#include <windows.h>

int x = 0, y = 0;
bool click = false;

void My_Level()
{

	click = true;
	mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
	Sleep(1000);
  
  // Here you continue your code as you want...
  
}
