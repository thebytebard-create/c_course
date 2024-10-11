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
       array(int a);
       array(const array &e);
       array& operator=(const array &e);
       ~array()
       {
        delete []ptr;
       }
};

array::array(int cap)
{
   
    if(cap<0)
       {
        cout<<"\ninvalid capacity\n";
        lastindex=-1;
        ptr=nullptr;
       }
    else
       {
          lastindex=-1;
          capacity=cap;
          ptr=new int [capacity];
       }
   
}

array::array(const array &e)
{
    try 
    {
    if(e.ptr==nullptr)
      throw null;
    lastindex=e.lastindex;
    capacity=e.capacity;
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

array&  array::operator=(const array &e)
{
   try 
   {
    if(e.ptr==nullptr)
      throw null;
    if(ptr!=nullptr)
        delete []ptr;
        capacity=e.capacity;
        lastindex=e.lastindex;
        ptr=new int[capacity];
        for(int i=0;i<capacity;i++)
        {
            ptr[i]=e.ptr[i];
        }
        return *this;
   }
   catch(int e)
   {
    cout<<"\nthis array has not been created\n";
    ptr=nullptr;
        lastindex=-1;
   }

}

