/*Author       : Anna Tony
  Date         : 22-02-2025
  Description  : Count number of words in string
  Version      : 1.0  */
#include<stdio.h>
int main(){
    char str[100];
    int i,count=0;
    printf("Enter the string (max 100) : ");
    fgets(str,sizeof(str),stdin);
    for (i=0;str[i]!='\0';i++){
        if(str[i]==' '||str[i]== ','||str[i]=='.'){
            count++;
        }
    }
    printf("Number of words in the given string = %d",count+1);
return 0;
}
