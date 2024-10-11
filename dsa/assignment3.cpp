#include<iostream>
using namespace std;
#define null 1

class array
{
  private:
    int capacity;
    int lastindex;
    int *ptr;
  public:
     array(int cap);
     array(const array &e);
     ~array()
     {
        delete []ptr;
     }
     void doublearray();
     void halfarray();
     int cap();
     bool isempty();
     bool isfull();
     void append(int );
     void insert(int,int);
     void edit(int,int);
     void del(int);
     int get(int);
     int count();
     int search(int x);
};
 
array::array(int cap)
{
    if(cap<0)
    {
        cout<<"\ninvalid capacity\n";
        ptr=nullptr;
        lastindex=-1;
    }
    else
    {
        capacity=cap;
        lastindex=-1;
        ptr=new int[cap];

    }
}

array ::array(const array &e)
{
    try 
    {
      if(e.ptr==nullptr)
         throw null;
      capacity=e.capacity;
      lastindex=e.lastindex;
      ptr=new int[capacity];
      for(int i=0;i<capacity;i++)
      {
        ptr[i]=e.ptr[i];
      }
    }
    catch(int e)
    {
        cout<<"\nthe array has not been created\n";
        ptr=nullptr;
        lastindex=-1;
    }
}

void array:: doublearray()
{
    int *temp;
    temp= new int[capacity*2];
    for(int i=0;i<capacity;i++)
    {
        temp[i]=ptr[i];
    }
    delete []ptr;
    capacity=capacity*2;
    ptr=temp;
}

void array::halfarray()
{
   int *temp;
      capacity=capacity/2;
    ptr=new int[capacity];
   for(int i=0;i<capacity;i++)
   {
    temp[i]=ptr[i];
   }
   delete []ptr;
   ptr=temp;
   lastindex=capacity-1; 
}

int array::cap()
{
    try 
    {
      if(ptr==nullptr)
        throw null;
      return capacity; 
    }
    catch(int e)
    {
        cout<<"\nthe array has not been created\n";
    }
}

bool array::isempty()
{
    try
    {
      if(ptr=nullptr)
        throw null;
      if(lastindex==-1)
        return 1;
      else 
        return 0;
    }
    catch(int e)
    {
        cout<<"\nthe array has not been created\n"; 
    }
}

bool array::isfull()
{
    try
    {
      if(ptr=nullptr)
        throw null;
      if(lastindex==capacity-1)
         return 1;
      else
         return 0;
    }
    catch(int e)
    {
        cout<<"\nthe array has not been created\n"; 
    }
}

void array::append(int x)
{
   try
    {
      if(ptr=nullptr)
        throw null;
      if(lastindex==capacity-1)
      {
        doublearray();
        ptr[++lastindex]=x;
        lastindex++;
      }
      else
      {
       ptr[++lastindex]=x;
        lastindex++; 
      }
    }
    catch(int e)
    {
        cout<<"\nthe array has not been created\n"; 
    } 
}

void array::insert(int x,int y)
{
    try 
    {
      if(ptr==nullptr)
         throw null;
      if(x<0||x>=capacity)
       cout<<"\ninvalid index\n";
      else if(lastindex+1>=x)
      {
        if(lastindex==capacity-1)
          doublearray();
          for(int j=x;j<=lastindex;j++)
          {
            ptr[j+1]=ptr[j];
          }
          ptr[x]=y;
          lastindex++;
      }
        else
        cout<<"\nfill previous index first\n";
      }
    catch(int e)
    {
      cout<<"\nthe array has not been created\n";
    }
}

void array::edit(int x,int y)
{
  try
    {
      if(ptr=nullptr)
        throw null;
      if(x<0||x>=capacity)
        cout<<"\ninvalid index\n";
      else if(x>lastindex)
        cout<<"\nempty space\n";
      else
          ptr[x]=y;

    }
    catch(int e)
    {
        cout<<"\nthe array has not been created\n"; 
    }   
}

void array::del(int x)
{
     try
    {
      if(ptr=nullptr)
        throw null;
      if(x<0||x>=capacity)
        cout<<"\ninvalid index\n";
      else if(x>lastindex)
       cout<<"\nempty space\n";
      else
      {
        for(int j=x;j<lastindex;j++)
        {
            ptr[j]=ptr[j+1];
        }
        lastindex--;
        if(lastindex<capacity/2&&capacity>1)
            halfarray();
      }
      
    }
    catch(int e)
    {
        cout<<"\nthe array has not been created\n"; 
    }
}

int array::get(int x)
{
     try
    {
      if(ptr=nullptr)
        throw null;
      if(x<0||x>=capacity)
        cout<<"\ninvalid index\n";
      else if(x>lastindex)
       cout<<"\nempty space\n";
      else
      {
        return ptr[x];
      }
    }
    catch(int e)
    {
        cout<<"\nthe array has not been created\n"; 
    }
}

int array::count()
{
    try
    {
      if(ptr=nullptr)
        throw null;
      return capacity;
    }
    catch(int e)
    {
        cout<<"\nthe array has not been created\n"; 
    }
}

int array::search(int x)
{
    try
    {
      if(ptr=nullptr)
        throw null;
    
      for(int i=0;i<=lastindex;i++)
      {
        if(ptr[i]==x)
        return i;
    }
    return -1;
    }
    catch(int e)
    {
        cout<<"\nthe array has not been created\n"; 
    }
}


