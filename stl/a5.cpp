#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void f1()
{
    //myway
 vector<int>a={5,6,9,-1,8};
 vector<int>::iterator it;
 for(it=a.begin();it!=a.end();)
 {
    if(*it<0)
    {
       it= a.erase(it,a.end());
    }
    else
    {
       it++;
    }  
    
 } 
 for(auto x:a)
   cout<<x<<" ";
   cout<<endl;  
}

vector<int> f2_sir(vector<int> v)
{
       v.erase(find_if(v.begin(),v.end(),[](int x)->bool{return x<0;}),v.end());
       return v;
}


void f2()
{
     vector<int>a={96,34,85};
     a.insert(a.begin()+2,3,25);
     for(auto x:a)
   cout<<x<<" ";
   cout<<endl; 
}

void f3()
{
    //my wrong understandin
  vector<vector<int>>j={{2,4,10},{5,7},{6,15,20},{3}}; 
  /*
  j.pus_back({2,4,10});
  */
 vector<vector<int>>::iterator it;
   it= j.begin()+3;
   it->insert(it->begin()+1,9);
  for(auto x:j)
  {
    for(auto c:x)
   cout<<c<<" ";
   cout<<endl; 
  }
}

void f3_r()
{
    vector<int>k={2,4,10,5,7,6,15,20,3,9};
    vector<vector<int>>j;
    int i,temp=*(k.begin())+2;
    int p=0;
    vector<int>::iterator it;
    vector<vector<int>>::iterator jit;
    for(it=k.begin();it!=k.end();it++)
    {
       if(temp>*it)
       {
         j.push_back({*it});
         jit=j.begin()+p;
        p++;
          i=1;
          temp=*it;
       }
       else
       {
        jit->insert(jit->begin()+i,*it);
        i++;
        temp=*it;
       }
    }
 for(auto x:j)
  {
    for(auto c:x)
   cout<<c<<" ";
   cout<<endl; 
  }
}


void f3_sir()
{
     vector<int>k={2,4,10,5,7,6,15,20,3,9};
    vector<vector<int>>v;
     vector<int>*ptr;
    int i=0,s,e,j=0;
    while(i<k.size()-1)
    {
        s=i;
        while(i<k.size()-1&&k.at(i)<k.at(i+1))
        i++;
        e=++i;
        ptr=new vector<int>();
        ptr->insert(ptr->begin(),k.begin()+s,k.begin()+e);
        v.insert(v.begin()+j,*ptr);
        j++;

    }
    for(auto x:v)
  {
    for(auto c:x)
   cout<<c<<" ";
   cout<<endl; 
  }
}
bool prime(int x)
{
    int i=1;
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            break;
        }
        if(x==i)
        return true;

        return false;

}

void f4()
{
    vector<int>l={1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator it;
    
    for(it=l.begin();it!=l.end();)
    {
        if(prime(*it))
        {
            it=l.erase(it);
           
        }
        else
        {
            it++;
        }
      
    }
     for(auto x:l)
  {
    cout<<x<<" ";
  }
}

void f4_sir()
{
    vector<int>l={1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator newend,it;
    newend=remove_if(l.begin(),l.end(),[](int x)->bool{return prime(x);}); 

    for(it=l.begin();it!=newend;it++)
     cout<<*it<<" ";
    cout<<endl;
}

void f5()
{
  vector<vector<int>>j={{3,2,1,6},{8,9,7,8},{5,4,6,8}};
  vector<int>g;
  int i=0,temp,limit=3;
  for(auto x:j)
  {
    temp=1;
    for(auto p:x)
    {
         if(temp>3)
      break;
     g.insert(g.begin()+i,p);
     i++;
     temp++;
     
    }
    if(temp==4)
    limit=2;
    else
    limit=50;  }

  for(auto x:g)
  {
    cout<<x<<" ";
  }
}

void f5_sir()
{
   vector<vector<int>>j={{3,2,1,6},{8,9,7,8},{5,4,6,8}};
  vector<int>g;

  g.insert(g.begin(),j.at(0).begin(),j.at(0).begin()+3);
  g.insert(g.end(),j.at(1).begin()+2,j.at(1).begin()+4) ;
  g.insert(g.end(),j.at(2).begin(),j.at(2).end());
  
  for(auto x:g)
  {
    cout<<x<<" ";
  }
}

int main()
{                                                                                                                                         
    f5_sir();
    return 0;
}

