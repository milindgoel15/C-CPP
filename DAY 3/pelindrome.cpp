#include <stdio.h>

int main() {
    int n, num, rev = 0, digit;

    printf("Enter your desired number: ");
    scanf("%d", &num);

    n = num;

    do {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    if (n == rev) {
        printf("\n%d is a pelindrome number.", n);
    }
    else {
        printf("\n%d is not a pelindrome number.", n);
    }
}