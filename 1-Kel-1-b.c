#include <stdio.h>

int a,b,c;
//a=200;
//b=400;
//c=600;

main() {
	
	printf("Nilai A = ");
	scanf("%d", &a);
	printf("Nilai B = ");
	scanf("%d", &b);
	printf("Nilai C = ");
	scanf("%d", &c);
	printf("Nilai A = %d \n",a);
	printf("Nilai B = %d \n",b);
	printf("Nilai C = %d \n\n",c);
	printf(" A + B  + C =  %d + %d  + %d = %d \n",a,b,c,a+b+c);
	printf("(A + B) * C = (%d + %d) * %d = %d",a,b,c,(a+b)*c);
	
}
