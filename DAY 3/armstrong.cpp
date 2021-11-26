#include <stdio.h>

int main() {
    int originalNum, result = 0, num, remainder;

    printf("Enter a 3-digit number: ");
    scanf("%d", &originalNum);
    num = originalNum;

    while (num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }

    if (originalNum == result) {
        printf("%d is an armstrong number.", result);
    }
    else {
        printf("%d is not an armstrong number.", result);
    }
}