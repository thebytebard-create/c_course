#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
using namespace std;

void f1()
{
    list<string>s={"muskan","shivani","knk"};
    s.push_back("radha");
     list<string>::reverse_iterator it;

     for(it=s.rbegin();it!=s.rend()++;it++)
     cout<<*it<<" ";
}

void f2()
{
    list<int> l;
    vector<int> v={2,5,8,9,6,3,5,1,2,6};
    
    l.insert(l.begin(),v.begin(),v.end());
    list<int>::iterator it;

     for(it=l.begin();it!=l.end();it++)
     cout<<*it<<" ";

}

void f3()
{
    list<int> l={5,8,9,6,3,1,4,7,5};
    
     int temp=0;
    cout<<" greatest number : "<<*max_element(l.begin(),l.end());
}


void f4()
{
     list<int> l={1,5,3,6,9,8,7,4,1,25};   
     l.sort();
      list<int>::iterator it;

     for(it=l.begin();it!=l.end()++;it++)
     cout<<*it<<" ";
     
}

bool iseven(int x)
{
    return x%2==0;
}
void f5()
{
    list<int> l;
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
   
    for(auto x:v)
    {
      if(iseven(x))
        l.push_front(x);
      else
        l.push_back(x);
    }

    list<int>::iterator it;
    for(it=l.begin();it!=l.end()++;it++)
            cout<<*it<<" ";
}

int main()
{
    f5();
    return 0;
}