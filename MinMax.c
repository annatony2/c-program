#include<stdio.h>
int main()
{
  int i,limit,largest,smallest;
  printf("Enter the number of elements :");
  scanf("%d",&limit);
  int num[limit];
  for(i=0;i<limit;i++){
   printf("Enter the element :");
   scanf("%d",&num[i]);
   }
  largest=num[0];
  smallest=num[0];
  for(i=0;i<limit;i++){
   if (num[i]>largest){
   largest=num[i];
   }
   if (num[i]<smallest){
   smallest=num[i];
   }
  }
  printf("Largest :%d\nSmallest :%d",largest,smallest);
  return 0;
  }
