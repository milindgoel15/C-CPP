#include <stdio.h>

int main() {
    int values[5];

    printf("Enter your numbers: ");
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &values[i]);
    }

    printf("These numbers are: "); 

    for (int i = 0; i < 5; i++) {
        printf("%d  ", values[i]);
    }
}