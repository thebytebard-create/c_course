#include<stdio.h>
int main ()
{   
  /* q1 
  //  int n,f=1,while(n),{f=f*n,n--}
    int i,n,t;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1,t=1;i<=n;i++)
    {
        t=i*t;

    }
    printf(" factorial of a number %d",t);
    return 0 ;
   */
    
   /*q2
    int i,t;
    printf("enter a number");
    scanf("%d",&t);
    for(i=0;1<=t;i++)
    {  
        t=t/10;
       
    }
    printf(" number of digit %d",i);
   
    return 0;
   */
 
 /*q3
   int t,n,i;
   printf("enter a numbe9r");
   scanf("%d",&n);

   for(i=2;i<n;i++)
   {
    t=n%i;
    if(t==0)
    {
        printf("not prime number");
        break;
    }
   }

   if(t>0)
   {
    printf("prime number");
   }
   return 0;
   */
   
  /*q4
  int x,y,i,t;
  printf("enter two number");
  scanf("%d %d",&x,&y);
  i=x>y?x:y;
  t=0;
  while(t==0)
  {
    if(i%x==0 && i%y==0)
    {
      t++;
      break;
    }
    i++;
  }
  printf(" lcm is %d",i);
  return 0;
*/


int i,s,t;
printf("enter a number");
scanf("%d",&t);
for(i=0;1<=t;i++)
{
  s=t%10;
  t=t/10;
  
  printf("%d",s);
}
printf("\t is the reverse digit");
return 0;


}