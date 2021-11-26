#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("The values of a and b before swapping are: %d & %d\n\n", a,b);
    
    c = a;
    a = b;
    b = c;
    
    printf("The values of a and b after swapping are: %d & %d", a,b);
}