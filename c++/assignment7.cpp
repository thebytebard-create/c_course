#include<iostream>
#include<string.h>
using namespace std;
int f1(int a,int b)
{
  int i;
  for(i=a<b?a:b;i>0;i--)
  {
    if(a%i==0 && b%i==0)
    break;
  }
  return i;
}
//q2
 int cuboid(int l,int b,int h)
 {
   return l*b*h;
 }

 float cuboid(int r,int h)
 {
   return (3.14*r*r*h)/3.0;
 }

 float cuboid(int r)
 {
   return (4*3.14*r*r*r)/3.0;
 }

void f3(char a[],int s,int e=0)
{
    
    int  i;
    e-=1;
    if(e==-1)
      e=strlen(a);
 
    for(i=s-1;i<e;i++)
     cout<<a[i];

}
void f4(int a[],int b[],int s)
{
   int i,t;
   for(i=0;i<s;i++)
   {
     t=a[i];
     a[i]=b[i];
     b[i]=t;
        }
        for(i=0;i<s;i++)
    cout<<a[i];
cout<<endl;
   for(i=0;i<s;i++)
    cout<<b[i];
    
}
 void f5(int a [] ,int b[],int s )
 {
   int i,temp[s+s],k=0,j=0;
   for(i=0;k<s&&j<s;i++)
   {
    if(a[k]<b[j])
    {
      temp[i]=a[k];
      k++;
    }
    else
    {
      temp[i]=b[j];
      j++;
    }
   }
   if(k<s)
   {
     for(;k<s;k++,i++)
     {
        temp[i]=a[k];
     }
   }
   if(j<s)
   {
     for(;j<s;j++,i++)
     {
        temp[i]=b[j];
     }
   }
   
   for(i=0;i<s+s;i++)
     cout<<temp[i]<<" ";

 }

int main()
{
 int a[5]={6,8,10,12,13},b[5]={7,8,9,15,17};
f5(a,b,5);
  return 0;
}