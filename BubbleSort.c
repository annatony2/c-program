#include<stdio.h>
int main()
{
  int i,limit,j,t;
  printf("Enter the number of elements :");
  scanf("%d",&limit);
  int num[limit];
  printf("Enter the elements :");
  for(i=0;i<limit;i++){
   scanf("%d",&num[i]);
   }
  for(i=0;i<limit-1;i++){
   for(j=0;j<limit-i-1;j++){
    if (num[j]>num[j+1]){
     t=num[j];
     num[j]=num[j+1];
     num[j+1]=t;
     }
    }
  }
  printf("Sorted array : ");
  for(i=0;i<limit;i++){
   printf("%d ",num[i]);
   }
  return 0;
  }
