//author Anna Tony
//05-02-2025
//To find Maximum and Minimum
#include<stdio.h>
int main()
{
  int i,limit,max,min,maxPosition,minPosition;
  printf("Enter the number of elements :");
  scanf("%d",&limit);
  int num[limit];
  for(i=0;i<limit;i++){
   printf("Enter the element :");
   scanf("%d",&num[i]);
   }
  max=num[0];
  min=num[0];
  for(i=0;i<limit;i++){
   if (num[i]>max){
    max=num[i];
    if(max==num[i]){
        maxPosition=i+1;       
    }
   }
   if (num[i]<min){
    min=num[i];
    if(max==num[i]){
        minPosition=i+1;       
    }
   }
  }
  printf("Largest  :%d \tPosition :%d\nSmallest :%d \tPosition :%d",max,min,maxPosition+1,minPosition+1);
  return 0;
  }
