#include <stdio.h>
#define BUFFER_SIZE 1024

int main() {

    char s[BUFFER_SIZE];
    printf("Input the string (Max size is 1024 characters): ");
    fgets(s, BUFFER_SIZE, stdin);


    char reverse[BUFFER_SIZE];
    int slength = strlen(s);

    for(int i = 0; i < slength; i++) {
        reverse[i] = s[slength-i-1];
    }

    printf("Original: %s", s);
    printf("Reversed: %s", reverse);  

    return 0;
}
