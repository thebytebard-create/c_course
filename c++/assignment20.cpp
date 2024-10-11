#include<iostream>
#include<string.h>
using namespace std;
class A
{
  private :
     int x,y;
  public:
     void setdata(int a,int b){x=a,y=b;}
     void showdata(){cout<<x<<" "<<y;}
     void inputdata(){cin>>x>>y;}
    
    
};

class B: public A
{
   private :
   int z;
   public:
void input()
{
    int k,r;
    cin>>z>>k>>r;
     setdata(k,r);
}
void showdata()
{
    cout<<z;
    A::showdata();

}

};

class Shape
{
  private:
  char name[20];
  public:
  void setdata(char x[])
  {
    strcpy(name,x);
  }
 char* getname()
 {
    return name;
 }

  virtual int area()=0;
};

class rectangle:public Shape
{
 private :
 int l,b;
 public :
 void setlb(int l,int k){this->l=l,b=k;}
 int getl(){return l;}
  int getb(){return b;}
  int area()
  {
    return l*b;
  }
};
class square:public Shape
{
  private:
  int s;
  public:
  void sets(int x){s=x;}
  int gets(){return s;}
  int area()
  {
    return s*s;
  }
};

int main()
{
    rectangle *p=new rectangle;
    p->setlb(5,6);
    cout<<p->area();
    return 0;
}