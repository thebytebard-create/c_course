#include<stdio.h>
int main ()
{ /*q1
   int x;
   printf("enter a number");
   scanf("%d",&x);
   //another way if(x>99 && x<1000 || x>-1000 && x<-99)
   if(x<100)
   {
    printf("not three digit number");
   }
   else
   {
       if(x>999)
       {
        printf("not three digit number");
       }
       else
       {
        printf("three digit number");
       }
       return 0;
   }
   */
  
   /*q2
    int y, x;
    printf("enter two number");
    scanf("%d %d",&x,&y);
    if(x<y)
    {
        printf("%d",y);
    }
    else
    {
        if(x==y)
        {
            printf("%d",x);
        }
        else
        {
            printf("%d",x);
        }
    }
    return 0;
    */

 /*q3 
  int x,y,z,D;
  printf("enter three number x,y,z");
  scanf("%d %d %d",&x,&y,&z);
  D=y*y-4*x*z;
  if(D==0)
  {
    printf("real and equal");
  }
  else
  {
    if(D>0)
    {
        printf("real and distinct");
    }
    else
    {
        printf("imaginary number");
    }
  }
return 0;
*/

/*q4
int x;
printf("enter a year");
scanf("%d",&x);
if(x%100==0 && x%400==0)
{
  printf("it is leap year");
}
else
{
  if(x%100!=0 && x%4==0)
  {
    printf("it is leap year");
  }
  else
  {
     printf("it is not leap year");
  }
}
return 0;
*/


int x,y,z;
printf("enter three numbers");
scanf("%d %d %d",&x, &y,&z);
if(x>y)
{
  if (x>z)
  {
    printf("%d",x);
  }
  else
  {
    printf("%d",z);
  } 
}
else
{
  if(y>z)
  {
    printf("%d",y);
  }
  else
  {
    printf("%d",z);
  }
}
return 0;

/*another way wrong way in some condition like 444 266     if(a>b && a>c)
if(a>b && a>c)                                             else if(b>c)
if(b>a && b>c)                                                  else
if(c>a && c>b)
*/

}