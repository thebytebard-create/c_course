#include<iostream>
using namespace std;
class complex 
{
    private :
    int a,b;
    public :
     void setdata(int x,int y) {a=x;b=y;}
     void displaydata(){cout<<"a="<<a<<" b="<<b;}
    
     friend complex operator+(complex ,complex);
     friend complex operator-(complex ,complex);
      friend complex operator*(complex ,complex);
     
};

complex operator+(complex b,complex c)
{
  complex t;
  t.a=b.a-c.a;
  t.b=b.b-c.b;
  return t;
}

complex operator*(complex b,complex c)
{
  complex t;
  t.a=b.a*c.a-b.b*c.b;
  t.b=b.a*c.b+c.b*b.a;
  return t;
}

complex operator-(complex b,complex c)
{
  complex t;
  t.a=b.a-c.a;
  t.b=b.a-c.b;
  return t;
}

class time
{
  private :
  int hr,min,sec;
  public:
  void setdata(int x,int y,int z){hr=x;min=y;sec=z;}
  void displaydata(){cout<<"hr="<<hr<<" min="<<min<<" sec"<<sec;}

  friend ostream& operator<<(ostream &, time c);
  friend istream& operator>>(istream&, time &c);
  time operator=(time t)
  {
    hr=t.hr;
    min=t.min;
    sec=t.sec;
    return *this;
  }


};

ostream& operator<<( ostream &dout ,time c)
{


   dout<<" hr="<<c.hr<<" min="<<c.min<<" sec="<<c.sec;
   return dout;

}

istream& operator>>( istream &din ,time &c)
{

   din>>c.hr>>c.min>>c.sec;
     return  din;;

}
 
 
class array
{
  private:
      int *p;
      int size;
  public:

     
     void inputdata(int s)
     {
      size=s;
      cout<<"enter data :";
      p=new int[size];
      for(int i=0;i<size;i++)
      {
        cin>>p[i];
      }
        
     }
      array operator=( const array a)
      {
        size=a.size;
        p=new int [size];
        for(int i=0;i<size;i++)
        {
          p[i]=a.p[i];
        }
        return *this;
      }   

      friend array operator+(array ,array ); 
      void displaydata()
      {
        for(int i=0;i<size;i++)
        {
          cout<<p[i]<<" ";
        }
      }
    
};

     array operator+(array a,array b)
     {
       array result;
       result.size= a.size+b.size;
       result.p=new int[result.size];
       int i,k;
       for(i=0,k=0;i<a.size;i++,k++)
       {
        result.p[k]=a.p[i];
       }
        for(i=0;i<b.size;i++,k++)
       {
        result.p[k]=b.p[i];
       }

       return result;
     }


int main()
{
  array a,b,c;
  a.inputdata(5);
  b.inputdata(5);
  
  c=(a+b);
  c.displaydata();
  return 0;


}
