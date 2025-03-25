/*Author       : Anna Tony
  Date         : 26-03-2025
  Description  : fibonacci sequence using recursion
  Version      : 1.0  */
#include <stdio.h>

int fibonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    } else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Fibonacci sequence up to %d terms:\n", n);
    for (int i=0;i<n;i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}
