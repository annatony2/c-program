#include<stdio.h>
int main()
{
  int i,j,row,col;
  printf("Enter the number of row and column :");
  scanf("%d%d",&row,&col);
  int mat[row][col];
  printf("\nEnter the element :");
  for(i=0;i<row;i++){
   for(j=0;j<col;j++){
    scanf("%d",&mat[i][j]);
   }
  }
  printf("The matrix is :\n");
  for(i=0;i<row;i++){
   for(j=0;j<col;j++){
    printf("\t%d",mat[i][j]);
    }
    printf("\n");
    }
  return 0;
  }
