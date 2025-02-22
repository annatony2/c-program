/*Author       : Anna Tony
  Date         : 22-02-2025
  Description  : Check the given number is palindrom or not 
  Version      : 1.0  */
#include<stdio.h>
int main(){
    int inputNumber,copyNumber,reminder,rev=0;
    printf("Enter a number : ");
    scanf("%d",&inputNumber);
    copyNumber=inputNumber;
    while(copyNumber>0){
        reminder=copyNumber%10;
        rev=(rev*10)+reminder;
        copyNumber=copyNumber/10;
    }
    if(rev==inputNumber){
        printf("%d is a palindrom !",inputNumber);
    }else{
        printf("%d is not a palindrom ! It's reverse is %d",inputNumber,rev);
    } 
return 0;
}
