/*Author       : Anna Tony
  Date         : 22-02-2025
  Description  : Largest using conditional operator
  Version      : 1.0  */
#include <stdio.h>
int main(){
    int num1,num2,num3,largest;
    printf("Enter three number : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    largest=(num1>num2)?(num1>num3)?(num1):(num3):
    (num2>num3)?(num2):(num3);
    printf("\nLargest = %d",largest);
    return 0;
}
