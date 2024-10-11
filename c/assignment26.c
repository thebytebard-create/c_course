#include<stdio.h>
//q1
void evenr(int n)
{
    if(n>0)
    {
        printf("%d",n*2);
        evenr(n-1);
    }
}
//q2
void square(int n)
{
    if(n>0)
    {
        sqaure(n-1);
        printf("%d",n*n);
    }
}
//q3
void binary(int n)
{  
      if(n>0)
      {
        binary(n/2); 
        printf("%d",n%2);
      }
}
//q4
void octal(int n)
{  
      if(n>0)
      {
        octal(n/8); 
        printf("%d",n%8);
      }
}
//q5
void reverse(int n)
{  
      if(n>0)
      {
         printf("%d",n%10);
        reverse(n/10);
      }
}

int main()
{
    reverse(46);
    return 0;
}