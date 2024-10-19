#include<stdio.h>

void q1(int n)
{
   n>0?printf("positive"):printf("negative");
}

void q2(int n)
{
    // check whether a number is divisible by 4 or not
    
    n%5==0?printf("yes"):printf("no");
    
}

void q3(int n)
{
     //ceck whether a number is even or not
     n%2==0?printf("yes"):printf("no");
}

void q4(int s)
{
    s=s/2;
    s=s*2;
     if(s==s)
  {
    printf("%d",s);
  }
  else
  {
    printf("%d",s);
  }  
}

void q5()
{
    int a=0,b=1,c;
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
}

int main()
{
     q5(5);
   return 0; 
}