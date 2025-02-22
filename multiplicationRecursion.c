/*Author       : Anna Tony
  Date         : 22-02-2025
  Description  : Product of two numbers using recursion
  Version      : 1.0  */
#include<stdio.h>
int mul(int n1,int n2);//prototype
int main(){
    int n1,n2;
    printf("Enter two number : ");
    scanf("%d%d",&n1,&n2);
    printf("\n%d X %d = %d",n1,n2,mul(n1,n2));
}
int mul(int n1,int n2){
    if(n2==1)
        return n1;
    else
        return n1+mul(n1,n2-1);
    }
