/*Author       : Anna Tony
  Date         : 22-02-2025
  Description  : Check the given number is prime or not using function
  Version      : 1.0  */
#include<stdio.h>
int isPrime(int);//prototype
int main(){
    int n,i,isP;
    printf("Enter  a number : ");
    scanf("%d",&n);
    isP=isPrime(n);
    if(isP==1){
        printf("The given number is prime number !");
    }else{
        printf("The given number is not prime number !");
    }
}
    int isPrime(int n){
        for(int i =2;i<n/2;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
