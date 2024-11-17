#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

void f1()
{
    array<int,5> a={45,56,98,70,43};

array<int,5>:: reverse_iterator it;
 for(it=a.rbegin();it!=a.rend();it++)
    cout<<*it<<" ";
    cout<<endl;
}


void f2()
{
    array<float,5> b={2.5,6.4,9.2,7.6,5.1};
    float s=0;

    array<float,5>:: iterator p;

    for(p=b.begin();p!=b.end();p++)
      s=s+*p;
   cout<<(s/5);
   cout<<endl;
}

void f3()
{
   array<int,10> a;
  
   cout<<"enetr  ten numbers : "<<endl;
 

    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
   // cout<<"greatest number : "<<*max_element(a1.begin(),a1.end());
   cout << "greatest number : " << *max_element(a.begin(), a.end());

}

class complex 
{
   private:
      int a;
      int b;
  public:
     complex(int x,int y){a=x;b=y;}
    void showdata()
    {
      cout<<"a = "<<a<<"b = "<<b;
    }
     complex operator+(const complex &k)
     {
      complex p(0,0);
      p.a=a+k.a;
       p.b=b+k.b;
       return p;
     }
};
complex add_array(array<complex,5> a)
{
  complex c(0,0);
  for(auto x:a)
  {
    c=c+x;
  }
  return c;
}

void f4()
{
    array<complex,5>j={complex(5,20),
                       complex(6,2),
                       complex(8,9),
                       complex(6,3),
                       complex(9,6) };
           complex c(0,0);             

     
     /*                  
      for(int i=0;i<5;i++)
      {
        c=c+j[i];
      }
      */
    c=add_array(j);
  c.showdata();   

}
void f5()
{
  //my way
  array<int,10> a={11,99,88,83,46,25,36,45,27,89};
   array<int,10>::iterator it,p;
 for(it=a.begin()+1;it!=a.end();it++)
       {
       int temp=*it;
    
        for(p=it-1;p!=a.begin();p--)
        {
             if(*p>temp)
             *(p+1)=*p;
           else
             break;
        }
        *(p+1)=temp;       
       }
       for(it=a.begin();it!=a.end();it++)
        cout<<*it<<" ";
      cout<<endl;
}

void f5_2()
{
array<int,10> a={11,99,88,83,46,25,36,45,27,89};
sort(a.begin(),a.end());
  for(auto x:a)
    cout<<x<<" ";
  cout<<endl;
}
int main()
{
  f5_2();
    return 0;

}