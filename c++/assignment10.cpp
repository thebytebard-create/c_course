#include<iostream>
#include<string.h>
using namespace std;
//q1
class cuboid
{
  private:
  int length,breadth,height;
  public: 
  cuboid()
  {
    length=0;
    breadth=0;
    height=0;
  }
};

//q2
class customer
{
    private:
    int cust_id;
    char name[10],email[20],mobile[10];
    public:

    customer()
    {
        cust_id=0;
       strcpy(name,"anonmous");
       strcpy(email,"anonmous@gmail.com");
       strcpy(mobile,"0000000000");
    }
   customer(int i,char m[],char n[],char e[])
   {
    cust_id=i;
      strcpy(name,n);
      strcpy(email,e);
      strcpy(mobile,m);
   }
};

class time
{
  private:
  int hr,min,sec;
  public:
  time(int x,int y,int z)
  {
    hr=x;
    min=y;
    sec=z;
  }
};

class book
{
  private:
   int bookid;
   float price;
   char title[20];
   public:
   book()
   {
    bookid=0;
    price=0.0;
    strcpy(title,"abhi mhi pata");
   }

   book(int i,float p,char t[])
   {
    bookid=i;
    price=p;
    strcpy(title,t);
   }
};

class complex 
{
   private :
   int a,b;
   public :
   complex(int x,int y)
   {
    a=x;
    b=y;
   }

   void setdata(int x,int y){a=x;b=y;}
   void showdata(){cout<<"a="<<a<<" b="<<b<<endl;}
};

int main()
{
   complex c[5]={complex(0,0),complex(0,0),complex(0,0),complex(0,0),complex(0,0)};
   int x,y;
 for(int i=1;i<4;i++)
 {
    cout<<"enter real part : ";
    cin>>x;
    cout<<"enter imaginaary part : ";
    cin>>y;
    c[i].setdata(x,y);
 }
 for(int i=0;i<5;i++)
 c[i].showdata();
 return 0;

}
