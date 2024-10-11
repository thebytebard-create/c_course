#include<iostream>
using namespace std;
//q1
class complex 
{
   
   private :
   int a,b;
   public:

   void setdata(int x,int y)
   {
    a=x;b=y;
   }

   void showdata()
   {
    cout<<"a="<<a<<" b="<<b;
   }

   complex subtract (complex c)
   {
    complex temp;
    temp.a=a-c.a;
    temp.b=b-c.b;
    return temp;
   }

complex  add (complex c)
 {
     complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
 }


 complex  multiple(complex c)
 {
    complex temp;
    temp.a=a*c.a;
    temp.b=b*c.b;
    return temp; 
 }

};

//q2
class time
{
    private :
    int h,m,s;
    public :

  void settime(int x,int y,int z)
  {
    h=x;
    m=y;
    s=z;
  }  
  void showtime()
  {
    cout<<"h="<<h<<" m="<<m<<" s="<<s<<endl;
  }
  
  void normalize()
  {
    if(s>60)
    {
        s=s-60;
        m+=1;
    }
    if(m>60)
    {
        m=m-60;
        h+=1;
    }

  }
 
 time add(time t)
 {
    time temp;
    /*
    temp.s=s+t.s;
    if(temp.s>60)
    {
        temp.s=temp.s-60;
        temp.m+=1;
    }
     temp.m=m+t.m;
    if(temp.m>60)
    {
       temp.m=temp.m-60;
        temp.h+=1;
    }
     temp.h=h+t.h;
     */
    temp.s=s+t.s;
    temp.m=m+t.m;
    temp.h=h+t.h;
    temp.normalize();
         cout<<"h="<<temp.h<<" m="<<temp.m<<" s="<<temp.s<<endl;
 }

bool is_greater(time t)
{
    if(h>t.h)
        return true;
    else if (h<t.h)
        return false;
    else if(m>t.m)
        return true;
    else if (m<t.m)
        return false;
    else if(s>t.s)
        return true;
    else if (s<t.s)
        return false;          
    
}
};
//q3

class testresult
{
    private :
  int roll_no,right,wrong,net_score;
   static int right_w,wrong_weightage;
  public :
   void setrollno(int x){roll_no=x;}
    void setright(int x){right=x;}
     void setwrong(int x){wrong=x;}
      void setscore(int x){net_score=x;}
    static void rw(int x){ right_w=x;}
     static void ww(int x){ wrong_weightage=x;}

      int getrollno(){ return roll_no;}
    int getright(){ return right;}
     int getwrong(){ return wrong;}
      int getscore(){ return net_score;}
    static int getrw(){  return right_w;}
     static int getww(){return wrong_weightage;}
};
int testresult::right_w;
int testresult::wrong_weightage;
  
  //q4
  void set_result(testresult &x,int rr,int r,int w)
  {
    x.setrollno(rr);
    x.setright(r);
    x.setwrong(w);
    x.setscore( x.getright()*testresult::getrw()+x.getwrong()*testresult::getww());

  }

  void sort_score(testresult (&x)[2],int s)
  {
    int r,n;
    testresult t;
    for(r=0;r<s;r++)
    {
      for(n=r+1;n<s;n++)
      {
        if(x[r].getscore()<x[n].getscore())
        {
          t=x[r];
          x[r]=x[n];
          x[n]=t;
        }
      }
    }
   
  }

  void show_result(testresult (&x)[2],int s)
  {
 for(int r=0;r<s;r++)
    {
      cout<<x[r].getrollno()<<" "<<x[r].getscore()<<endl;
    }
  }
  
  class matrix
  {
    private:
    int x[3][3];
    public:
    
    void input()
    {
      cout<<"enter nine numbers : ";
      for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
      cin>>x[i][j];
    }
     void display()
    {
      cout<<"enter nine numbers : ";
      for(int i=0;i<3;i++)
      {
      for(int j=0;j<3;j++)
      cout<<x[i][j]<<" ";
        cout<<endl;
      }
    }
    matrix add(matrix b)
    {
      matrix a;
      for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
        a.x[i][j]=x[i][j]+b.x[i][j];  
        
        return a;
     
    }
    matrix sub(matrix b)
    {
      matrix a;
      for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
        a.x[i][j]=x[i][j]-b.x[i][j]; 

        return a; 
     
    }
    matrix multiply(matrix b)
    {
      matrix a;
      for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
          a.x[i][j]=x[i][0]*b.x[0][j]+x[i][1]*b.x[1][j]+x[i][2]*b.x[2][j];

        return a;
     
    }

    matrix transpose ()
    {
      matrix t;
       for(int i=0;i<3;i++)
      {
      for(int j=0;j<3;j++)
        t.x[j][i]=x[i][j];
      }

     return t;

    }
    void displayadd(matrix c)
    {
      for(int i=0;i<3;i++)
      {
      for(int j=0;j<3;j++)
      cout<<c.x[i][j]<<" ";
      cout<<endl;

      }
    }
    bool is_singular()
    {
     int b=  x[0][0]*(x[1][1]*x[2][2]-x[1][2]*x[2][1])-x[0][1]*(x[1][0]*x[2][2]-x[1][2]*x[2][0])+x[0][2]*(x[1][0]*x[2][1]-x[0][1]*x[2][0]);
     if(b==0)
     return true ;

     return false;
    }
  };

 int main()
 {
   
  matrix a,b,c;
  a.input();
 cout<<a.is_singular();
    



    return 0;
 }