#include<conio.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i,j,k,l,baris,kolom;
	int sum=0;
	printf ("===== OPERASI MATRIKS =====\n");
	
	printf("MASUKKAN UKURAN BARIS	:");
	scanf("%d",&baris);
	printf("MASUKKAN UKURAN KOLOM   :");
	scanf("%d",&kolom);
	int a[baris][kolom],b[baris][kolom],c[baris][kolom],t[baris][kolom];
	
	
	printf("          MATRIX KE 1          \n");
	for(i=0; i<baris ; i++){
		for(j=0; j<kolom ; j++){
			printf("masukkan baris ke %d dan kolom ke %d	:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}

	printf("          MATRIX KE 2          \n");	
	for (i=0;i<baris;i++){
		for (j=0;j<kolom;j++){
			printf("masukkan baris ke %d dan kolom ke %d	:",i+1,j+1);		
			scanf("%d",&b[i][j]);
		}
	}
				
						
	printf("\n   Matrik ke 1   \n");
		for(i=0 ; i<baris ; i++){
			for(j=0 ; j<kolom ; j++){
			  printf("  %4d  ",a[i][j]);
       		}
       		printf("\n");
        }
				
	printf("\n   Matrik ke 2   \n");
		for(i=0 ; i<baris ; i++){
			for(j=0 ; j<kolom ; j++){
				printf("  %4d  ",b[i][j]);
       		}
       		printf("\n");
        }
    printf("\n\n");
            	
            	//perkalian // perkalian // perkalian 
    
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
        	for(k=0;k<baris;k++){
        		sum=sum+ a[i][k] * b[k][j];
			}
			c[i][j]=sum;
			sum = 0;
				
        }
    }        

    		//penjumlahan // penjumlahan // penjumlahan
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            t[i][j]=a[i][j]+b[i][j];
        }
                   
    }

	printf("    Hasil Perkalian Matrik A DAN B     \n");
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
        	printf("  %4d  ",c[i][j]);
        }
        		printf("\n");
    }
    
	
	printf("    Hasil Penjumlahan Matrik A DAN B     \n");
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
        printf("     %d  ",t[i][j]);
        }
        	printf("\n");
   	}
	
	
	
	printf("   Tranpus dari matrix jumlah perkalian\n");
    for(i=0 ; i<baris ; i++){
		for(j=0 ; j<kolom ; j++){
				printf("     %d ",c[j][i]);
			}
					printf("\n");
	}
	
printf("   Tranpus dari matrix jumlah penjumlahan\n");
    for(i=0 ; i<baris ; i++){
		for(j=0 ; j<kolom ; j++){
				printf("    %d	",t [j][i]);
			}
					printf("\n");
	}
            	
}

