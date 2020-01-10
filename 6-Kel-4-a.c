#include <stdio.h>

main() {
	system("cls");
    printf("\t\t================================\n");
    printf("\t\t        PROGRAM ARRAY 1\n");
    printf("\t\t================================\n");
    printf("\n\n");
    
    int i;
	int array[] = {100,101,102,103,104,105,106,107,108,109};
	
	for (i=0;i<9;i++){
	printf("Array ke - %d = %d \t(Array[%d])\n\n", i, array[i], i);
}
	getch();
}
