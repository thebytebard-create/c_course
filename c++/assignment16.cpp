#include<iostream>
#include<string.h>
using namespace std;
class person 
{
  private:
     int age;
     char name[30];
  public:
     
     person(int age,char name[])
     {
        this->age=age;
        strcpy(this->name,name);
     }

};

class complex 
{
    private :
       int a,b;
    public:
       
       void setdata(int a,int b)
       {
        this->a=a;
        this->b=b;

       }
       void showdata()
       {
        cout<<" a="<<this->a<<" b="<<this->b;      

       }
       
};

void f1()
{
    complex *p;
    p=new complex();
    p->setdata(4,5);
     p->showdata();
     
}

int main()
{
    f1();
    return 0;
}