#include <stdio.h>

int main() {
    int number;

    printf("Enter your initial number: ");
    scanf("%d", &number);

    do {
        printf("First 15 numbers are: %d\n", number);
        number++;
    }
    while (number <= 15);
}