//author Anna Tony 
//date 15/02/2025
//matrix multiplication
#include<stdio.h>
int main(){
	int row1,col1,row2,col2,i,j,k;
	printf("Enter the no of row and column for first matrix :");
	scanf("%d%d",&row1,&col1);
	printf("Enter the no of row and column for second matrix :");
	scanf("%d%d",&row2,&col2);
	while(col1!=row2){
		printf("Matrix multiplication is not possible.Enter again!");
		printf("\nEnter the no of row and column for first matrix :");
	    scanf("%d%d",&row1,&col1);
		printf("Enter the no of row and column for first matrix :");
		scanf("%d%d",&row1,&col1);
	}
	int mat1[row1][col1],mat2[row2][col2],mat3[row1][col2];
	printf("Enter the elements for first matrix :");
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the elements for second matrix :");
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	//multiplication
	for(i=0;i<row1;i++){
		for(j=0;j<col2;j++){                 
			mat3[i][j]=0;
			for(k=0;k<col1;k++){
				mat3[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	printf("Matrix 1 :\n");	
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}
	printf("Matrix 2 :\n");
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			printf("%d\t",mat2[i][j]);
		}
		printf("\n");
	}
	//solution print
	printf("Matrix 1 multiplied by matrix 2 gives (%dX%d) matrix :\n",row1,col2);
	for(i=0;i<row1;i++){
		for(j=0;j<col2;j++){
			printf("%d\t",mat3[i][j]);
		}
		printf("\n");
    }
	return 0;
}
