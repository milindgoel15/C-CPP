#include <stdio.h>

int main() {
    int number;

    printf("Enter your initial number: ");
    scanf("%d", &number);

    do {
        printf("First 100 numbers in descending order are: %d\n", number);
        number--;
    }
    while (number >= 1);
}