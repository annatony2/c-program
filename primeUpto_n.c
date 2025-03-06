/*Author       : Anna Tony
  Date         : 06-03-2025
  Description  : Prime number upto n
  Version      : 1.0  */
  
#include <stdio.h>

int isPrime(int);

int main(){
    int i,n,isP;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Prime number upto %d : ",n);
    for (i=2;i<=n;i++){
        if(isPrime(i)==1){
            printf("%d\t",i);
        }
    }
return 0;
}

int isPrime(int n){
    for (int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    } return 1;
}
