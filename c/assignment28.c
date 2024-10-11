#include<stdio.h>
//q1
int factorial(int n)
{
    if(n==1)
    return 1;
    return n*factorial(n-1);
}
//q2
int hcf(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
        return b;
        else
        return hcf(a%b,b);

    }
    else
    {
        if(b%a==0)
        return a;
        else
        return hcf(b,b%a);

    }
    
} 
//q3
 int fib(int n)
 {
    if(n==1 || n==0)
        return n;
    return fib(n-1)+fib(n-2);    
    
 }
 void printfib(int n)
 {
    int i;
    for(i=1;i<n;i++)
    printf("%d",fib(i));
 }
//q4
 int digit(int n)
 {
    if(n==0)
    return 0;
    return 1+digit(n/10);
 }
 //q5
 int power(int a,int n)
 {
    if(n==0)
    return 1;
    return a*power(a,n-1);
 }

int main()
{
    printf("%d",hcf(28,36));
  // printfib(9);
    return 0;
}