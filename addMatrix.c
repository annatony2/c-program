/*Author       : Anna Tony
  Date         : 11-03-2025
  Description  : matrix addition using function
  Version      : 1.0  */
#include <stdio.h>

 void readMatrix(int[][10],int,int);
 void printMatrix(int[][10],int,int);
 void addMatrix(int matrixA[][10],int matrixB[][10],int matrixC[][10],int,int);
 
 int main(){
     int row,col;
     printf("\nEnter the row and column : ");
     scanf("%d%d",&row,&col);
     int matrixA[10][10];
     int matrixB[10][10];
     int matrixC[10][10];
     readMatrix(matrixA,row,col);
     readMatrix(matrixB,row,col);
     addMatrix(matrixA,matrixB,matrixC,row,col);
     printf("\nMatrix 1 : \n");
     printMatrix(matrixA,row,col);
     printf("\nMatrix 2 : \n");
     printMatrix(matrixB,row,col);
     printf("\nResult :\n");
     printMatrix(matrixC,row,col);
     return 0;
 }
 
 void readMatrix(int matrix[][10],int row,int col){
     printf("\nEnter the elements : ");
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
 
 void addMatrix(int matrixA[][10],int matrixB[][10],int matrixC[][10],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
        }
    }
}
