#include<stdio.h>
//q1
void sum()
{
  int a[10],i,s=0;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
    s=s+a[i];
  }
  printf("%d",s);
}
//q2
void average()
{
  int a[10],i,s=0;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
    s=s+a[i];
  }
  printf("%d",s/10);
}
//q3
void evenoddsum()
{
  int a[10],i,e=0,o=0;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);

    if(a[i]%2==0)
    e=e+a[i];
    else
    o=o+a[i];
  }
  printf("%d %d",e,o);
}
//q4
void greatest()
{
  int a[10],i,g,j;
  for(i=0;i<10;i++)
    scanf("%d",&a[i]);
 
 for(i=0;i<10;i++)
 {
   for(j=0;j<10;j++)
   {
    if(a[i]>=a[j])
    {}
    else
        break;
   }
  if(j==10)
  {
  printf("%d",a[i]);
  break;
  }
 }
 //q5 
}
void smallest()
{
  int a[10],i,g,j;
  for(i=0;i<10;i++)
    scanf("%d",&a[i]);
 
 for(i=0;i<10;i++)
 {
   for(j=0;j<10;j++)
   {
    if(a[i]<=a[j])
    {}
    else
        break;
   }
  if(j==10)
  {
  printf("%d",a[i]);
  break;
  }
 }
  
}

int main()
{
    smallest();

   return 0;
}