#include<stdio.h>
int main()
{
  int i,j,order,sum=0;
  printf("Enter the number of order :");
  scanf("%d",&order);
  int mat[order][order];
  printf("\nEnter the element :");
  for(i=0;i<order;i++){
   for(j=0;j<order;j++){
    scanf("%d",&mat[i][j]);
   }
  }
  for(i=0;i<order;i++){
   for(j=0;j<order;j++){
    if(i==j){
     sum+=mat[i][j];
     }
    }
   }
  printf("The matrix is :\n");
  for(i=0;i<order;i++){
   for(j=0;j<order;j++){
    printf("\t%d",mat[i][j]);
    }
    printf("\n");
    }
  printf("\nSum of diagonal elements :%d ",sum);
  return 0;
  }
