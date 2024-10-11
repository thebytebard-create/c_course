#include<iostream>
using namespace std;
class a
{
    public:
     void f1()
   {
    cout<<"f1";
   }
};
class b1: virtual public a
{
    public:
     void f2()
   {
    cout<<"f2";
   }
};
class b2: virtual public a
{
    public:
     void f3()
   {
    cout<<"f3";
   }
};
class c : public b1,public b2
{
    public:
     void f4()
   {
    cout<<"f4";
   }
};

int main()
{
    c obj;
    obj.f3();
    return 0;

}