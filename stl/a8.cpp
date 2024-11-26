#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

void f1()
{
    deque<int> d={4,9,7,6};
      deque<int>::iterator it;

      for(it=d.begin();it!=d.end();it++)
         cout<<*it<<" ";

         cout<<endl;

}

void f2()
{
      deque<int> d={4,9,7,6};
    
      cout<<"greatest element : "<<*max_element(d.begin(),d.end());
    cout<<endl;     
}


void f3()
{
 deque<int>  d={4,9,4,7,6};
  
  
 for(int i=0;i<d.size();i++)
 {
    int j,c=0;
    for(j=0;j<i;j++)
    if(d[i]==d[j])
       break;
    
    if(j==i)
    {
        int num=d[i];
        for(auto x:d)
        {
            if(x==d[i])
            c++;
        }
       cout<<d[i]<<" = "<<c<<endl;
    }
 }
    
}

void f3_sir()
{
   deque<int>  d={4,9,4,7,6,9,10,12};
  sort(d.begin(),d.end());
   int count=0,i=0,j=0;

   while(j<d.size())
   {
    if(d[i]==d[j])
    {
        count++;
        j++;
    }
    else
    {
        cout<<d[i]<<" = "<<count<<endl;
       i=j;
       count=0;
    }
   }
     cout<<d[i]<<" = "<<count<<endl;
}

void f4()
{
    deque<int>  d={4,9,4,7,6,9,10,12};
 
   int count=0,i=0,index=0,j=0,temp=0;

   while(j<d.size()-1)
   {
    if(d[j]<d[j+1])
    {
         if(count==0)
          i=j;
        count++;
        j++;
       
    }
    else
    {
        if(temp<count)
        {
        temp=count; 
        index=i;
        } 
      count=0;
      j++;
    }
   }

   if(temp<count)
        {
        temp=count; 
        index=i;
        } 
    
    for(int i=index;i<=index+temp;i++)
       cout<<d[i]<<" ";
}


  void f5()
{
 deque<int>d2={0,0}, d={4,9,7,6};
  
 for(int i=0;i<d.size();i++)
 {
    int j,c=0;
    for(j=0;j<i;j++)
    if(d[i]==d[j])
       break;
    
    if(j==i)
    {
        int num=d[i];
        for(auto x:d)
        {
            if(x==d[i])
            c++;
        }
        if(d2[1]<c)
        {
            d2[0]=d[i];
            d2[1]=c;
        }
    }
 }
    cout<<"highest frequency = "<<d2[0];
  
}

void f5_sir()
{
    deque<int>  d={4,9,10,7,4,4,10,12}; 
    int max=0,maxindex=0,i=0,c=0;

    while(i<d.size())
    {
      c=count(d.begin(),d.end(),d[i]) ;
      if(max<c)
      {
        max=c;
        maxindex=i;
      }
      i++;
    }

    cout<<"element = "<<d[maxindex]<<" frequency = "<<max<<endl;

}

int main()
{
   f5_sir();
   
   return 0;

}