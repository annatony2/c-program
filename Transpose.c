#include<stdio.h>
int main(){
int order,row,column,i,j;
printf("The order of the entered matrix is %d",order);
scanf("%d",&order);
row=order;
column=order;
int matrix1[row][column];
printf("Enter the first matrix:\n");
for(i=0;i<row;i++){
 for(j=0;j<column;j++){
  scanf("%d",&matrix1[i][j]);
 }
printf("Transpose of the given matrix :");
}
for(i=0;i<column;i++){
 for(j=0;j<row;j++){
   printf("%d\t",matrix1[j][i]);
   }
   printf("\n");
  }
 return 0;
}    
  
