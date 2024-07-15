#include <stdio.h>

int main() {
    char ch1, ch2;
    int count=0;
    printf("Enter the character 1");
    scanf("%c",&ch1);
    printf("Enter the character 2");
    scanf("%c",&ch2);
    if (ch1 < ch2) {
        for (char c = ch1 + 1; c < ch2; c++) {
            count++;
        }
    } else if (ch1 > ch2) {
        for (char c = ch2 + 1; c < ch1; c++) {
            count++;
        }
    } else {
        printf("Both characters are the same.\n");
        return 0;
    }

    printf("%d character present\n",count);

    return 0;
}