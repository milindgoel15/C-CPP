#include <stdio.h>

int main() {
    int* ab, b;

    b = 22;
    printf("Address of B: %p\n", &b);
    printf("Value of B: %d\n\n", b);

    ab = &b;
    printf("Address of pointer ab: %p\n", ab);
    printf("Value of pointer ab: %d\n\n", *ab);

    *ab = 2;
    printf("Address of B: %p\n", &b);
    printf("Value of B: %d\n\n", b);

    b = 11;
    printf("Address of pointer ab: %p\n", ab);
    printf("Value of pointer ab: %d\n\n", *ab);
}