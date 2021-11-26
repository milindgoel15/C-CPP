#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the value of a: "; // printf("Enter a: ");
    cin >> a; // scanf("%d", &a);

    cout << "Enter the value of b: ";
    cin >> b;
    
    c = a + b;
    printf("Addition result: %d \n", c);

    c = a - b;
    printf("Subtraction result: %d \n", c);

    c = a * b;
    printf("Multiplication result: %d \n", c);

    c = a / b;
    printf("Division result: %d \n", c);

    return 0;

}