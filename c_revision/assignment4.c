#include <stdio.h>
void q1(char s)
{
    // size of charcter constant
    printf("\n%d", sizeof(s));
}

void q2(int s)
{
    // size of real constant
    printf("\n%d", sizeof(s));
}

void q3()
{
    // increase A to B using increament operator
    char r = 'A';
    printf("\nthe increased value of A : %c", r + 1);
}

void q4(int a, int b)
{
    // swap value of two in variable
    int c;
    c = a;
    a = b;
    b = c;
    printf("\nthe swaped values : %d %d", a, b);
}

void q5(int a, int b)
{
    // swap two values without using third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nthe swaped values : %d %d", a, b);
}

void q6(int a, int b)
{
    // swap two variable without using above  method
    a = a * b;
    b = a / b;
    a = a / b;
    // this method will not work if one number is 0

    printf("\nthe swaped values : %d %d", a, b);
}

void q7(int a, int b)
{
    // swap two variable without using above  method (this means w will be using bitwise operator)
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nthe swaped values : %d %d", a, b);
}

void q8(int a, int b)
{
    // swap two variable without using above method
    a = (a + b) - (b = a);
    printf("\nthe swaped values : %d %d", a, b);
}

int main()
{
    q8(6, 7);
    q7(6, 7);
    q6(6, 7);
    q5(6, 7);
    q4(6, 7);
    return 0;
}