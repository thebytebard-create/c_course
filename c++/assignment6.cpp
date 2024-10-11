#include<iostream>
#include<string.h>
using namespace std;
void f1 (int a[],int s,bool l=1)
{
   int r,n,temp;
  
   for(r=0;r<s-1;r++)
   {
    for(n=r+1;n<s;n++)
    {
       if(a[r]>a[n] && l==1)
       {
       temp=a[r];
       a[r]=a[n];
       a[n]=temp;
       }
       
       if(a[r]<a[n] && l==0)
       {
       temp=a[r];
       a[r]=a[n];
       a[n]=temp;
       }
    }
  
}
 for(r=0;r<s;r++)
   {
    cout<<a[r]<<" ";
   }
}
   
void sort (char a[][20],int s,bool l=1)
{
 int r,n;
   char temp[20];
  
   for(r=0;r<s-1;r++)
   {
    for(n=r+1;n<s;n++)
    {
       if(a[r][0]>a[n][0] && l==1)
       {
        
        strcpy(temp,a[r]);
        strcpy(a[r],a[n]);
        strcpy(a[n],temp);
       
       }
       if(a[r][0]<a[n][0] && l==0)
       {
           strcpy(temp,a[r]);
        strcpy(a[r],a[n]);
        strcpy(a[n],temp);
       }
    }
   }
   

   for(r=0;r<s;r++)
   {
    cout<<a[r]<<" ";
   }
   

}
void f3 (int a[],int s,bool d=1,int n=1)
{
 int i,r,temp;
 if(d==1)
 {
 for(r=0;r<n;r++)
 {
   temp=a[s-1];
   for(i=s-1;i>0;i--)
      a[i]=a[i-1];
  a[0]=temp;
 }
 }
 else
 for(r=0;r<n;r++)
 {
   temp=a[0];
   for(i=1;i<s;i++)
       a[i-1]=a[i];
   a[s-1]=temp;    
 }
for(i=0;i<s;i++)
cout<<a[i];
   
}
int f4(int a,int b,int c)
{
   int s;
  

      for( s=a>b?a>c?a:c:b>c?b:c;s<=a*b*c;s++)
      {
         if(s%a==0 && s%b==0 && s%c==0)
         return s;
      }
     
 
}
void f5(int a)
{
   int i,s;
   for(i=2;i<=a;i++)
   {
      if(a%i==0)
      {
         cout<<i<<" ";
         for(s=i;a%i==0;)
         a=a/i;

      }

   }
}
   
int main()
{

 int a[5]={1,2,3,4,5};
f3(a,5,1,2);

    return 0;
}