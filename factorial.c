#include<stdio.h>
int main()
{
 int number,factorial=1,i=1;
 printf("Enter a numbers to find the factorial : ");
 scanf("%d",&number);
 while (i<=number)
    {
     factorial*=i;
     i++;
     }
    printf("factorial of %d is %d",number,factorial);
    return 0;
  }
