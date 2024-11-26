#include<iostream>
#include<array>
#include<vector>
#include<list>

using namespace std;
/*
int main()
{
    array<int,5> a1={10,50,30,20,40};
     array<double,4> a2={3.5,6.1,9.2,2.1};
      array<int,5> a3=a1;
    
    for(int i=0;i<5;i++)
    cout<<a1[i]<<" ";
   cout<<endl;

    for(int i=0;i<5;i++)
       cout<<a1.at(i)<<" ";
       cout<<endl;
   for(int x:a1)
   cout<<x<<" ";
   cout<<endl;

    array<int,5>::reverse_iterator it;
    for(it=a1.rbegin();it!=a1.rend();it++)
       cout<<*it<<" ";
    cout<<endl;

    return 0;
}
*/

/*
int main()
{
    vector <int> v1={11,55,44,22,66};
    vector<string> v2={"bhopal","ayodhya","vellore"};
     for(int i=0;i<3;i++)
    cout<<v1[i]<<" ";
   cout<<endl;

    for(int i=0;i<3;i++)
       cout<<v1.at(i)<<" ";
       cout<<endl;
   for(auto x:v1)
   cout<<x<<" ";
   cout<<endl;

  
    v1.push_back(77);
    v1.insert(v1.begin(),25);
    v1.emplace(v1.begin(),90);//when non primitive data type
    v1.erase(v1.begin()+2);
  vector<int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++)
       cout<<*it<<" ";
    cout<<endl;
    v1.erase(v1.begin()+2,v1.begin()+3);
  vector<int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++)
       cout<<*it<<" ";
    cout<<endl;
    return 0;
}
*/

int main()
{
    list<int> l1={20,40,30,10};

    for(auto x:l1)
      cout<<x<<" ";
    cout<<endl;
   list<int>:: iterator it;
 
 for(it=l1.begin();it!=l1.end();it++)
    cout<<*it<<" "; 
  cout<<endl;
  cout<<l1.back()<<endl;
  cout<<l1.front()<<endl;
  cout<<l1.empty()<<endl;
  cout<<l1.size()<<endl;
 // l1.clear();
l1.push_back(80);//l1.emplace_back(80);
l1.push_front(50);//l1.emplace_front(50);
   for(auto x:l1)
      cout<<x<<" ";
    cout<<endl;
  l1.pop_back();
    l1.pop_front();
 for(auto x:l1)
      cout<<x<<" ";
    cout<<endl;
   l1.insert(l1.begin(),25);//emplace
   l1.reverse();
  it= l1.erase(l1.begin());
    for(auto x:l1)
      cout<<x<<" ";
    cout<<endl;

    return 0;
}