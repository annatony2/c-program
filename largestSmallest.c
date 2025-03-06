/*Author       : Anna Tony
  Date         : 06-03-2025
  Description  : Largest and smallest element in an array
  Version      : 1.0  */
  
#include<stdio.h>

void largestSmallest(int[], int, int*, int*);

int main() {
    int limit,largest,smallest;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    int array[limit];
    printf("Enter the elements: ");
    for (int i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }

    largestSmallest(array,limit,&largest,&smallest);

    printf("The largest element in the array = %d\nThe smallest element in the array = %d\n",largest,smallest);
    return 0;
}

void largestSmallest(int array[],int limit,int* largest,int* smallest) {
    *largest=array[0];
    *smallest=array[0];
    for (int i=1;i<limit;i++){
        if (*largest<array[i]){
            *largest=array[i];
        }
        if (*smallest>array[i]) {
            *smallest=array[i];
        }
    }
}
