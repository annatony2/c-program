/*Author       : Anna Tony
  Date         : 11-03-2025
  Description  : matrix multiplication using function
  Version      : 1.0  */
#include <stdio.h>

 void readMatrix(int[][10],int,int);
 void printMatrix(int[][10],int,int);
 void solMatrix(int matrixA[][10],int matrixB[][10],int matrixC[][10],int,int,int);
 
 int main(){
    int row1,col1,row2,col2;
	printf("Enter the number of row and column for first matrix : ");
	scanf("%d%d",&row1,&col1);
	printf("Enter the number of row and column for second matrix : ");
	scanf("%d%d",&row2,&col2);
	// Check if matrix multiplication is possible
	while(col1!=row2){
		printf("Matrix multiplication is not possible.Enter again!");
		printf("\nEnter the number of row and column for first matrix :");
	    scanf("%d%d",&row1,&col1);
		printf("Enter the number of row and column for first matrix :");
		scanf("%d%d",&row2,&col2);
	}
     int matrixA[10][10];
     int matrixB[10][10];
     int result[10][10];
     printf("\nEnter elements of the first matrix :  ");
     readMatrix(matrixA,row1,col1);
     printf("\nEnter elements of the second matrix : ");
     readMatrix(matrixB,row2,col2);
     solMatrix(matrixA,matrixB,result,row1,col1,col2);
     printf("\nMatrix 1 : \n");
     printMatrix(matrixA,row1,col1);
     printf("\nMatrix 2 : \n");
     printMatrix(matrixB,row2,col2);
     printf("\nMatrix 1 multiplied by matrix 2 gives (%dX%d) matrix :\n",row1,col2);
     printMatrix(result,row1,col2);
     
     return 0;
 }
 
 void readMatrix(int matrix[][10],int row,int col){
     for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
             scanf("%d",&matrix[i][j]);
 
         }
     }
 }
 
 void printMatrix(int matrix[][10],int row,int col){
     for (int i=0;i<row;i++){
         for (int j=0;j<col;j++){
          printf("%d\t",matrix[i][j]);
 
         }
         printf("\n");
     }
 }
 
// Function to multiply matrices
void solMatrix(int matrixA[][10],int matrixB[][10],int result[][10],int row1,int col1,int col2) {
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            result[i][j]=0;
            for(int k=0;k<col1;k++){
                result[i][j]+=matrixA[i][k]*matrixB[k][j];
            }
        }
    }
}
