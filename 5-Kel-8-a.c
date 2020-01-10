#include <stdio.h>
#include <stdlib.h>

int main()
{
	inti();
	akhir();
}

inti()
{
	int pil;
	system("cls");
    printf("\t\t================================\n");
    printf("\t\t        PROGRAM FUNGSI\n");
    printf("\t\t================================\n");
    printf("\n\n\n\n");
    printf("\t\tProgram Ini Mempunyai 2 fungsi :\n");
    printf("\n");
    printf("\t\t    ======================\n");
    printf("\t\t    |   1. Volume Limas  |\n\n");
    printf("\t\t    |   2. Fibonacci     |\n\n");
    printf("\t\t    |   3. Keluar        |\n");
    printf("\t\t    ======================\n");
    printf("\n");
    printf("\n\n\n\tPilihan anda : ");
    scanf("%d", &pil);
    if (pil==1)
    lim();
    else if (pil==2)
    fib();
    else if (pil==3)
    akhir();
    else
    {
    printf("\n\n\n   Pilihan anda tidak ada...");
    getch();
    main();
	}
}

lim()
{
	int pil;
    system("cls");
    printf("\t\t===============================================\n");
    printf("\t\t    Selamat Datang Di Fungsi Luas Limas\n");
    printf("\t\t===============================================\n");
    printf("\n");
    printf("\t\t\tProgram Ini Mempunyai 2 fungsi :\n");
    printf("\n");
    printf("\t\t   ===============================\n");
    printf("\t\t   |  1. Limas Persegi           |\n\n");
    printf("\t\t   |  2. Limas Persegi Panjang   |\n\n");
    printf("\t\t   ===============================\n");
    printf("\n");
    printf("\n\n\n\t\tPilihan anda : ");
    scanf("%d", &pil);
    if (pil==1)
    limp();
    else if (pil==2)
    limpj();
    
    
    lagi();
}

limp()
{
	int s, t, v;
	printf("\n\n\tMasukkan sisi alas limas : ");
    scanf("%d", &s);
	printf("\n\n\tMasukkan tinggi limas  : ");
    scanf("%d", &t);
    v=s*s*t/3;
	printf("\n\n\n\tVOLUME LIMAS PERSEGI : %d", v);
}

limpj()
{
	int p, l, t, v;
	printf("\n\n\tMasukkan panjang limas : ");
    scanf("%d", &p);
	printf("\n\n\tMasukkan lebar limas   : ");
    scanf("%d", &l);
	printf("\n\n\tMasukkan tinggi limas  : ");
    scanf("%d", &t);
    v=p*l*t/3;
	printf("\n\n\n\tVOLUME LIMAS PERSEGI PANJANG : %d", v);	
}

fib()
{
	int n;
	int count, t1=0, t2=1, display=0;
	system("cls");
    printf("\t\t===============================================\n");
    printf("\t\t     Selamat Datang Di Fungsi Fibonacci\n");
    printf("\t\t===============================================\n");
    printf("\n\n\n\n");
	printf("\n\n\t\tMasukkan banyak bilangan fibonacci : ");
    scanf("%d", &n);
	  printf("\n\n\t\t%d Deret Fibonacci : %d %d ", n, t1, t2);
	  count=2;
	  while (count<n)  
	  {
	      display=t1+t2;
	      t1=t2;
	      t2=display;
	      ++count;
	      printf("%d ",display);
	  }
    
    lagi();
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
    printf("\t\t\t       Kelompok 7\n\n");
    printf("\t\t\t         2IA01");
    printf("\n\n\n\n");
    printf("\t   Tekan Enter Untuk Mengakhiri Program Konversi.. \n\n\n\n\n\n");
    getch();
    exit;
}
