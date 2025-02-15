//author Anna Tony 
//date 15/02/2025
//Compare strings without using built in function
#include<stdio.h>
int main(){
	char str1[20],str2[20];
	int i,length1=0,length2=0;
	printf("Enter first string (max 20) :");
	scanf("%s",str1);
	printf("Enter second string (max 20) :");
	scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++){
	    length1++;
    }
    for(i=0;str2[i]!='\0';i++){
	    length2++;
    }
	if(length1!=length2){
	    printf("The given string are not equal.");
	    return 0;
	}
	for(i=0;i<length1;i++){
	    if(str1[i]>str2[i]){
            printf("First string is greater.");
            return 0;                     
	    }
	    else if(str1[i]<str2[i]){
            printf("Second string is greater.");
            return 0; 	        
	    }
	}
	printf("The strings are equal.");
	return 0;
}
