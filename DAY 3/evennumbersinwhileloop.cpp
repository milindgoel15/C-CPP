#include <stdio.h>

int main() {
    int i;

    printf("Enter your initial number: ");
    scanf("%d", &i);

    while (i <= 100) {
        printf("First 100 numbers using while loop: %d \n", i);
        i = i + 2;
    }
}