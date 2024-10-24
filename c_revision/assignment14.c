#include<stdio.h>
void q1()
{
   //factorial of a number
   int n,i,f=1;
   printf("enter the number : ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
    f=f*(i+1);
   printf("factorial of %d : %d",n,f);
}

void q2()
{
   //count the digits in a given number
    int n,i,no;
   printf("enter the number : ");
   scanf("%d",&n);
   no=n;
   for(i=0;no>0;i++)
   no=no/10;
   printf("number of digits in %d : %d",n,i);
}

void q3()
{
  //check if it is prime number or not
  int i,n;
   printf("enter the number : ");
   scanf("%d",&n);
   for(i=2;i<n;i++)
   {
      if(n%i==0)
      break;
   }

   if(i==n)
   printf("prime number");
   else
   printf("not prime number");
}

void q4()
{
    //lcm of two number
    int i,a,b;
     printf("enter the number : ");
   scanf("%d %d",&a,&b);
    for(i=a>b?a:b;i<a*b;i++)
       {
        if(i%a==0&&i%b==0)
        break;
       }
     
   printf("lcm of %d and %d : %d",a,b,i);

}

void q5()
{
  // print the reverse digit
   int i,n;
   printf("enter the number : ");
   scanf("%d",&n);
    printf("the reveerse digit of %d : ",n);
   for(i=0;n>0;i++)
   {
     printf("%d",n%10);
     n=n/10;
   }

}

int main()
{
    
     
     q5(); 
  return 0;
}