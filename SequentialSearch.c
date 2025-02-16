#include<stdio.h>
int main()
{
  int i,limit,search;
  printf("Enter the number of elements :");
  scanf("%d",&limit);
  int num[limit];
  for(i=0;i<limit;i++){
   printf("Enter the element :");
   scanf("%d",&num[i]);
   }
  printf("Enter the element to search :");
  scanf("%d",&search);
  for(i=0;i<limit;i++){
   if (search==num[i]){
   printf("\nPosition of %d :%d",num[i],i+1);
   }
   else{
     printf("\nNot found !")
   } 
  }
  return 0;
  }
  
