#include<iostream>
using namespace std;
class fraction
{
    private :
    long numerator;
    long denominator;
    public:
    fraction(long n=0,long  d=0)
    {
        numerator=n;
        denominator=d;
    }
    void setdata(int x,int y)
    {
        numerator=x;denominator=y;
    }
    void displaydata()
    {
        cout<<"numerator="<<numerator<<" denominator="<<denominator;
    }
    fraction operator+(fraction f)
    {
        int i;
        fraction temp;
        temp.denominator=denominator*f.denominator;
        temp.numerator=numerator*f.denominator+f.numerator*denominator;
        for(i=temp.numerator<temp.denominator?temp.numerator:temp.denominator;i<1;i--)
        {
            if(temp.numerator%i==0 && temp.denominator%i==0)
            break;
        }
        temp.denominator/=i;
        temp.numerator/=i;

       return temp;
        
    }

    bool operator<(fraction f)
    {
        if(numerator*f.denominator<f.numerator*denominator)
        return 1;

        return 0;
    }

};

class distance
{
    private :
    int km,m,cm;
    public:
    void setdata(int x,int y,int z)
     {
        km=x;m=y;cm=z;
     }
    void displaydata()
    {
        cout<<"km="<<km<<" m="<<m<<" cm="<<cm;

    }
    void normalize()
    {
         m+=cm/100;
         cm=cm%100;
         km+=m/1000;
         m=m%1000;
    }
    distance operator--(int)     //post decrement
    {
        distance temp=*this;
         if(cm==0)
         {
           cm=99;
           if(m==0)
           {
            m=999;
            km--;
           }
           else
           {
            m--;
           }
         } 
         else
         {
            cm--;
         }

         return temp;
        
    }
     distance operator--()  // pre decrement
    {
       
        if(cm==0)
         {
           cm=99;
           if(m==0)
           {
            m=999;
            km--;
           }
           else
           {
            m--;
           }
         } 
         else
         {
            cm--;
         }

         return *this;
    }
    distance operator+(distance d)
    {
        distance temp;
        temp.km=km+d.km;
        temp.m=m+d.m;
        temp.cm=cm+d.cm;
        normalize();
        return temp;
    }
};

class array 
{
    private :
    int *p;
    int size;
    public :
    
    array(int x)
    {
        size=x;;
      p=new int(size);

    }
    ~array()
    {
        delete []p;
    }
    void inputdata()
    {
        cout<<"input the values :";
        for(int i=0;i<size;i++)
        {     
            cin>>p[i];
        }
    }
    void displaydata()
    {
         cout<<"values are :";
        for(int i=0;i<size;i++)
        {     
            cout<<p[i];
        }
    }

   int operator[](int i)
   {
    if(i>=0 && i<size)
    return p[i];

    cout<<"invalid array :";

    return 0;
   }


};
int main()
{
    array c(5);
    int k;
    c.inputdata();

    k=c[4];
    cout<<k;

    return 0;
}