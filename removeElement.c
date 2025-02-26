/*Author       : Anna Tony
  Date         : 26-02-2025
  Description  :function removeElement that takes an array,
                its size, and the element to be removed as arguments.
                Display the final result in the main function
  Version      : 1.0  */
  
#include<stdio.h>

void removeElement(int[],int*,int);
int main(){
    int n,elementToRemove;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the element to remove : ");
    scanf("%d", &elementToRemove);
    removeElement(array,&n,elementToRemove);
    printf("Final array after removing %d : ",elementToRemove);
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}

void removeElement(int array[],int *size,int remove){
    
    int i,j;
    while(i< *size){
        if(array[i]==remove){
            for(j=i;j< *size;j++){
                array[j]=array[j+1];
            }
            (*size)--;
        }else{
            i++;
        }
    }
}
