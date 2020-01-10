#include <stdio.h>
//#include <windows.h>

main()
{
	char nama[20];
	char ini;
	
	garis();
	
	//gotoxy(10,2);
	printf("Nama anda                       : ");
	gets(nama);
	
	printf("Inisial nama anda (tanpa enter) : ");
	ini = getche();
	
	garis();
	
	puts("\n\nPress any key to continue. . .\n");
	getch();
	system("cls");
	
	garis();
	
	printf("Nama anda         : ");
	puts(nama);
	printf("Inisial nama anda : ");
	putch(ini);
	
	garis();
}



garis()
{
	printf("\n--------------------------------\n");
}

/*
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
*/
