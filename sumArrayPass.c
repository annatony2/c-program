/*Author       : Anna Tony
  Date         : 26-03-2025
  Description  : To calculate the sum of array elements by passing the array 
                 to a function. Display the sum in the main function.
  Version      : 1.0  */
#include <stdio.h>

int sumArray(int arr[],int size){
    int sum=0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=sumArray(arr,n);
    printf("Sum of array elements: %d\n",sum);

    return 0;
}
