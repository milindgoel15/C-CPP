#include <stdio.h>

int main() {
    int number;

    printf("Enter your initial number: ");
    scanf("%d", &number);

    while (number <= 100) {
        printf("First 100 numbers using while loop: %d \n", number);
        number++;
    }
}