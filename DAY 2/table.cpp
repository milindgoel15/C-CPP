#include <stdio.h>

int main() {
    int number;

    printf("Enter your number to get the table: ");
    scanf("%d", &number);

    printf("The table of %d is: \n", number);
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, (number*i));
    }
}