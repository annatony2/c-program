/*Author       : Anna Tony
  Date         : 13-03-2025
  Description  : function named isEven() that takes an integer as input and returns 1 
                 if the number is even, otherwise returns 0. Use this function in main()
                 to check whether a given number is even or odd
  Version      : 1.0  */
#include <stdio.h>
int isEven(int);
int main() {
    int num,check;
    printf("Enter a number : ");
    scanf("%d", &num);
    check=isEven(num);
    if(check==1) {
        printf(" %d is even !",num);
    } else {
        printf(" %d is odd !",num);
    }

    return 0;
}

int isEven(int num){
    if (num%2==0) {
        return 1; 
    } else {
        return 0;
    }
}
