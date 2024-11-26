#include<iostream>
#include<forward_list>
#include<algorithm>

using namespace std;

void f1()
{
     forward_list<int> f;
     f.insert_after(f.before_begin(),4,10); 
      f.insert_after(f.before_begin(),3,5); 
    for(auto x:f)
     cout<<x<<" ";
}

void f2()
{
  forward_list<string> f={"kjdjd","enkjndsjnsf"};
  f.reverse();
  for(auto x:f)
     cout<<x<<" ";
}

void f3()
{
   forward_list<int> f={5,9,3,7,8,6,3,14,7,9,53};

   int num=5;
   int i=0;
  
    for(auto x:f)
      if(num<x)
      i++;
    cout<<i;
}

void f3_sir()
{
   forward_list<int> f={5,9,3,7,8,6,3,14,7,9,53};

   int num=5;
   int i=0;

   auto fn=[&](int x)->void{if(x>num) {i++;}}  ;
    for(auto x:f)
      fn(x);
    cout<<i<<endl;
}

void f4_w()
{
  // i have deleeted all element which is greater than thae given number
   forward_list<int> f={5,9,3,7,8,6,3,14,7,9,53};
    forward_list<int> ::iterator it=f.before_begin(),cit=f.begin();
     int num=5;

   while(cit!=f.end())
   {
      if(num<*cit)
         cit=f.erase_after(it);
       else
      {
         it=cit;
         cit++;
      }
   }
   
   for(auto x:f)
     cout<<x<<" ";
      
}

void f4_sir()
{
   forward_list<int> f={5,9,3,7,8,6,3,14,7,9,53};
   f.sort();
    int num=5;
  
        f.remove(*upper_bound(f.begin(),f.end(),num));

     for(auto x:f)
      cout<<x<<" ";
  
}

struct term
{
   int coeff,exp;
   term(int x,int y){coeff=x;exp=y;}
};


void f5()
{
  forward_list<term> l={term(5,3),term(-4,2),term(1,1),term(10,0)};
  
   for(auto x:l)
     {
      cout<<"("<<x.coeff<<"x^"<<x.exp<<")"<<" ";
     }

}

int main()
{
    f5();
        return 0;
}