#include<stdio.h>

void q1()
{
     //print mysirg ten times
     int i;
     for(i=0;i<10;i++)
     printf("\nMysirg");
}

void q2()
{
     //print natural number till 10
   int i;
     for(i=0;i<10;i++)
     printf("\n%d",i+1);
}

void q3()
{
     //print 10 natural number in reverse order
   int i;
     for(i=10;i>0;i--)
     printf("\n%d",i);
}

void q4()
{
   //print 10 first odd number 
   int i;
     for(i=1;i<20;i+=2)
     printf("\n%d",i);
}

void q5()
{
     //print 10 first odd number in reverse order
     int i;
     for(i=19;i>0;i-=2)
     printf("\n%d",i);
}

void q6()
{
    //print 10 first even number 
   int i;
     for(i=2;i<=20;i+=2)
     printf("\n%d",i);
}

void q7()
{
   //print 10 first even number in reverse order
     int i;
     for(i=20;i>0;i-=2)
     printf("\n%d",i);
}

void q8()
{
    //print square number till 10
   int i;
     for(i=1;i<=10;i++)
     printf("\n%d",i*i);
}

void q9()
{
    //print cube number till 10
   int i;
     for(i=1;i<=10;i++)
     printf("\n%d",i*i*i);
}

void q10()
{
   //print table of 5
   int i;
     for(i=1;i<=10;i++)
     printf("\n%d",5*i);
}

int main()
{
     q8();
      q9();
       q10();
      
     return 0;
}