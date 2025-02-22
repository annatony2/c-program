/*Author       : Anna Tony
  Date         : 22-02-2025
  Description  : Sum of two numbers using recursion
  Version      : 1.0  */
#include<stdio.h>
int sum(int n1,int n2);//prototype
int main(){
    int n1,n2;
    printf("Enter two number : ");
    scanf("%d%d",&n1,&n2);
    printf("\nSum = %d",sum(n1,n2));
}
int sum(int n1,int n2){
    if(n2==0)
        return n1;
    else
        return sum(n1+1,n2-1);
    }
