#include <stdio.h>
#include <windows.h>

main()
{
	gotoxy(4,5);
	printf("Print");
	gotoxy(7,8);
	printf("Print");
	gotoxy(10,11);
	printf("Print");
	getch();
}

void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
