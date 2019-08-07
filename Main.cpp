#include <Windows.h>
#include <iostream>

using namespace std;

void Menu()
{
	HWND hWnd = FindWindowA(0, ("Geometry Dash"));
	if (hWnd)
	{
		system("cls");
		system("color 0a");
		SetConsoleTitle("GD Bot player");
		cout << "Bot player. Enter the number of the level to play. To see the number lvl, please check the note where u download this." << endl;
		cout << "If you hear a double beep, will mean a error. Prees any key, and enter the number. Make sure press F5 after the beep!" << endl;
		cin >> lvlname;
	}

	else
	{
		SetConsoleTitle("Error");
		system("color 0c");
		cout << "Geometry Dash not FOUND!" << endl;
		system("pause>nul");
	}

}

void LvlToPlay()
{
	if (lvlname == 1)
	{
		system("cls");
		cout << "Level Stereo Madness selected. Prees any key to start." << endl;
		system("pause>nul");
		system("cls");
		cout << "The bot will start in 5 seconds. The computer will beep, when he starts." << endl;
		Sleep(5000);
		Beep(523, 500);
		StereoMadness();
	}

	else
	{
		system("cls");
		system("color 0c");
		cout << "Error while selecting, check if the number is ok or no. Prees any key to return." << endl;
		Beep(523, 500);
		Beep(400, 500);
		system("pause>nul");
	}
}
