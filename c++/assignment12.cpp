#include<iostream>
using namespace std ;
class complex 
{
    private :
    int a,b;
    public :
    void setdata(int x,int y){a=x;b=y;}

    complex operator+(complex c)
    {
        complex temp;
        temp.a=a+c.a;
         temp.b=b+c.b;
         return temp;
    }
     complex operator-(complex c)
    {
        complex temp;
        temp.a=a-c.a;
         temp.b=b-c.b;
         return temp;
    }
      complex operator*(complex c)
    {
        complex temp;
        temp.a=a*c.a-b*c.b;
         temp.b=a*c.b+b*c.a;
         return temp;
    }
    bool operator==(complex c)
    {
       if(a==c.a && b==c.b)
      return 1;

      return 0;


    }
    void displaydata(){cout<<"a="<<a<<" b="<<b;}

};

class time
{
  private :
  int hr,min ,sec;
  public:
  void setdata(int x,int y,int z){hr=x;min=y,sec=z;}
  void displaydata(){cout<<"hr="<<hr<<" min="<<min<<" sec="<<sec;}
  bool operator>(time t)
  {
    time temp;
    if(hr>t.hr)
    return 1;
    else if(hr<t.hr)
    return 0;
    else if(min>t.min)
    return 1;
    else if(min <t.min)
    return 0;
    else if(sec>t.sec)
    return 1;
    else
    return 0;

    return 0;
  }
  time operator++(int)    //post increment
    {
        time temp=*this;
       sec++;
       min+=sec/60;
       sec=sec%60;
        hr+=min/60;
       min=min%60;
       return temp;

    }
     time operator++()    //pre increment
    {
       
       sec++;
       min+=sec/60;
       sec=sec%60;
        hr+=min/60;
       min=min%60;
       return *this;

    }
    time operator+(time c)
    {
        time temp;
        temp.hr=hr+c.hr;
         temp.min=min+c.min;
          temp.sec=sec+c.sec;

          temp.min+=temp.sec/60;
          temp.sec=temp.sec%60;
          temp.hr+=temp.min/60;
          temp.min=temp.min%60;
          return temp;
    }

};

class matrix
{
  private:
   int a[3][3];
  public :
   void inputmatrix()
   {
    cout<<"enter nine number : ";
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
     }
   }
    void displaymatrix()
   {
    cout<<"enter nine number : ";
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
     }
   }

   matrix operator+(matrix m)
   {
    matrix temp;
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
           temp.a[i][j]=a[i][j]+m.a[i][j];
        }
     }
     return temp;
   }
     matrix operator-(matrix m)
   {
    matrix temp;
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
           temp.a[i][j]=a[i][j]-m.a[i][j];
        }
     }
     return temp;
   }
     matrix operator*(matrix m)
   {
    matrix temp;
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
           temp.a[i][j]=a[i][0]*m.a[0][j]+a[i][1]*m.a[1][j]+a[i][2]*m.a[2][j];
     }
     return temp;
   }

};
};
int main()
{
   matrix x,x1,x3;
   x.inputmatrix();
   x1.inputmatrix();
   x3=x*x1;
   x3.displaymatrix();
     return 0;

}