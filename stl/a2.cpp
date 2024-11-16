#include<iostream>
using namespace std;

#define invalid 1

template <typename X>
class array
{
   private:
      int capacity;
      int lastindex;
      X *ptr;
   public:
       array(int );
       array(const array&e);
       ~array();
       bool empty();
       array& operator=(const array &e);
       void create(int x);
       void append(X);
       void insert(int x,X);
       void edit(int x,X);
       void del(int x);
       bool full();
       X get(int);
       int count();
       int search(X);

};
template <typename X>
 array<X>::array(int x)
{
   try
   {
   if(x<1)
      throw invalid;
    capacity=x;
    lastindex=-1;
    ptr=new X[capacity];
   }
   catch(int e)
   {
      cout<<"invalid capacity";
      ptr=nullptr;
   }
}
template <typename X>
array<X>::~array()
{
   if(ptr!=nullptr)
       delete []ptr;
}
template<typename X>
array<X>::array(const array&e)
{
   capacity=e.capacity;
   lastindex=e.lastindex;

   ptr=new X[capacity];

   for(int i=0;i<=lastindex;i++)
      ptr[i]=e.ptr[i];
}
template <typename X>
array<X>& array<X>::operator=(const array &e)
{
    if(this==&e)
      return *this;
    
    delete []ptr;
    capacity=e.capacity;
   lastindex=e.lastindex;

   ptr=new X[capacity];

   for(int i=0;i<=lastindex;i++)
      ptr[i]=e.ptr[i];

      return *this;
}

template <typename X>
bool array<X>::empty()
{

     if(ptr==nullptr)
     throw invalid;
       return lastindex==-1; 
}
template <typename X>
void array<X>::create(int x)
{
   if(x<1)
     throw invalid;
    if(ptr!=nullptr)
      delete []ptr;
      ptr=new X[x];
      capacity=x;
      lastindex=-1;
}
template <typename X>
void array<X>::append(X x)
{
    if(ptr==nullptr)
       throw invalid;
    else if (full())
       throw invalid;
    else
      ptr[++lastindex]=x;
      
}
template <typename X>
void array<X>::insert(int x,X y)
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
template <typename X>
void array<X>::edit(int x,X y)
{
    if(ptr==nullptr)
       throw invalid; 
    else if(x<0 || x>lastindex)
     throw invalid; 
     else 
       ptr[x]=y;   
}
template <typename X>
void array<X>:: del(int x)
{
    if(ptr == nullptr)
       throw invalid;
    else if(x<0 || x>lastindex)
        throw invalid;
    else 
    {
      for(int j=x;j<lastindex;j++)
         ptr[j]=ptr[j+1];
      lastindex--;
    }   
}
template <typename X>
bool array<X>::full()
{
  if(ptr ==nullptr)
      throw nullptr;
  return lastindex==capacity-1;
}
template <typename X>
X array<X>::get(int x)
{
  if(ptr==nullptr)
     throw invalid;
  else if(x<0 || x>lastindex)
     throw invalid;
  else
      return ptr[x];
}
template <typename X>
int array<X>::count()
{
  if(ptr==nullptr)
     throw invalid;
  return lastindex+1;
}
template <typename X>
int array<X>::search(X x)
{
  if(ptr==nullptr)
    throw invalid;
  for(int i=0;i<=lastindex;i++)
  {
    if(ptr[i]==x)
     return i;
  }
  throw invalid;
}

int main()
{
    array<char> b(5);
    try
    {
        b.append('n');
     b.append('j');
      b.append('u');
       b.append('p');
        b.append('o');
        cout<<b.get(3);
    }
    catch(int e)
    {
        cout<<"invalid";
    }
    
        return 0;
}