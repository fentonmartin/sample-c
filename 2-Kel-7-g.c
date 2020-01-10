#include <stdio.h>

main()
{
	char nama[20];
	char ini;
	
	garis();
	
	printf("\t\t\tI N P U T\n\n");
	printf("  \"Isi dengan menekan enter\"  NAMA ANDA   : ");
	gets(nama);
	
	printf("\n  \"Isi tanpa  menekan enter\"  INISIAL     : ");
	ini = getche();
	
	garis();
	puts("");
	garis();
	
	printf("\t\t\tO U T P U T\n\n");
	printf("\t\tNama anda         : ");
	puts(nama);
	printf("\n\t\tInisial nama anda : ");
	putch(ini);
	
	garis();
	getch();
}



garis()
{
	printf("\n----------------------------------------------------------------\n");
}
