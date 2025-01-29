#include<stdio.h>
int main()
{
  int num1,num2,result;
  char oper;
  printf("Enter 2 numbers : ");
  scanf("%d%d",&num1,&num2);
  printf("Enter the operator(+,-,*,/,%) :  ");
  scanf(" %c",&oper);
  switch (oper){
    case '+':result=num1+num2;
             printf("%d + %d = %d",num1,num2,result);
             break;
    case '-':result=num1-num2;
             printf("%d - %d = %d",num1,num2,result);
             break;
    case '*':result=num1*num2;
             printf("%d X %d = %d",num1,num2,result);
             break;
    case '/':result=num1/num2;
             printf("%d / %d = %d",num1,num2,result);
             break;
    case '%':result=num1%num2;
             printf("Remainder of %d and %d is %d",num1,num2,result);
             break;
             }
      return 0;
      }
    
    
