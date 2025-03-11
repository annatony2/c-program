/*Author       : Anna Tony
  Date         : 11-03-2025
  Description  : pass 2d array
  Version      : 1.0  */
#include <stdio.h>

 void readMatrix(int[][10],int,int);
 void printMatrix(int[][10],int,int);
 
 int main(){
     int row,col;
     printf("\nEnter the row and column : ");
     scanf("%d%d",&row,&col);
     int matrix[row][col];
     readMatrix(matrix,row,col);
     printf("\nThe Matrix :\n");
     printMatrix(matrix,row,col);
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
