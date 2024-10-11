#include<iostream>
using namespace std;
void f1()
{
    int a,b,c;
    cout<<"enter three vallues : ";
    cin>>a>>b>>c;
    cout<<"the average of three values : "<<(a+b+c)/3.0;

}
void f2()
{
    int x;
     cout<<"enter a vallue : ";
    cin>>x;
    cout<<"the square is : "<<x*x;

}
void f3()
{
    int a,b;
     cout<<"enter two values : ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"the swaped values are : "<<a<<" "<<b;
}
void f4()
{
    int a,b;
    cout<<"enter two numbers : ";
    cin>>a>>b;
    if(a<b)
    cout<<"the bigger value is : "<<b;
    else
     cout<<"the bigger value is : "<<a;


}
void f5()
{
    int a[10],i,s=0;
    cout<<"enetr ten values  : ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
        s=s+a[i];

    }
    cout<<"sum of ten numbers is : "<<s;

}


int main()
{
    f4();
    return 0;
}