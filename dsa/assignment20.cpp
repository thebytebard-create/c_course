#include<iostream>

using namespace std;

class heap
{
   private:
      int capacity;
      int last_index;
      int *ptr;
   public:
      heap(int x);
      heap(const heap &);
      ~heap();
      void sort();
      void insert(int x);
      bool empty();
      int max();
      void del();
      heap& operator=(heap&);
};

heap::heap(int x)
{
    capacity=x;
    last_index=-1;
    int *ptr=new int[capacity];
    for(int i=0;i<capacity;i++)
       ptr[i]=0;
}

heap::heap(const heap &e)
{
   capacity=e.capacity;
   last_index=e.last_index;
   ptr=new int[capacity];

   for(int i=0;i<=last_index;i++)
     ptr[i]=e.ptr[i];
}

heap::~heap()
{
   delete []ptr;
}
void heap::insert(int x)
{
    
     if(last_index==-1)
     {
        last_index=0;
        ptr[last_index]=x;
     }
     else
     {
       int p;
       last_index++;
       p=(last_index-1)/2;
       if(ptr[p]>x)
          ptr[last_index]=x;
       else
       {
        int b=last_index;
         while(ptr[p]<x)
         {
            ptr[b]=ptr[p];
            ptr[p]=x;
            b=p;
            p=(b-1)/2;
            if(b==0)
            break;
         }
       }
     }
}

bool heap::empty()
{
    if(ptr[0]==0)
      return true;
    return false;
}

int heap::max()
{
    return ptr[0];
}

void heap::del()
{
   if(last_index>=0)
   {
     int i=0;
     int temp;
     temp=ptr[last_index];
     ptr[last_index]=ptr[i];
     last_index--;

     if(last_index>=0)
     {
       int a,b,c;
        while(true)
        {
          a=(2*i)+1;
          b=(2*i)+2;
          if(a>last_index)
           break;
          if(b>last_index)
            c=a;
         else         
          c=ptr[a]>ptr[b]?a:b;
          if(temp>=ptr[c])
          {
            ptr[i]=temp;
           break;
          }
          else
          {
             ptr[i]=ptr[c];
             i=c;
          }
        }
     }

   }
   else
   cout<<"heap is already empty ";
}

void heap::sort()
{
   int s=last_index;
    while(last_index>0)
   {
     int i=0;
     int temp;
     temp=ptr[last_index];
     ptr[last_index]=ptr[i];
     last_index--;

     if(last_index>=0)
     {
       int a,b,c;
        while(true)
        {
          a=(2*i)+1;
          b=(2*i)+2;
          if(a>last_index)
           break;
          if(b>last_index)
            c=a;
         else         
          c=ptr[a]>ptr[b]?a:b;
          if(temp>=ptr[c])
          {
            ptr[i]=temp;
           break;
          }
          else
          {
             ptr[i]=ptr[c];
             i=c;
          }
        }
     }

   }
   last_index=s;
}

 heap& heap::operator=(heap&e)
 {
   if(this==&e)
   return *this;

   delete []ptr;

   capacity=e.capacity;
   last_index=e.last_index;

   ptr=new int[capacity];
   for(int i=0;i<=last_index;i++)
    ptr[i]=e.ptr[i];
    return *this;
 }

