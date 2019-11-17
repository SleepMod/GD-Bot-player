// Simple custom key gameplay for GD
// By ! SleepMod !#0522
// This code this time is correct and free for all

#include <Windows.h>
#include <iostream>

using namespace std;

// Data strings

int x = 0, y = 0;
bool click = false;

// Keyboard function

HWND hWnd = FindWindowA(0, ("Geometry Dash"));

void Keyboard()
{
	char key;
	for (key = 8; key <= 190; key++) {
		if (GetAsyncKeyState(key) == -32767)
		{
			Sleep(1);
			click = true;
			mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
		}
	}
}

int main()
{
	SetConsoleTitle("CustomKey Gameplay for GD");
	system("color 0a");
	cout << "Welcome to custom key gameplay!" << endl;
	cout << "Any key you will prees will do a click. You just can try it!" << endl;
	cout << "Please, wait while searching GD... Might be 2 seconds" << endl;
	Sleep(2000);
	if (hWnd)
	{
		system("cls");
		cout << "Working! Now you are able to use this! 'WARINING! You maybe see lot of delay if you hold any key!'" << endl;
		Keyboard();
	}
	else
	{
		system("color 0c");
		system("cls");
		cout << "Geometry Dash not FOUND! Prees any key to exit!" << endl;
		system("pause>nul");
	}
}
