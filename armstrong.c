#include<stdio.h>
int main(){
    int inputNumber,copyNumber,reminder,x=0;
    printf("Enter a number : ");
    scanf("%d",&inputNumber);
    copyNumber=inputNumber;
    while(copyNumber>0){
        reminder=copyNumber%10;
        x=x+reminder*reminder*reminder;
        copyNumber=copyNumber/10;
    }
    if(x==inputNumber){
        printf("%d is a armstrong !",inputNumber);
    }else{
        printf("%d is not armstrong !",inputNumber);
    } 
return 0;
}
