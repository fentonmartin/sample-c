#include <stdio.h>

main()

{
	
	char nama1;
	char nama2;
	printf("\nNama 1 : ");
	nama1 = getch();			//Membaca satu character hidden input (no echo), langsung statement selanjutnya tanpa enter
	printf("\nNama 2 : ");
	nama2 = getche();			//Membaca satu character unhidden output (echo), langsung statement selanjutnya tanpa enter
	
	printf("\nNama 1 anda ");
	putch(nama1);
	printf("\nNama 2 anda ");
	putch(nama2);
}
