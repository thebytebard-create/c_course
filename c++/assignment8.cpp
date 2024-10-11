#include<iostream>
using namespace std;
class complex 
{
   private:
   int a,b;
   public:
   void setdata(int ,int);
   void displaydata();

};

void complex ::setdata(int x,int y)
{
    a=x;
    b=y; 
}

void complex::displaydata()
{
    cout<<a<<b;
}
class time
{
    private:
    int a,b,c;
    public:
    void setdata(int,int,int);
    void displaydata();
};

void time:: setdata(int x,int y,int z)
{
  a=x;
  b=y;
  c=z;
}

void time:: displaydata()
{
    cout<<a<<" hr "<<b<<" min "<<c<<" sec ";
}

class date
{
  private:
  int a,b,c;

  public:
 
   void setdata(int,int,int);
    void displaydata();
   const  char* name(int);
    void p1();
    void p2();
  
};
const char* date:: name(int x)
 {
    switch(x)
    {
        case 1:
        return "jan";
         case 2:
        return "feb";
         case 3:
        return "mar";
         case 4:
        return "apr";
         case 5:
        return "may";
         case 6:
        return "jun";
         case 7:
        return "jul";
         case 8:
        return "aug";
         case 9:
        return "sep";
         case 10:
        return "oct";
         case 11:
        return "nov";
         case 12:
        return "dec";
    }
}
void date:: setdata(int x,int y,int z)
{
  a=x;
  b=y;
  c=z;
  
}

void date:: displaydata()
{
    cout<<"d= "<<a<<" m= "<<b<<" year= "<<c;
}
void date:: p1()
{
    cout<<a<<"-"<<b<<"-"<<c;
}
void date:: p2()
{
    cout<<a<<"-"<<name(b)<<"-"<<c;
}

class circle
{
  private :
  int r;
  public:
  void setradius(int );
  int getradius();
  float area();
  float circumference();

};

void circle:: setradius(int x)
{
    r=x;
}
int circle:: getradius()
{
   return r;
}
float circle:: area()
{
    return 2*3.14*r;
}
float circle:: circumference()
{
   return 3.14*r*r;
}
int main()
{
    date c;
    c.setdata(3,12,2022);
   c.p2();
    return 0;
}