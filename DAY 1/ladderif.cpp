#include <stdio.h>

int main() {
    int input = 0;

    printf("Enter your marks: ");
    scanf("%d", &input);

    if (input >= 90) {
        printf("You have been awarded A grade.");
    }
    else if (input >= 80 && input < 90) {
        printf("You have been awarded B grade.");
    }
    else if (input >= 70 && input < 80) {
        printf("You have been awarded C grade.");
    }
    else if (input >= 60 && input < 70) {
        printf("You have been awarded D grade.");
    }
    else if (input >= 50 && input < 60) {
        printf("You have been awarded E grade.");
    }
    else {
        printf("You have failed this exam.");
    }
}