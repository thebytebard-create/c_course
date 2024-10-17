#include<stdio.h>
void q1(char a)
{
    //find the ascii number of character
   printf("\n%d",a);

}

void q2(int a)
{
   //find the character of ascii code
   printf("\n%c",a);
}

void q3(char a,char b,char c)
{
    //print ascii code of charcter and characters as well
    printf("\n%c = %d\n%c = %d\n%c = %d",a,a,b,b,c,c);
}

void q4(int a)
{
    //print last digit of a number
    printf("\nthe last digit of a number : %d",a%10);
}

void q5(int a)
{
    //print the number without lasst digit
    printf("\nthe number without last digit : %d",a/10);
}

int main()
{
    q1('a');
    q2(97);
    q3('a','b','c');
    q4(8569);
    q5(8569);
    return 0;

}