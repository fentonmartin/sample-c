#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a,b,c;
float d,e,f;

main() {
	printf("Masukkan A =");
	scanf("%i", &a);
	printf("Masukkan B =", &b);
	scanf("%i", &b);
	c=pow(a, b);
	e=a;
	f=b;
	d=e/f;
	printf("\nIni program C [a,b] : \n\n");
	printf("Nilai A = %d\n",a);
	printf("Nilai B = %d\n\n",b);
	printf("A + B = %d\n", a+b);
	printf("A - B = %d\n", a-b);
	printf("A x B = %d\n", a*b);
	printf("A / B = %g\n", d);
	printf("A ^ B = %d\n", c);
}

