/*Author       : Anna Tony
  Date         : 13-03-2025
  Description  : avg of a set of numbers in an array
  Version      : 1.0  */    
     
#include <stdio.h>

int main() {
    int n,i,sum=0,avg;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int numbers[n];
    printf("Enter the numbers : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d",&numbers[i]);
        sum+=numbers[i]; 
    }
    avg=sum/n;
    printf("Average = %d", avg);

    return 0;
}
