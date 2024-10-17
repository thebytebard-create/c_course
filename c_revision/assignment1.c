#include <stdio.h>
int main()
{
    printf("Hello");
    printf("\nHello\nStudens");
    printf("\nMySirG");
    printf("\n\\n");
    printf("\n\\r");
    int a, b;
    printf("\n enter two number for sum : ");
    scanf("%d %d", &a, &b);
    printf("\nsum of two number : %d", a + b);
    printf("\n enter a number for square : ");
    scanf("%d", &a);
    printf("the square of number is : %d", a * a);
    printf("\n enter the length and breadth of rectangle : ");
    scanf("%d %d", &a, &b);
    printf("\n the area of rectangle : %d", a * b);
    printf("\n enter the radius of circle : ");
    scanf("%d", &a);
    printf("\n the area of circle : %.2f", 3.14 * a * a);

    return 0;
}