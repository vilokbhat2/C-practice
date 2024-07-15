#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');  // Convert to lowercase manually
        printf("%c\n", ch);
    } else {
        printf("non alphabetic character.\n");
    }

    return 0;
}