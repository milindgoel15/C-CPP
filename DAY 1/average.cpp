#include <stdio.h>

int main() {
    int sum = 0; 
    int list = 0; 
    int total = 0;
    int counter = 0;
    float avg = 0.0;

    printf("Enter total number of values: ");
    scanf("%d", &total);

    for (counter = 0; counter < total; counter++) {
        printf("Enter the values: ");
        scanf("%d", &list);
        sum += list;
    }
    
    avg = (float) sum / (float) total;
    printf("The average of such values shall be: %f", avg);
    
    return 0;
}