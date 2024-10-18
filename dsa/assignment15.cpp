#include<iostream>
using namespace std;
// recursion program 

void q1(int n)
{
   //print n natural numbers
   if(n>1)
   q1(n-1);
   cout<<" "<<n;
}

void q2(int n)
{
   //print n natural numbers in reverse order
   cout<<" "<<n;
   if(n>1)
   q2(n-1);

}

void q3(int n)
{
    //first n odd numbers
    if(n>1)
   q3(n-1);
   cout<<" "<<(2*n)-1;
   
}

void q4(int n)
{
    //first n odd numbers in reverse order
    cout<<" "<<(2*n)-1;
    if(n>1)
   q4(n-1);
}

void q5(int n)
{
    //first n even numbers
    if(n>1)
   q5(n-1);
   cout<<" "<<2*n;
   
}

void q6(int n)
{
    //first n even numbers in reverse order
    cout<<" "<<2*n;
    if(n>1)
   q6(n-1);
}

void q7(int n)
{
    //first n square numbers
    if(n>1)
   q7(n-1);
   cout<<" "<<n*n;
   
}

void q8(int n)
{
    //first n square numbers in reverse order
    cout<<" "<<n*n;
    if(n>1)
   q8(n-1);
}

void q9(int n)
{
    //first n cubes numbers
    if(n>1)
   q9(n-1);
   cout<<" "<<n*n*n;
   
}

void q10(int n)
{
    //first n cubes in reverse order
    cout<<" "<<n*n*n;
    if(n>1)
   q10(n-1);
}

int main()
{
    q9(5);
    q10(5);
    return 0;
}