// Program for nested if else

#include <stdio.h>

int main() {
    int age;

    printf("Enter your current age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("\nYou are currently a minor. Therefore, You are not fit to work currently at our organization.");
    }
    else {
        if (age >= 18 && age < 50) {
            printf("\nYou are eligible to apply at our organization. Visit our website for job application.");
        }
        else {
            printf("\nSorry, you are not eligible!\n\nYou can ready for your retirement with gratuity and pension. ");
        }
    }
}