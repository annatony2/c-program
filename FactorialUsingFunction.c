//Author       : Anna Tony
//Date         : 22-02-2025
//Description  : factorial of a number using function
//Version      : 1.0   
#include<stdio.h>
void fact(int n);
int main(){
    int n;
    printf("Enter the number to find the  factorial : ");
    scanf("%d",&n);
    fact(n);
    return 0;
}
void fact(int n){
   int f=1;
   for(int i=1;i<=n;i++){
      f=f*i;
   }
   printf("factorial = %d",f);
}
   
