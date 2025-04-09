/*Author       : Anna Tony
  Date         : 26-03-2025
  Description  : 
  Version      : 1.0  */
#include <stdio.h>

int main() {
    FILE *inFile, *oddFile, *evenFile;
    int num;

    // Open files
    inFile = fopen("number.txt", "r");
    oddFile = fopen("odd.txt", "w");
    evenFile = fopen("even.txt", "w");

    // Check if input file opened successfully
    if (inFile == NULL) {
        printf("Error: Cannot open number.txt\n");
        return 1;
    }

    // Read numbers using !feof()
    while (!feof(inFile)) {
        fscanf(inFile, "%d", &num);
        if (!feof(inFile)) {  // To avoid reading garbage at the end
            if (num % 2 == 0)
                fprintf(evenFile, "%d\n", num);  // Write even
            else
                fprintf(oddFile, "%d\n", num);   // Write odd
        }
    }

    // Close all files
    fclose(inFile);
    fclose(oddFile);
    fclose(evenFile);

    printf("Numbers have been separated into odd.txt and even.txt\n");

    return 0;
}