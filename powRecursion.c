/*Author       : Anna Tony
  Date         : 26-03-2025
  Description  : To calculate the power of a number using recursion. 
                 The base and exponent should be taken as input from the user.
  Version      : 1.0  */
#include<stdio.h>

int power(int num,int exp){
    if(exp==0){
        return 1;
    }else{
        return num*power(num,exp-1);
    }
  }
    
int main(){
    int num,exp;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the power : ");
    scanf("%d",&exp);
    printf("result = %d",power(num,exp));
    return 0;
}
