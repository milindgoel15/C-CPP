#include <stdio.h>

int main() {
    int arr[4][2] = {10,20,30,40,50,60,70}; // the last value if it's left gets a zero value (e.g {10,20,30,40,50,60,70,0})
    int i, j;

    for (i = 0; i < 4; i++) {
        printf("\n"); // \n for new line

        for (j = 0; j < 2; j++) {
            printf("%d\t", arr[i][j]); // \t for tab spaces between text
        }
    }
}