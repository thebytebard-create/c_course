#include<stdio.h>
//q1
int naturals(int n)
{
  if(n==1)
  return 1;
  return n+naturals(n-1);
}
//q2
int odds(int n)
{
  if(n==1)
  return 1;
  return 2*n-1+odds(n-1);
}
//q3
int evens(int n)
{
  if(n==1)
  return 2;
  return 2*n+evens(n-1);

}
//q4
int squares(int n)
{
  if(n==1)
  return 1;
  return n*n+squares(n-1);
}
//q5
int digits(int n)
{
  if(n==0)
  return 0;
  return n%10+digits(n/10);
}
int main()
{
    printf("%d",digits(514));
    return 0;
}