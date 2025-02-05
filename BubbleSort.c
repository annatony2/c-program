#include<stdio.h>
int main()
{
  int i,limit,j,t;
  printf("Enter the number of elements :");
  scanf("%d",&limit);
  int num[limit];
  for(i=0;i<limit;i++){
   printf("Enter the element :");
   scanf("%d",&num[i]);
   }
  for(i=0;i<limit-1;i++){
   for(j=0;j<limit-i;j++){
    if (num[j]>num[j+1]){
     t=num[j];
     num[j]=num[j+1];
     num[j+1]=t;
     }
    }
  }
  printf("Sorted array is : ");
  for(i=0;i<limit;i++){
   printf("%d\t",num[i]);
   }
  return 0;
  }
