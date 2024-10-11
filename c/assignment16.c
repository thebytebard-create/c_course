#include<stdio.h>
int main ()
{ 
   /*q1
   int x,y,z,n,i;
   printf("enter the nth term");
   scanf("%d",&n);
   for(i=1,x=-1,y=1;i<=n;i++)
   {
    z=x+y;
    x=y;
    y=z;
   }
   printf("the nth term of fibonacci series is %d",z);
   return 0;
*/

    /*q2
    int x,y,z,n,i;
    printf("enter nth term");
    scanf("%d",&n);
    for(i=1,x=-1,y=1;i<=n;i++)
    {
        z=x+y;
        x=y;
        y=z;
         printf(" %d",z);

    }
   
   printf("are fibonacci term"); 
    return 0;
    */



  /*q3
   int n,x,y,z,i;
   printf("enter a number");
   scanf("%d",&n);
   z=0;
  for(x=-1,y=1;z<=n;)
   {
    z=x+y;
    x=y;
    y=z;
    if(z==n)
    {
        printf("inside");
        break;
    }
    
   }
   if(z>n)
   {
    printf("outside");
   }
   return 0;
*/

/*q4
int i,t,a,n,k,x,y,c,z;
printf("enter a number");
scanf("%d",&t);

n=t;
c=t;
z=0;
for(i=0;t>0;i++)
{
    t=t/10;
}
for(a=1;a<=i;a++)
{
    y=n%10;
    n=n/10;
    for(k=1,x=1;k<=i;k++)
    {
        x=x*y;
    }
    z=z+x;
}

if(z==c)
printf("yes it is armstrong number");
else
printf("no it is not armstrong number");
return 0;
*/

/*q5
int i,t,a,n,k,x,y,c,z;
printf("enter a number");
for(t=1;t<1000;t++)
{
n=t;
c=t;
z=0;
for(i=0;t>0;i++)

{
    t=t/10;
}
t=c;
for(a=1;a<=i;a++)
{
    y=n%10;
    n=n/10;
    for(k=1,x=1;k<=i;k++)
    {
        x=x*y;
    }
    z=z+x;
}

if(z==c)
printf("%d",z);
}

return 0;
*/

}
