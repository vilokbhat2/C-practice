#include <stdio.h>
int main() {
    char input;
    printf("Enter input ");
    scanf(" %c", &input);
    if (input >= '0' && input <= '9') {
        printf("%c is an integer in the range 0-9.", input);
    } else {
        printf("%c is a character.\n", input);
    }
    return 0;
}