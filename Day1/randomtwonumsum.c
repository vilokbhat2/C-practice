#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int num1 = rand()% 100;
    int num2 = rand()% 100;
    printf("Random number 1: %d\n", num1);
    printf("Random number 2: %d\n", num2); 
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
    return 0;
}