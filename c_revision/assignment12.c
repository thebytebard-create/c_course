#include<stdio.h>

void q1()
{
     //print mysirg n times
     int i;
     int n;
     printf("enter the number : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     printf("\nMySirG");
}

void q2()
{
     //print natural number till n
   int i;
    int n;
  printf("enter the number : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     printf("\n%d",i+1);
}

void q3()
{
     //print n natural number in reverse order
   int i;
    int n;
  printf("enter the number : ");
     scanf("%d",&n);
     for(i=n;i>0;i--)
     printf("\n%d",i);
}

void q4()
{
   //print n first odd number 
   int i;
    int n;
  printf("enter the number : ");
     scanf("%d",&n);
     for(i=1;i<n*2;i+=2)
     printf("\n%d",i);
}

void q5()
{
     //print n first odd number in reverse order
     int i;
      int n;
  printf("enter the number : ");
     scanf("%d",&n);
     for(i=n*2-1;i>0;i-=2)
     printf("\n%d",i);
}

void q6()
{
    //print n first even number 
   int i;
    int n;
  printf("enter the number : ");
     scanf("%d",&n);
     for(i=2;i<=n*2;i+=2)
     printf("\n%d",i);
}

void q7()
{
   //print n first even number in reverse order
     int i;
      int n;
  printf("enter the number : ");
     scanf("%d",&n);
     for(i=n*2;i>0;i-=2)
     printf("\n%d",i);
}

void q8()
{
    //print square number till n
   int i;
    int n;
  printf("enter the number : ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     printf("\n%d",i*i);
}

void q9()
{
    //print cube number till n
   int i;
    int n;
  printf("enter the number : ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     printf("\n%d",i*i*i);
}

void q10()
{
   //print table of n
   int i;
    int n;
  printf("enter the number : ");
     scanf("%d",&n);
     for(i=1;i<=10;i++)
     printf("\n%d",n*i);
}

int main()
{
    q5();
           return 0;
}