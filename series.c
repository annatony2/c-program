/*Author       : Anna Tony
  Date         : 06-03-2025
  Description  : find the series 1!/1 +2!/2 ......n!/n
  Version      : 1.0  */
  
#include <stdio.h>

int  factorial(int);

int main(){
    int n,sum=0;
    printf("\nEnter a limit : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        sum=sum+(factorial(i)/i);
    }
    printf("\nSolution : %d",sum);
    return 0;
}

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
