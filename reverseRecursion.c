/*Author       : Anna Tony
  Date         : 26-03-2025
  Description  : reverse a string using recursion 
  Version      : 1.0  */
#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    if (start>=end) {
        return;
    }
    char temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    reverseString(str,start+1,end-1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    int length=strlen(str);
    reverseString(str,0,length - 1);
    printf("Reversed string: %s\n", str);

    return 0;
}
