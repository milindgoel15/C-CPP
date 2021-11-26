#include <stdio.h>

int main() {
    int i;

    printf("Enter your initial number: ");
    scanf("%d", &i);

    for (i = 0; i <= 100; i = i + 2 ) {
        printf("First 100 even numbers are: %d\n", i);
    }
}