// circle, rectangle, square, triangle

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    c = 3.14 * a * a;
    printf("The area of the circle: %d \n", c);

    c = a * b;
    printf("The area of the rectangle: %d \n", c);

    c = 0.5 * a * b;
    printf("The area of the triangle: %d \n", c);

    c = a * a;
    printf("The area of the square: %d \n", c);
}