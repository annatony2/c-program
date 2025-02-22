/*Author       : Anna Tony
  Date         : 22-02-2025
  Description  : Convert the given decimal number to binary equuivalent
  Version      : 1.0  */
#include<stdio.h>
int main(){
    int inputNumber,copyNumber,binary=0,reminder,i=1;
    printf("Enter a number : ");
    scanf("%d",&inputNumber);
    copyNumber=inputNumber;
    while(inputNumber>0){
        reminder=inputNumber%2;
        binary=(reminder*i)+binary;
        inputNumber=inputNumber/2;
        i*=10;
    }
    printf("The binary equivalent of the decimal number %d is %d",copyNumber,binary);
return 0;
}
