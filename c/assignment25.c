#include<stdio.h>

//q1
void natural(int n)
{  
    
    if(n>0)
    {
     natural(n-1);
    printf("%d",n);   
    }
   
}
//2
void reversen(int n)
{
  if(n>0)
  {
   
   printf("%d,",n);
    reversen(n-1);
  }  
   
}
//3
void odd(int n)
{
   
    if(n>0)
    {
      odd(n-1); 
      printf("%d",2*n-1); 
    }
    
}

//4 mine
void oddr(int n)
{
  if(n>0)
 {
  printf("%d",2*n-1);
   oddr(n-1);
 }
}
//q5s mine
void even(int n)
{
  if(n>0)
  {
    even(n-1);
    printf("%d",2*n);

  }
}
int main()
{
  oddr(5);
   return 0;
}