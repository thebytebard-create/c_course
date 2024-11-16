#include<iostream>
using namespace std;

template <class x>
x bigger(x a,x b)
{
    return a>b?a:b;
}

template <class x>
x smaller(x a,x b)
{
    return a<b?a:b; 
}

template <class x>
void print_array(x a[],int s)
{
    for(int i=0;i<s;i++)
      cout<<" "<<a[i];
}

template <class x>
void sort(x a[],int s)
{
    for(int i=1;i<s;i++)
    {
      x temp;
      temp =a[i];
      int j;
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

template <typename c>
c biggest_value(c a[],int s)
{
    c temp;
    temp=a[0];
    for(int i=1;i<s;i++)
    {
        if(temp<a[i])
          temp=a[i];
    }
  return temp;
}

int main()
{
    char a[]={'b','u','a','z'};
       cout<<biggest_value(a,4);   
    return 0;
}