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