#include<iostream>
#include<math.h>
using namespace std;
void f1(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
 void f2(int a,int b,int c=0)
 {
   cout<<a+b+c;
 }

 //q3

 float area (int r)
 {
    
    return 3.14*r*r;
 }
 int area(int l,int b)
 {
    return l*b;
 }

 float area(int a,int b,int c)
 {
    float s,ar;
    s=(a+b+c)/2.0;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
 }

//q4
int big(int a,int b)
{
    if(a>b)
    return a;
    else
     return b;
   
}

float big(float a,float b)
{
    if(a>b)
    return a;
    else
     return b;
}
//q5
int add(int a,int b)
{
    
    return a+b;
}

float add(float a,float b)
{
   
   return a+b;
}
int main()
{
  float l=5,b=6;
  cout<<add(l,b);
   
    return 0;

}