/*Author       : Anna Tony
  Date         : 06-03-2025
  Description  : Matrix addition
  Version      : 1.0  */
  
#include<stdio.h>
int main(){
    
	int row,col,i,j;
	printf("Enter the no of row and column for matrix : ");
	scanf("%d%d",&row,&col);
	int mat1[row][col],mat2[row][col],mat3[row][col];
	printf("Enter the elements for first matrix : ");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the elements for second matrix :");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	//matrix addition
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){                 
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	printf("Matrix 1 :\n");	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}
	printf("Matrix 2 :\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\t",mat2[i][j]);
		}
		printf("\n");
	}
	//solution print
	printf("Sum of matrix 1 and matrix 2 :\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\t",mat3[i][j]);
		}
		printf("\n");
    }
	return 0;
}
