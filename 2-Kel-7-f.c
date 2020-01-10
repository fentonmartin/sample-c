#include <stdio.h>

char nama[20];
char npm[8];
char kelas[5];
char ini;

main()
{
	garis();
	awal();
	garis();
	akhir();
	garis();
	getch();
}

awal()
{
	printf("                       ISI FORM BIODATA                Halaman 1\n\n");
	printf("\n\tNama   : ");	gets(nama);
	printf("\n\tNPM    : ");	gets(npm);
	printf("\n\tKelas  : ");	gets(kelas);
	printf("\n\n   Tekan sembarang tombol untuk melanjutkan ke halaman 2...");
	getch();
	system("cls");
}

akhir()
{
	printf("              HASIL BIODATA YANG TELAH DIMASUKKAN      Halaman 2\n\n");
	printf("\n\tNama anda adalah %s.\n", nama);
	printf("\n\tNPM anda adalah %s.\n", npm);
	printf("\n\tKelas anda di %s.\n", kelas);
}


garis()
{
	printf("\n================================================================\n");
}
