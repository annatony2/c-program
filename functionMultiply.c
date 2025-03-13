/*Author       : Anna Tony
  Date         : 13-03-2025
  Description  : Function multiply() which takes two integers as parameters and
                 returns their product. Call this function in main() and display the result.
  Version      : 1.0  */
#include <stdio.h>

void multiply(int,int);

int main() {
    int num1,num2;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    multiply(num1,num2);
    
    return 0;
}

void multiply(int a, int b){
    int product=a*b;
    printf("The product of %d and %d is %d\n",a,b,product);
}
