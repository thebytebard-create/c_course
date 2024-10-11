#include<stdio.h>

void betweenprime(int a,int b)
{
    int i;
    a=a+1;
    while(a<b)
    {
        for(i=2;i<=a;i++)
        {
            if(i==a)
            {
                printf("%d",i);
            }
            if(a%i==0)
            {
                break;
            }
            
        }
        a++;
    }
}
 
 void fibonacci(int n)
 {
    int i,a,c,b;
    a=1,b=-1;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d",c);
        b=a;
        a=c;
    }
 }

void armstrong( int a,int b)
{
    int c,d,e,f,g,h,i;  
   while(a<b)
   {
   d=a;
   i=0;
   for(c=0;a>0;c++)
   {
      a=a/10;
   }
   a=d;
   for(e=1;e<=c;e++)
   {
      f=a%10;
      a=a/10;
      for(g=1,h=1;g<=c;g++)
      {
        h=h*f;
      }
      i=i+h;
   }
   if(i==d)
    printf("%d\t",i);  
   a=d;
   a++;
   }
  
}
int fact( int i)
{
   int b=1;
   while(i>0)
   {
      b=b*i;
      i--;

   }
   return b;
}
int series(int n)
{
   int k=0;
  
   while(n>0)
   {
      k=k+fact(n)/n;
      n--;
   }
   return k;

}
 int combi( int n,int r)
{
   return fact(n)/(fact(n-r)*fact(r));
   
}
void pascal( int q)
{
   int i,k,p,x,y;
   x=0;
 for(i=1;i<q+1;i++)
 {
  for(k=q;k>i;k--)
  {
    printf(" ");
  }
  y=0;
  
  for(p=0;p<i;p++)
  {
    printf("%d ",combi(x,y));
    y++;
  }
  x++;
  printf("\n");
 }
}

int main()
{
    int p;
    printf("enter the number of lines");
    scanf("%d",&p);
  printf("%d",series(p));
    return 0;
}