/*Author       : Anna Tony
  Date         : 06-03-2025
  Description  : Largest element in an array
  Version      : 1.0  */
  
#include <stdio.h>

int largestElement(int[],int);

int main(){
    int limit,largest;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    int array[limit];
    printf("Enter the elements : ");
    for(int i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }
    largest=largestElement(array,limit);
    printf("The largest element in the array : %d",largest);
    return 0;
}

int largestElement(int array[],int limit){
    int large=array[0];
    for(int i=0;i<limit;i++){
        if(large<array[i]){
            large=array[i];
        }

    }return large;
}
