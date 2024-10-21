#include <iostream>
using namespace std;

// program of recursion

int q1(int n)
{
    // sum of first n natural numbers
    if (n > 0)
        return n + q1(n - 1);
    return 0;
}

int q2(int n)
{
    // sum of first n odd numbers
    if (n > 0)
        return 2 * n - 1 + q2(n - 1);
    return 0;
}

int q3(int n)
{
    // sum of first n even numbers
    if (n > 0)
        return 2 * n + q3(n - 1);
    return 0;
}

int q4(int n)
{
    // sum of first n squares
    if (n > 0)
        return n * n + q4(n - 1);
    return 0;
}

int q5(int n)
{
    // sum of first n factorial
    if (n > 1)
        return n * q5(n - 1);
    return 1;
}

int q6(int n)
{
    // sum of digits of given number
    if (n > 9)
        return n % 10 + q6(n / 10);
    return n % 10;
}

void q7(int n)
{
    // octal number
    if (n >= 2)
         q7(n / 2);
    cout<<" "<<n % 2;
}

int q9(int n)
{
    //nth fibonacci term
    if(n<=1)
    return n;
    return q9(n-1)+q9(n-2);
}

int q10(int x,int y)
{
    //calculate x poer y
    if(y>1)
       return x*q10(x,y-1);
     return x;   

}
int main()
{
   cout<< q9(0);
    return 0;
}