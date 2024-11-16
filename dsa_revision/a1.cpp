#include<iostream>
using namespace std;

#define invalid 1


class array
{
   private:
      int capacity;
      int lastindex;
      int *ptr;
   public:
       array(int x);
       array(const array &e);
       ~array();
       array& operator=(const array &e);
       bool empty();
       void create(int x);
       void append(int);
       void insert(int x,int y);
       void edit(int x,int y);
       void del(int x);
       bool full();
       int get(int x);
       int count();
       int search(int x);

};

array::array(const array &e)
{
   capacity=e.capacity;
   lastindex=e.lastindex;
   ptr=new int[capacity];
   for(int i=0;i<=lastindex;i++)
       ptr[i]=e.ptr[i];  
}

array& array::operator=(const array &e)
{
   if(this==&e)
      *this;
   
   delete []ptr;

   capacity=e.capacity;
   lastindex=e.lastindex;
   ptr=new int[capacity];
   for(int i=0;i<=lastindex;i++)
       ptr[i]=e.ptr[i];  

   return *this;
}
array::array(int x)
{
   try
   {
   if(x<1)
      throw invalid;
    capacity=x;
    lastindex=-1;
    ptr=new int[capacity];
   }
   catch(int e)
   {
      cout<<"invalid capacity";
      ptr=nullptr;
   }
}

array::~array()
{
   if(ptr!=nullptr)
       delete []ptr;
}


bool array::empty()
{

     if(ptr==nullptr)
     throw invalid;
       return lastindex==-1; 
}

void array::create(int x)
{
   if(x<1)
     throw invalid;
    if(ptr)
      delete []ptr;
      ptr=new int[x];
      capacity=x;
      lastindex=-1;
}

void array::append(int x)
{
    if(ptr==nullptr)
       throw invalid;
    else if (full())
       throw invalid;
    else
      ptr[++lastindex]=x;
      
}

void array::insert(int x,int y)
{
   if(ptr==nullptr)
        throw invalid;
   else if (x<0 || x>lastindex+1)
        throw invalid;
    else if (full())
       throw invalid;
   else
     {
       for(int j=lastindex+1;j>x;j--)
          ptr[j]=ptr[j-1]; 
       ptr[x]=y;
       lastindex++;
     }   
}

void array::edit(int x,int y)
{
    if(ptr=nullptr)
       throw invalid; 
    else if(x<0 || x>lastindex)
     throw invalid; 
     else 
       ptr[x]=y;   
}

void array:: del(int x)
{
    if(ptr == nullptr)
       throw invalid;
    else if(x<0 || x>lastindex)
        throw invalid;
    else 
    {
      for(int j=x;j<lastindex;j++)
         ptr[x]=ptr[x+1];
      lastindex--;
    }   
}

bool array::full()
{
  if(ptr ==nullptr)
      throw nullptr;
  return lastindex==capacity-1;
}

int array::get(int x)
{
  if(ptr==nullptr)
     throw invalid;
  else if(x<0 || x>lastindex)
     throw invalid;
  else
      return ptr[x];
}

int array::count()
{
  if(ptr==nullptr)
     throw invalid;
  return lastindex+1;
}

int array::search(int x)
{
  if(ptr==nullptr)
    throw invalid;
  for(int i=0;i<=lastindex;i++)
  {
    if(ptr[i]==x)
     return i;
  }
  return -1;
}