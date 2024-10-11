#include<stdio.h>
int main ()
{
   /*q1
    int i,x;
    for(x=2;x<101;x++)
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            {
                break;
            }
        }
        if(i==x)
        {
            printf("%d",x);
        }
       
    }
     printf("\tare these prime numbers");
    return 0;
   */ 
   
   /*q2
   int x,y,i;
   printf("enter two number");
   scanf("%d %d",&x,&y);
   if(x>y)
   {
    x=x+y;
    y=x-y;
    x=x-y;
   }
   while(x<y)
   {
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            break;
        }
    }
        if(i==x)
        {
            printf("%d",x);
        }
    x++;
   }

   printf("prime numbers between");
   return 0;
   */
   
   /*q3
   int x,i;
   printf("enter a number");
   scanf("%d",&x);
   
   for(x++;;x++)
   {
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            break;
        }
    }
    if(i==x)
    {
        printf("next prime number %d",x);
        break;
    }
    
   }
 return 0;
   */
 /*q4  
 int x,y,z,i;
 printf("enter two number");
 scanf("%d %d",&x,&y);
 z=x<y?x:y;
 for(i=z;i>1;i--)
 {
    if(x%i==0 && y%i==0)
    {
        printf(" the hcf is %d",i);
        break;
    }
 }
 if(i==1)
 {
    printf("the hcf is 1");
 } 
  
  return 0;
*/

/*q5
int i,x,y,z;
printf("enter two number");
scanf("%d %d",&x,&y);
z=x<y?x:y;
for(i=2;i<z;i++)
{
    if(x%i==0 && y%i==0)
    {
        printf("co divisible");
        break;
    }
}
if(i==z)
{
    printf("co prime");
}
return 0;
*/

}