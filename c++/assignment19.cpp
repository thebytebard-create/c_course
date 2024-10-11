#include<iostream>
#include<string.h>
using namespace std;
class game
{
    private:
   int s[5];
   public:
   void setscore(int round,int score)
   {
    s[round-1]=score;
   }
   int getscore(int round)
   {
      return s[round-1];
   }
};

class gameresult :public game
{
  private:
  int r[5];
  public:
  static const int win=2,loose=0,draw=1;
   void setresult(int round,int result)
   {
      r[round-1]=result;
   }

   int getresult(int round)
   {
     return r[round-1];
   }

   void finalresult()
   {
      int x=0,y=0;
      for(int i=1;i<=5;i++)
      {
         x+=getresult(i);
         y+=getscore(i);
      }
     cout<<"total score is="<<y;
     cout<<"total result is="<<x;
   }
  
};

class actor
{
  private:
  char n[20];
  int a;
  public:
  void setname(char name[])
  {
    strcpy(n,name); 
  }
  void setage(int age)
  {
   a=age;
  }

  int getage()
  {
   return a;
  }

  char* getname()
  {
   return n;
  }
  
};

class tvactor : virtual public actor
{
   private:
   int p;
   public:
   
   void setproject(int i)
   {
      p=i;
   }
   int getproject()
   {
      return p;
   }

   void settvactor(char name[],int age,int pr)
   {
     setname(name);
     setage(age);
     setproject( pr);
   }

   void showtvactor()
   {
      cout<<"name="<<getname()<<endl;
      cout<<"age="<<getage()<<endl;
      cout<<"project done="<<getproject()<<endl;
   }

};

class movieactor : virtual public actor
{
   private:
   int m;
   public:
   
   void setm(int i)
   {
      m=i;
   }
   int getm()
   {
      return m;
   }

   void setmovieactor(char name[],int age,int pr)
   {
     setname(name);
     setage(age);
     setm( pr);
   }

   void showmovieactor()
   {
      cout<<"name="<<getname()<<endl;
      cout<<"age="<<getage()<<endl;
      cout<<"project done="<<getm()<<endl;
   }

};

class allscreenactor:public tvactor,public movieactor
{
   public:
    void setactor(char name[],int age,int tv,int movie)
   {
     setname(name);
     setage(age);
     setm(movie);
     setproject(tv);
   }
   void showactor()
   {
      cout<<"name="<<getname()<<endl;
       cout<<"age="<<getage()<<endl;
        cout<<"movie done="<<getm()<<endl;
         cout<<"tv done="<<getproject()<<endl;

   }
};