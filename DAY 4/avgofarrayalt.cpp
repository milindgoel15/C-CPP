#include <stdio.h>

int main() {
    int marks[10], i, num, sum = 0;
    float avg;

    printf("Enter total number of elements: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("Enter %d number: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    avg = (float)sum / num;

    printf("The average of such numbers shall be: %f", avg);
}
