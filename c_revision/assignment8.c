#include <stdio.h>

void q1(int data)
{
    // whether a number is three digit or not
    if (data >= 100 && data <= 999)
        printf("\nyes");
    else
        printf("\nno");
}

void q2(int a, int b)
{
    // print the greater or same number among two number

    printf("%d", a > b ? a : b);
}

void q3(int a,int b,int c)
{
    // check whether root of given quarditic equation are real and distinct,real &equal or imaginary root
    int d;
    d=b*b-4*a*c;
    if(d>0)
      printf("real and distinct");
    else if(d==0)
      printf("real and equal");
    else
       printf("imaginary root");

}

void q4(int year)
{
    // check if a year is leap year or not
    if (year % 100 == 0 && year % 400 == 0)
        printf("yes");
    else if (year % 100 != 0 && year % 4 == 0)
        printf("yes");
    else
        printf("no");
}

void q5(int a, int b, int c)
{

    // print the greater or same number among two number
    int d;
    d = a > b ? a : b;
    printf("%d", d > c ? d : c);

    /*
    // without using fourth variable

    if(a>=b && a>=c)
       printf("%d",a);
    else if(b>=a && b>=c)
        printf("%d",b);
    else if(c>=a && c>=b)
         printf("%d",c);
         */
}
int main()
{
    q5(85, 85, 85);
    return 0;
}