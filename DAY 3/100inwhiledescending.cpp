#include <stdio.h>

int main() {
    int number;

    printf("Enter your initial number: ");
    scanf("%d", &number);

    while (number >= 1) {
        printf("First 100 numbers using while loop in descending order: %d \n", number);
        number--;
    }
}