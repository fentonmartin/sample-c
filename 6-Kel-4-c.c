#include <stdio.h>
    
    int n, i, j, x, y, a, b;
    int array[10][10];
    
main() {
	system("cls");
    printf("\t\t================================\n");
    printf("\t\t        PROGRAM ARRAY 3\n");
    printf("\t\t================================\n");
    printf("\n\n\n\n");

    
    printf("Matriks Segitiga Atas\n\n");
    printf("Masukkan jumlah baris : ");
    scanf("%d", &a);
    printf("Masukkan jumlah kolom : ");
    scanf("%d", &b);
    
    if(a>10 || b>10) {
    	printf("\n\n\nBaris atau kolom yang dimasukkan melebihi batas.\n\n\n");
	}
	else {
		inputmatrix();
	}    
	
    
}

inputmatrix(){
	
    printf("\n\nArray yang dimasukan ordo [%d] x [%d].\n\n",a,b);
    
    printf("Masukkan data : \n\n");
    
    
	for(x=0;x<a;x++){
		for(y=0;y<b;y++){
			printf("Masukkan array [%d] [%d] : ",x,y);
			scanf("%d",&array[x][y]);
		}
	}

	printf("\n\n\n");
	printf("Menampilkan matriks : \n\n");
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(i>j){
				printf(" 0 ");
			}
			else{
				printf(" %d ", array[i][j]);	
			}
				
		}
		printf("\n");
	}

}
