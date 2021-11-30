#include <stdio.h>

int main() {
    int sum = 0, result, i, a[5];
    float avg;

    printf("Enter your numbers: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("These numbers are: ");

    for (i = 0; i < 5; i++) {
        printf("%d  ", a[i]);
        sum += a[i];
    }

    avg = (float)sum / 5;
    printf("\nThe average of such array is: %f", avg);
}