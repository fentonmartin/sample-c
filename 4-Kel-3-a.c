#include <stdio.h>
#include <stdlib.h>

int main()
{
	inti();
	akhir();
}

inti()
{
	float f,c,r,k;
	int pil;
	system("cls");
    printf("\t\t================================\n");
    printf("\t\t     PROGRAM KONVERSI SUHU\n");
    printf("\t\t================================\n");
    printf("\n\n\n\n");
    printf("\tProgram Ini Mempunyai 2 Konversi :\n");
    printf("\n");
    printf("\t   ====================\n");
    printf("\t   |   1. Fahrenheit  |\n\n");
    printf("\t   |   2. Rheamur     |\n\n");
    printf("\t   |   3. Keluar      |\n");
    printf("\t   ====================\n");
    printf("\n");
    printf("\n\n\n\tPilihan anda : ");
    scanf("%d", &pil);
    if (pil==1)
    fah();
    else if (pil==2)
    rea();
    else if (pil==3)
    akhir();
    else
    {
    printf("\n\n\n   Pilihan anda tidak ada...");
    getch();
    main();
	}
}

fah()
{
	float f,c,r,k;
    system("cls");
    printf("\t\t===============================================\n");
    printf("\t\t Selamat Datang Di Program Konversi Fahrenheit\n");
    printf("\t\t===============================================\n");
    printf("\n");
    printf("\n\n\n\t  Input Suhu Fahrenheit yang Akan Di Konversikan [32-212] : ");
    scanf("%f",&f);
    if(f>=32 && f<=212)
	{
    system("cls");
    printf("\t\t===============================================\n");
    printf("\t\t Selamat Datang Di Program Konversi Fahrenheit\n");
    printf("\t\t===============================================\n");
    printf("\n");
    printf("\n\n\n\t==============================================================\n");
    printf("\t\tSuhu Fahrenheit yang Anda Input : %0.2f \tF\n", f);
    c=(f-32)*5/9;
    printf("\t\tSuhu dalam Celcius              : %0.2f \tC\n", c);
    r=c*4/5;
    printf("\t\tSuhu dalam Rheamur              : %0.2f \tR\n", r);
    k=c+273;
    printf("\t\tSuhu dalam Kelvin               : %0.2f \tK\n", k);
    printf("\t==============================================================\n");
    lagi();
	}
    else
    {
    printf("\n\n\n\n\n\t\tInput Suhu Fahrenheit melewati batas...");
    getch();
    lagi();
	}
}

rea()
{
	float f,c,r,k;
	system("cls");
    printf("\t\t===============================================\n");
    printf("\t\t   Selamat Datang Di Program Konversi Rheamur\n");
    printf("\t\t===============================================\n");
    printf("\n\n\n\n");
    printf("\t   Input Suhu Rheamur yang Akan Di Konversikan [0-80] : ");
    scanf("%f",&r);
    if(r>=0 && r<=80){
	system("cls");
    printf("\t\t===============================================\n");
    printf("\t\t   Selamat Datang Di Program Konversi Rheamur\n");
    printf("\t\t===============================================\n");
    printf("\n");
    printf("\n\n\n\t===========================================================\n");
    printf("\t\tSuhu Rheamur yang Anda Input : %0.2f \tR\n", r);
    c=r*5/4;
    printf("\t\tSuhu dalam Celcius           : %0.2f \tC\n", c);
    f=(c*9/5)+32;
    printf("\t\tSuhu dalam Fahrenheit        : %0.2f \tF\n", f);
    k=c+273;
    printf("\t\tSuhu dalam Kelvin            : %0.2f \tK\n", k);
    printf("\t===========================================================\n");
    lagi();
	}
    else
    {
    printf("\n\n\n\n\n\t\tInput Suhu Rheamur melewati batas...");
    getch();
    lagi();
	}
}


lagi()
{
	char yn;
	printf("\n\n\n\t\t    Mau mencoba lagi? Tekan [Y/N] : ");
	yn = getche();
	if(yn=='y' || yn=='Y')
	{
		system("cls");
		main();
	}
	else if(yn=='n' || yn=='N')
	{
		system("cls");
		akhir();
	}
    else
    {
    printf("\n\n\t\t    Pilihan anda tidak ada...");
    getch();
    lagi();
	}
}

akhir()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t    Kelompok 7 (2IA01)");
    printf("\n\n\n\n");
    printf("\t   Tekan Enter Untuk Mengakhiri Program Fungsi.. \n\n\n\n\n\n\n");
    exit;
}

error()
{
	int yn;
	printf("\n\n\tMau mencoba lagi? Tekan [1] : ");
	scanf("%d", &yn);
	if(yn==1)
	{
		system("cls");
		main();
	}
	else
		system("cls");
		exit;
}
