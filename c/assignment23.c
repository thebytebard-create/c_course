#include<stdio.h>

int lcm(int a,int b)
{
    int t;
    t=a<b?a:b;
    while(1)
    {
        if(t%a==0 && t%b==0)
        {
            break;
        }
        t++;
    }
   
    return t;
}



int hcf(int a,int b)
{
    int t,k;
    t=a<b?a:b;
      while(t>0)
    {
        if(a%t==0 && b%t==0)
        break;
        t--;
    }
    return t;
}


int checkprime(int a)
{
    int b;
    for(b=2;b<a;b++)
    {
        if(a%b==0)
        {
            break;
        }
        
    }
    if(b==a)
       return 1;
    else
          return 0;
        
        
}
/*sir bala
int isprime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {

        if(a%i==0)
        return 0;
    }
    return 1;
}
*/
int nextprime(int a)
{
    int b,c;
    a=a+1;
    while(1)
    {
    for(b=2;b<a;b++)
    {
        if(a%b==0)
        {
            break;
        }
        
    }
    if(a==b)
    {
      
      return a; 
    }
    a++;
    }  
   
}

/*
int nprime(int a)
{
    while(!isprime(++a));
    return a;
} 
void nprime(int a)
{
    int b,c=2;
   while(a>0)
    {
    for(b=2;b<=c;b++)
    {
         if(b==c)
    {
      printf("%d\t",c);
       c++;
       break;
    }
        if(c%b==0)
        {
            c++;
            b=2;  
        }
    }
    a--;
    }  
}
*/

void nprime( int a)
{
   int i=2,x;
   
        for(x=1;x<=a;x++)
        {
           printf("%d",i);
           i=nextprime(i);
          
        }


}
int main()
{
    int x;
    printf("enter a number number");
    scanf("%d",&x);
    nprime(x);
  
    return 0;
}
