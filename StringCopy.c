//author Anna Tony 
//date 15/02/2025
//string copy without using built in function
#include<stdio.h>
int main(){
	char source[50],destination[55];
	int i=0;
	printf("Enter a string (max 50) :");
	fgets(source,sizeof(source),stdin);
	while(source[i]!='\0'){
		destination[i]=source[i];
		i++;
	}
	destination[i]='\0';
	printf("\nThe copied string is : %s\n",destination);
	return 0;
}
