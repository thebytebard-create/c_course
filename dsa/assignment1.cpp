#include<iostream>
using namespace std;

#define invalid_cap 1
#define error 2
#define null 3

class array
{
   private:
     int capacity;
     int last_index;
     int *ptr;
   public:
     array(int );
     ~array();
     void create(int x);
     bool isempty();
     void append(int );
     void insert(int ,int );
     void edit(int ,int );
     void del(int);
     bool isfull();
     int get(int x);
     int count();
     int search(int x);

};

array::array(int x)
{
   try 
   {
   if(x<1)
     throw invalid_cap;
   else
   {
   capacity=x;
   last_index=-1;
   ptr=new int(capacity);
   }
   }
   catch(int e)
   {
      cout<<"invalid capacity"<<endl;
      ptr=NULL;
       last_index=-1;

   }

}
array::~array()
{
    if(ptr!=NULL)
   delete[]ptr;
  
  
}
void array::create(int x)
{
    try 
   {
   if(x<1)
     throw invalid_cap;
    if(ptr==NULL)
    { 
   capacity=x;
   last_index=-1;
   ptr=new int(capacity);
   }
   else 
   {
      if(x<1)
     throw invalid_cap;
     delete[]ptr;
      capacity=x;
   last_index=-1;
   ptr=new int(capacity);

   }
   }
   catch(int e)
   {
      cout<<"invalid capacity"<<endl;
      ptr=NULL;
       last_index=-1;

   }
}

bool array::isempty()
{
   try 
   {
      if (ptr=NULL)
        throw null;
         return last_index==-1;
   }
   catch(int e)
   {
      cout<<"the array has not been created"<<endl;
   }
  
}

void array::append(int x)
{
      
   try 
   {
      if(ptr==NULL)
        throw null;
      if(last_index==capacity-1)
        cout<<"array overflow";
      else 
      {  
      ptr[last_index+1]=x;
      last_index++;
      }
   }
   catch(int e)
   {
      if(e==3)
      cout<<"the array has not been created "<<endl;
   }
}

void array::insert(int x,int y)
{
   try 
   {
      if(ptr==NULL)
      throw null;
   if(last_index==capacity-1)
      cout<<"no space left";
   else if(last_index+1<x&&x>0)
     cout<<" invalid index or fill previous one";
   else 
   {
       for(int j=x;j<=last_index;j++)
       {
         ptr[j+1]=ptr[j];
       }
       ptr[x]=y;
       last_index++;
   }  

   }
   catch(int e)
   {  
     
      cout<<"the array has not been created"<<endl;

   }
}
void array::edit(int x,int y)
{
   try 
   {
   if(ptr==NULL)
     throw null;
   if(last_index<x||x<0)
     cout<<"invalid index or empty element ";
   else
   ptr[x]=y;
   }
   catch(int e)
   {
      cout<<"the array has not been created"<<endl;
   }
}

void array::del(int x)
{
   try 
   {
   if(ptr==NULL)
     throw null;
   if(last_index<x||x<0)
     cout<<"invalid index or empty element ";     
   else
   {
   for(int j=x;j<last_index;j++)
   {
   ptr[j]=ptr[j+1];
   }
  last_index--;
   }
   }
   catch(int e)
   {
      
      cout<<"the array has not been created"<<endl;
   }
}

bool array::isfull()
{
   return last_index==capacity-1;
}

int array::get(int x)
{
   try 
   {
   if(ptr==NULL)
     throw null;
   if(last_index<x||x<0)
     cout<<"invalid index or empty space"<<endl;
   else
    return ptr[x];
   }
   catch(int e)
   {
      cout<<"the array has not been created"<<endl;
   }
}

int array::count()
{
   try 
   {
   if(ptr==NULL)
     throw null;
   return last_index+1;
   }
   catch(int e)
   {
      cout<<"the array has not been created"<<endl;
   }
}

int array::search(int x)
{
   int j;
   try 
   {
   if(ptr==NULL)
       throw null;
   for( j=0;j<=last_index;j++)
   {
      if(ptr[j]==x)
      return j;
   }
   if(j>last_index)
   {
     cout<<"data not found";
   }
   }  
   catch(int e)
   {
      cout<<"the array has not been created";
   }
  
      
}
int main()
{
  array obj(4);

   
   return 0;


}