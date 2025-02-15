//author Anna Tony 
//date 15/02/2025
//string length without using built in function
#include<stdio.h>
int main(){
	char str[50];
	int i=1,length=0;
	printf("Enter a string (max 50) :");
	fgets(str,sizeof(str),stdin);
	while(str[i]!='\0'){
		length++;
		i++;
	}
	printf("\nThe length of given string is : %d\n",length);
	return 0;
}
