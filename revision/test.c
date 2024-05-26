#include<stdio.h>
#include<string.h>
int main() {
    // Given string to reverse
    char str[] = "Hello, World!";
    
    // Get the length of the string
    int length = strlen(str);
    
    // Reverse the string by swapping characters
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i]; // Temporary variable for swapping
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}