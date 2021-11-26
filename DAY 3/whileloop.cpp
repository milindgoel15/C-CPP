#include <stdio.h>

int main() {
    int number;

    printf("Enter your initial number: ");
    scanf("%d", &number);

    while (number <= 10) {
        printf("Value of a: %d \n", number);
        number++;
    }
}