#include<stdio.h>

int q1(int n)
{
  //sum of three digit
     if(n<9)
       return n;
     
    return n%10+q1(n/10);
      
}

void q2()
{
    //ascii codde of '+'
    printf("%d",'+');
}

void q3()
{
    //print size of char, int,float type variable;
    printf("%lu %lu %lu",sizeof(char),sizeof(int),sizeof(float));
    
}

void q4(int data)
{
    //replace the last digit with 0
    printf("%d",data/10*10);
}

void q5(int data,int digit)
{
    //apend a digit in the number 253 9=2539
    printf("%d",digit+data*10);
}

int main()
{
   // printf("%d",q1(567));
   q5(256,3);
    return 0;
}