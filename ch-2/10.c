// Create a program to swap two numbers.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of a = %d\nThe value of b = %d", a, b);
    return 0;
}