#include <stdio.h>

#define satu 1			// ini adalah define
#define sembilan 9		// constant (konstanta)
#define kata "by FEN"

main()
{
	int kali, angka;
	printf("ini adalah angka %d", satu);
	printf("\n\nMasukkan angka untuk dikali 9 = "); scanf("%d", &angka);
	kali = angka * sembilan;
	printf("\nHasil %d x 9 = %d \n\n\n", angka, kali);
	printf("%s", kata);
}
