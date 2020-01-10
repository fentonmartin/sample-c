#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=4;
    float b=2;
    float c=5;
    float d=8;
    float e=10;
    float f,g;

    printf("\t\t   ========================\n");
    printf("\t\t       Nilai A = %.2f \n", a);
    printf("\t\t       Nilai B = %.2f \n", b);
    printf("\t\t       Nilai C = %.2f \n", c);
    printf("\t\t       Nilai D = %.2f \n", d);
    printf("\t\t       Nilai E = %.2f \n", e);
    printf("\t\t   ========================\n");
    printf("\n\n");
    printf("\t============================================\n");
    printf("\tContoh Operator Penugasan\n");
    f=a+=b+c*d-e;
    printf("\t1. A+=B+C*D-E = %.2f \n", f);
    printf("\t============================================\n");
    printf("\n\n");
    printf("\t============================================\n");
    printf("\tContoh Operator Penugasan\n");
    g=c+=pow(b,3)*b-d+e;
    printf("\t2. C+=pow<B,3>*B-D+E = %.2f \n", g);
    printf("\t============================================\n");
    printf("\n\n");
    printf("\t\t    Kelompok 7 (2IA01)");
    printf("\n\n");
    getch();
    system("cls");
    return 0;
}
