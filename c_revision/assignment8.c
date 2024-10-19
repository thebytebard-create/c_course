#include<stdio.h>

void q1(int data)
{
    // whether a number is three digit or not
    if(data>=100 && data <=999)
   printf("\nit is three digit number");
   else
      printf("\nit is not three digit number");
}

void q2(int a,int b)
{
    //print the greater or same number among two number
   
   printf("%d",a>b?a:b);
}

void q5(int a,int b,int c)
{
    /*
    //print the greater or same number among two number
    int d;
   d=a>b?a:b;
   printf("%d",d>c?d:c);
   */
   
   if(a>=b && a>=c)   
      printf("%d",a);                                       
   else if(b>=a && b>=c)  
       printf("%d",b);                                               
   else if(c>=a && c>=b)
        printf("%d",c);
}
int main()
{
  q5(85,85,85) ; 
    return 0;
}