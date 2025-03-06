/*Author       : Anna Tony
  Date         : 06-03-2025
  Description  : find absolute value without built in function
  Version      : 1.0  */
  
#include <stdio.h>
int main(){
    int number,absValue;
    printf("\nEnter a number : ");
    scanf("%d",&number);
    if (number<0){
        absValue=-1*number;
        printf("\nThe absolute value is : %d",absValue);
    }
    else{
         printf("The absolute value is : %d",number);
        }
    return 0;
}
