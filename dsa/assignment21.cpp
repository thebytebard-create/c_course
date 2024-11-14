#include<iostream>
using namespace std;

int linear(int a[],int b,int n)
{
   for(int i=0;i<n;i++)
     {
        if(a[i]==b)
        return i;
     }

     return ;
}

void sort (int a[],int n )
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>temp)
              a[j+1]=a[j];
            else 
              break;
        }
        a[j+1]=temp;
    }
}

int binarysearch(int a[],int l,int u,int item)
{
    int m=(l+u)/2;
   sort(a,u+1);
   if(a[m]==item)
      return m;
   else if(a[m]<item)
       binarysearch(a,l,m-1,item);
   else 
      binarysearch(a,m+1,u,item);
}


