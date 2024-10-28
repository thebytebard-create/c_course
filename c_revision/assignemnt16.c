#include<stdio.h>

void q1()
{
    //find nth term of fibonacci
    
    int a=0,b=1,c,i,n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
      c=a+b;
      a=b;
      b=c;
    }
    printf(" %d",a);
}

void q2()
{
    //find n terms of fibonacci
    
    int a=0,b=1,c,i,n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf(" %d",a);
      c=a+b;
      a=b;
      b=c;
     
    }
    
}

void q3()
{
    //find if it is fibonacci or not
    
    int a=0,b=1,c,i,n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=0;a<=n;i++)
    {
      if(a==n)
      {
      printf(" yes");
      break;
      }
      c=a+b;
      a=b;
      b=c;
     
    }
    if(a>n)
    printf("no");
}



void q4()
{
  //check whether a number is armstrong or not
   int temp,d=0,n,i,j,k,sum=0,s=1;
    printf("enter the number : ");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
      d++;
      temp/=10;
    }

    temp=n;
    for(i=0;i<d;i++)
    {
      k=temp%10;
      temp/=10;
      s=1;
      for(j=0;j<d;j++)
        s*=k; 
         sum+=s;   
    }
    if(sum==n)
    printf("yes");
}

void q5()
{
  //armstrong number from 1 to 1000
  int n,t;
  printf("enter the number : ");
    scanf("%d",&t);
 for(n=1;n<=t;n++)
 {
  int temp,d=0,i,j,k,sum=0,s=1;
    temp=n;
    while(temp>0)
    {
      d++;
      temp/=10;
    }

    temp=n;
    for(i=0;i<d;i++)
    {
      k=temp%10;
      temp/=10;
      s=1;
      for(j=0;j<d;j++)
        s*=k; 
         sum+=s;   
    }
    if(sum==n)
    printf("  %d",n);
 }
  
}
    
int main()
{
    q5();
    return 0;
}