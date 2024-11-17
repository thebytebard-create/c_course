#include<iostream>
#include<vector>
#include<algorithm>

using  namespace std;

void f1()
{
    //print the values using subscript operator
   vector<int> a={5,9,6,3,7};

   for(int i=0;i<a.size();i++)
   cout<<a[i]<<" ";   
}

void f2()
{
  //print the values using at()
   vector<float> a={5.3f,9.6f,6.8f,3.5f,7.7f};

   for(int i=0;i<a.size();i++)
   cout<<a.at(i)<<" ";   
}

void f3()
{
   //print the values using implicit iterator
   vector<string> a={"radha","mohan","keshav","madhavi","shreyansh"};

   for(auto x:a)
   cout<<x<<" "; 
}

void f4()
{
     vector<int> a={5,9,6,3,7};
     vector<int>::iterator it;
     for(it=a.begin();it!=a.end();it++)
       cout<<*it<<" ";
       cout<<endl;
}


vector<int> f5()
{
    vector<int> a={20,50,10,30,50,40,60};
    vector<int> s;
    int j=-1;
   for(int i=1;i<a.size()-1;i++)
   {
      if(a[i]<a[i-1]&&a[i]<a[i+1])
      {
          s.push_back(a[i]);
      } 
   }
 return s;  
}
int main()
{
     vector<int> o;
     o=f5();
    for(auto x:o)
      cout<<x<<" ";
    return 0;
}