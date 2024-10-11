#include<iostream>
using namespace std;
void f1(int x,int y)
{
  int i,j;
  cout<<"prime numbers between "<<x<<" "<<y<<" : ";
  for(i=x+1;i<y;i++)
  {
     for(j=2;j<i;j++)
     if(i%j==0)
     break;

     if(i==j)
     cout<<i<<" ";
  }

}
void f2(int x)
{
    int i;
    i=x%10;
  
   while(x!=0)
   {
      if(i < x%10)
      i=x%10;

      x=x/10;
   }
   cout<<"the biggest digit is : "<<i;
}
void f3(int x,int y)
{
    int i,s=1;
    for(i=0;i<y;i++)
    s=s*x;
    
    cout<<"the square is : "<<s;
}



int fact(int n)
{
  if(n==1 ||n==0 )
  return 1;

  return n*fact(n-1);
}
void f4(int x)
{
  int n,r,i;
  for(n=0;n<x;n++)
  {
    for(i=x;i>n;i--)
    {
      cout<<" ";
    }
    for(r=0;r<=n;r++)
    {
      cout<<fact(n)/(fact(n-r)*fact(r));
      cout<<" ";
    }
    cout<<endl;
  }
 
}

void f5(int x)
{
int a=0,b=1,c=0,i;
while(a!=x && a<x)
{
  a=a+c;
 
  c=b;
  b=a;
}
if(a==x)
cout<<"yes";
else
cout<<"no";

}
int main()
{
  int x;
  cout<<"enter a number";
  cin>>x;
 f5(x);
  return 0;
}