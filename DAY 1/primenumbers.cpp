#include <iostream>

int main() {
    int number = 0;
    bool isPrime = true;

    printf("Enter your number: ");
    scanf("%d", &number);

    if (number == 0 || number == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = false;
            }
        }
    }

    if (isPrime) {
        printf("\n%d is a prime number.", number);
    }
    else {
        printf("\n%d is not a prime number.", number);
    }
}
