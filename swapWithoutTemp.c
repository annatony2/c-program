/*Author       : Anna Tony
  Date         : 06-03-2025
  Description  : Swap without temp
  Version      : 1.0  */
  
#include <stdio.h>

void swap(int*,int*);

int main(){
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);
    printf("Before swap  n1 = %d  n2 = %d",n1,n2);
    swap(&n1,&n2);
    printf("\nAfter swap   n1 = %d  n2 = %d",n1,n2);
    return 0;
}

void swap(int* n1,int* n2){
    *n1=*n1+*n2;
    *n2=*n1-*n2;
    *n1=*n1-*n2;
}
