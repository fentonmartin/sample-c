
// file header '.h' :
#include <stdio.h>
/*
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
*/

main()
{
	float a = 123.45678901234567890;
	char b[26] = "abcdefghijklmnopqrstovwxyz";					// deklarasi string menggunakan char[] atau char[123].
	printf(" %d bukan desimal   \n %f   \n %g   \n %i bukan integer  \n %.2f   \n %.9f   \n\n\n",a,a,a,a,a,a);
	printf(" %s \n %c",b,b);
	printf("\n\n\n\n");
	
	int d,e,f;
	printf("Masukkan 3 bilangan bulat : ");
	scanf("%d %*d %d",&d,&e,&f);								// penggunaan '*' pada '%*d' mengakibatkan nilai tidak dimasukkan.
	printf("\nBilangan nya adalah %d, %d, dan %d\n", d,e,f);		// nilai yang disimpan hanya 'd' dan 'e' saja, 'f' dianggap belum dimasukkan.
	
	printf("\nIni string yang sangaaaaat panjang \
string yang sangaaaaat panjang string yang sangaaaaat \
panjang string yang sangaaaaat panjang string yang sangaaaaat \
panjang.");														// penggunaan '/' pada string untuk menggabung string yang panjang.

}
