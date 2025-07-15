/*Author       : Anna Tony
  Date         : 16-03-2025
  Description  : compact matrix 
  Version      : 1.0  */
#include <stdio.h>

 int main(){
     int row,col;
     printf("\nEnter the row and column : ");
     scanf("%d%d",&row,&col);
     int mat[row][col];
     printf("\nEnter the elements : ");
     for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
             scanf("%d",&mat[i][j]);
        }
     }
     int size=0;
     for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
             if(mat[i][j]!=0){
                 size++;
             }
         }
     }
     int matC[3][size];
     int k=0;
     for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
             if(mat[i][j]!=0){
                 matC[0][k]=i;
                 matC[1][k]=j;
                 matC[2][k]=mat[i][j];
                 k++;
             }
         }
     }
     
     for (int i=0;i<3;i++){
         for (int j=0;j<size;j++){
          printf("%d\t",matC[i][j]);
 
         }
         printf("\n");
     }
     return 0;
 }


