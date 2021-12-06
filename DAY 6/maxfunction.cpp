#include <stdio.h>

int result; // We can declare this var either globally or locally inside a function

int max(int num1, int num2); // function declaration

int main() {
    int a = 100, b = 200;

    result = max(a,b);    // calling the function

    printf("The max value of such numbers is: %d", result);
}

int max(int num1, int num2) {   // function
    if (num1 > num2) {
        result = num1;
    }
    else {
        result = num2;
    }
    return result;
}