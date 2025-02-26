/*Author       : Anna Tony
  Date         : 26-02-2025
  Description  :function sortArray that takes a one-dimensional array and 
                its size as arguments and returns the sorted array
  Version      : 1.0  */
  
#include<stdio.h>

void sortArray(int[],int);
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    sortArray(array,n);
    printf("Sorted array : ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}

void sortArray(int array[],int size){
    
   int i,j,temp;
   for(i=0;i<size-1;i++){
       for(j=0;j<size-i-1;j++){
           if (array[j]>array[j+1]){
               temp=array[j];
               array[j]=array[j+1];
               array[j+1]=temp;
            }
        }
   }
}
