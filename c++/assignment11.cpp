#include<iostream>
#include<string.h>
using namespace std;

class numbers
{
  private:
  int size,*p;
 
  public:
  numbers(int s)
  {
   size=s;
   p= new int(size);   
  }
  ~numbers()
  {
    delete []p;
  }
  numbers(numbers &n)
  {
    size=n.size;
    p=new int(size);
    for(int i=0;i<size;i++)
    p[i]=n.p[i];
  }
};

class student 
{
  private:
  int rollno;
  char name[10];
  public:
    student()
    {
       cout<<"enter the name of student : ";
       cin>>rollno;
       cout<<"enter the name of student : ";
       cin.ignore();
       cin.getline(name,10);
    }

    void display()
    {
      cout<<"roll_no="<<rollno<<" name="<<name;
    }
};

class date
{
  private:
  int d,m,y;
  public:
    date():d(0),m(0),y(0)
    {}
    date(int d,int m,int y):d(d),m(m),y(y)
    {}
};

class room
{
  private:
  int room_number,room_type; 
  bool is_ac;
  float price;
  public:
   room(int r,int rt,float p,bool i)
   {
    room_number=r;
    room_type=rt;
    price=p;
    is_ac=i;
    
   }
};

class circle
{
  private :
  int radius;
  public:
   circle(int r)
   {
    radius =r;
   }

   circle()
   {
    radius =0;
   }

};