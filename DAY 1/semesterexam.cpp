#include <stdio.h>

int main() {
    int attendance;

    printf("Enter your attendance: ");
    scanf("%d", &attendance);

    if (attendance >= 75) {
        printf("You are eligible for semester exams.");
    }
    else {
        printf("Sorry, You are not eligible.");
    }
}