#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class person 
{
    private:
    char name[20];
    int age;
    protected:
    void setage(int x){age=x;}
    void setname(char a[])
    {
      strcpy(name,a);
    }
    int getage()
    {
        return age ; 
    }
    char* getname()
    {
       return name;
       }
};

class employee :public person
{
   private :
   int salary;
   public:
    void setemployee(char n[],int a,int s)
    {
        setname(n);
        setage(a);
        salary=s;
    }
    void showemployee()
    {
        cout<<"name="<<getname()<<endl<<"age="<<getage()<<endl<<"salary="<<salary;
    }
};

class circle 
{
  private :
  int radius;
  public:
  void setradius(int x){radius=x;}
  int getradius(){return radius;}
  float getarea(){return 3.14*radius*radius;}

};
class thickcircle :public circle
{
  private :
  int thickness;
  public:
  void setthickness(int x){thickness=x;}
  int getthickness(){return thickness;}
  float getarea(){return ((getradius()+getthickness())*2*3.14)-circle::getarea();}
};

class coordinate 
{
    private :
    int x,y;
    public:
    void setdata(int x,int y){this->x=x;this->y=y;}
    void showdata(){cout<<"x="<<x<<" y="<<y;}
    double getdistance()
    { 
      return sqrt(x*x+y*y);
    }
    double getdistance(coordinate a)
    {
        return sqrt((x-a.x)*(x-a.x)+(y-a.y)*(y-a.y));
    }
};

class shape 
{
  private:
  char shapename[20];
  public :
  void setdata(char a[])
  {
    strcpy(shapename,a);
  }
   
   char* getshapename()
   {
    return shapename;
   }
};

class straightline :public shape
{
   private :
   coordinate c1,c2;
   public :
   void setline(coordinate a,coordinate b)
   {
    c1=a;c2=b;
   }
   double getdistance()
   {
    return c1.getdistance(c2);
   }
   void showline()
   {
    c1.showdata();
    c2.showdata();
   }
};

int main()
{
   employee c;
   char a[]={"gautam shakya"};
   c.setemployee(a,24,900000000);
   c.showemployee();
   
    return 0;
}