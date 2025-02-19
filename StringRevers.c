//author Anna Tony
//reverse a string 
#include<stdio.h>
int main(){
	char str[50],temp;
	int i,length,j;
	printf("Enter a string (max 50) :");
	fgets(str,sizeof(str),stdin);
	for(length=0;str[length]!='\0';length++);
	i=length-1;
	for(j=0;j<length/2;j++){
	    temp=str[i];
	    str[i]=str[j];
	    str[j]=temp;
	    i--;
	 }
	printf("\n Reverse of the given string : %s\n",str);
	return 0;
}
