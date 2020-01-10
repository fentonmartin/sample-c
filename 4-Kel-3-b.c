#include <stdio.h>
#include <stdlib.h>

main()
{
	mulai();
	lagi();
	system("cls");
}

garis()
{
	printf("\t=============================================================");
}

lagi()
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

mulai()
{
	int a, b, c, d, n;
	garis();
	printf("\n\t\t\t\t Kelompok 7\n");
	garis();
	printf("\n\n");
	printf("\t\tMasukkan jumlah angka [1-5] : ");
	scanf("%d", &n);
	if (n<=5)
	{
	printf("\n\n\t");
	for(a=0; a<=n; a++)
	{
		printf("\t\t\t");
		c=0;
		for(b=0; b<=a; b++)
	{
		printf("  %d",c);
		c++;
	}
		printf("\n\t");
	}
	
	for(a=n; a>0; a--)
	{
		printf("\t\t\t");
		c=0;
		for(b=a; b>0; b--)
	{
		printf("  %d",c);
		c++;
	}
		printf("\n\t");
	}
	}
	else
	{
		printf("\n\n\t");
		for(d=0; d<5; d++)
		printf("\n\t\t\t\tERROR .. ^.^\n");
	}
	printf("\n\t");
}
