//author Anna Tony 
//date 15/02/2025
//string concatenation without using built in function
#include<stdio.h>
int main(){
	char str1[40],str2[20];
	int i=0,j;
	printf("Enter a string (max 20) :");
	scanf("%s",&str1);
	printf("Enter a string (max 20) :");
	scanf("%s",&str2);
	while(str1[i]!='\0'){
	    i++;
	}
    for(j=0;str2[j]!='\0';j++){
	         str1[i++]=str2[j];
	}
	str1[i]='\0';
	printf("\nString after concatenation : %s\n",str1);
	return 0;
}
