#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c,r,k;
    printf("\t\t================================\n");
    printf("\t\t     PROGRAM KONVERSI SUHU\n");
    printf("\t\t================================\n");
    printf("\n\n\n\n");
    printf("\tProgram Ini Mempunyai 2 Konversi :\n");
    printf("\n");
    printf("\t   =================\n");
    printf("\t   1. Fahrenheit\n");
    printf("\t   2. Rheamur\n");
    printf("\t   =================\n");
    printf("\n");
    printf("\n\n\n\n\n\n   Tekan Enter Untuk Melanjutkan ke Konversi Pertama yaitu : Fahrenheit.. ");
    getch();
    system("cls");
    printf("\n\n\n\t===============================================\n");
    printf("\t Selamat Datang Di Program Konversi Fahrenheit\n");
    printf("\t===============================================\n");
    printf("\n");
    printf("\n\n\n   Input Suhu Fahrenheit yang Akan Di Konversikan : ");
    scanf("%f",&f);
    system("cls");
    printf("\n\n\n\t==============================================================\n");
    printf("\t\tSuhu Fahrenheit yang Anda Input : %.2f \tF\n", f);
    c=(f-32)*5/9;
    printf("\t\tSuhu dalam Celcius              : %.2f \tC\n", c);
    r=c*4/5;
    printf("\t\tSuhu dalam Rheamur              : %.2f \tR\n", r);
    k=c+273;
    printf("\t\tSuhu dalam Kelvin               : %.2f \tK\n", k);
    printf("\t==============================================================\n");
    printf("\n\n\n\n\n\n   Tekan Enter Untuk Melanjutkan ke Konversi Kedua yaitu : Rheamur..   ");
    getch();
    system("cls");
    printf("\t\t===============================================\n");
    printf("\t\t   Selamat Datang Di Program Konversi Rheamur\n");
    printf("\t\t===============================================\n");
    printf("\n\n\n\n");
    printf("   Input Suhu Rheamur yang Akan Di Konversikan : ");
    scanf("%f",&r);
    system("cls");
    printf("\n\n\n\t===========================================================\n");
    printf("\t\tSuhu Rheamur yang Anda Input : %.2f \tR\n", r);
    c=r*5/4;
    printf("\t\tSuhu dalam Celcius           : %.2f \tC\n", c);
    f=(c*9/5)+32;
    printf("\t\tSuhu dalam Fahrenheit        : %.2f \tF\n", f);
    k=c+273;
    printf("\t\tSuhu dalam Kelvin            : %.2f \tK\n", k);
    printf("\t===========================================================\n");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t    Kelompok 7 (2IA01)");
    printf("\n\n\n\n");
    printf("   Tekan Enter Untuk Mengakhiri Program Konversi.. ");
    printf("\n\n\n");
    getch();
    system("cls");
    return 0;
}
