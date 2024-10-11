/*q1
#include<stdio.h>
int factorial(int a);
int main()
{
    int x,y;
    printf("enter a number");
    scanf("%d",&x);
    y=factorial(x);
    printf("%d",y);
    return 0;
}

int factorial(int a)
{
    int b,c;
    c=1;
    for(b=1;b<=a;b++)
    {
        c=c*b;

    }
    return c;
}
*/

/*q2 and 3
#include<stdio.h>
int fact(int n)
{
   int i,f;
   for (i=1,f=1;i<=n;i++)
   {
      f=f*i;
   }
   return f;
}
int combination(int n,int r)
{
   return fact(n)/(fact(n-r)*fact(r));
}

int arrangement(int n,int r)
{
   return fact(n)/fact(n-r);

}

int main()
{
   int x,y;
   printf("enter the value of n and r");
   scanf("%d %d",&x,&y);
   printf("%d\n%d",combination(x,y),arrangement(x,y));
}
*/

/*mineq2
#include<stdio.h>
int combination (int n,int r)
{
   int b,fn,fc,fr,c,combination;
   
   c=n-r;
   for(b=1,fn=1;b<=n;b++)
   {
      fn=fn*b;
   }
    for(b=1,fc=1;b<=c;b++)
   {
      fc=fc*b;
   }
    for(b=1,fr=1;b<=r;b++)
   {
      fr=fr*b;
   }
   
   combination=fn/(fr*fc);
    
   return combination;
   
}

int main ()
{
   int x,y;
   printf("enter the value of n and r");
   scanf("%d %d",&x,&y);
   printf("%d",combination(x,y));
   return 0;
}
*/

/*q3
#include<stdio.h>

int arrangement(int n,int r)
{
   int c,b,fn,p;
   c=n-r;
   for(b=1,fn=1;b<=n;b++)
   {
      fn=fn*b;
   }
    for(b=1,p=1;b<=c;b++)
   {
      p=p*b;
   }
   return fn/p;
}

int main()
{
   int x,y;
   printf("enter the value of n and r");
   scanf("%d %d",&x,&y);
   printf("%d",arrangement(x,y));
   return 0;
}
*/
/*q4
#include<stdio.h>
int checkingdigit(int a,int b);
int main()
{
   int x,y,z;
   printf("enter the number");
   scanf("%d %d",&x,&y);
   z=checkingdigit(x,y);
   if(z==1)
   {
      printf("it is in giving digit");
   }
   else
   {
      printf("it is not in giving digit");

   }
   return 0;
}

int checkingdigit (int a,int b)

{  

   int c,d,e,f,g;
   
   
   e=a;
   for(c=0;a>0;c++)
   {
      a=a/10;
   }
   a=e;
   for(d=1;d<=c;d++)
   {
      g=a%10;
      a=a/10;
      if(b==g)
      {
         f=1;
         break;
      }
      
   }
   if(d>c)
   {
      f=0;
   }
   

   return f;
   
}
*/
/*
#include<stdio.h>
void factor(int a);
int main()
{
   int x;
   printf("enter the number");
   scanf("%d",&x);
   factor(x);
   return 0;
}

void factor(int a)

*/
/*q5
#include<stdio.h>
void factor(int a);
int main()
{  
   int x;
   printf("enter the number");
   scanf("%d",&x);
   factor(x);
   return 0;


}
void factor(int a)

{
    int b,c,e,f;
   
    e=a;
    c=1;
    f=a;
    for(b=2;c<a;b++)
    {  
       a=f;
        while(a%b==0)
        {
            
            c=c*b;
            a=a/b;
            f=a;
            printf("%d",b);
        }
        a=e;
        
    }
    
}

/*sir bala
void factorization(int n)
{
   int i=2;
   while(n>1)
   {
      while(a%i==0)
      {
         printf("%d",i);
         n=n/i;
      }
      i++;
   }
}
*/
