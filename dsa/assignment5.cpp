#include<iostream>
using namespace std;

struct node
{
 node* prev;
 int item;
 node*next;
};

class dll
{
    private:
      node* start;
    public:
      dll();
      ~dll();
      void insertfirst(int );
      void insertlast(int);
      void insertafter(node*,int);
      node* search(int);
      void deletefirst();
      void deletelast();
      void deletenode(int);
      void printdll();
      
};

dll::dll()
{
    start=NULL;
}

dll::~dll()
{
    while(start)
       deletefirst();
}

void dll::insertfirst(int data)
{
    node *n=new node;
    n->next=start;
    n->prev=NULL;
    n->item=data;
    if(start!=NULL)
        start->next->prev=n;
    start=n;
    
}

void dll::insertlast(int data)
{
    node*n=new node,*t;
     
     n->item=data;
     n->next=NULL;
     if(start==NULL)
     {
        n->prev=NULL;
        start=n;
     }
    else
    {
        t=start;
       while(t->next!=NULL)
          t=t->next;
       t->next=n;
       n->prev=t;   
    }
}

void dll::insertafter(node*t,int data)
{
   node *n;
  
    if(t)
    {
        n=new node;
         n->item=data;
        n->next=t->next;
        n->prev=t;
        if(t->next!=NULL)
            t->next->prev=n;
         t->next=n;
    }
}

node* dll::search(int data)
{
    node*t;
   
    while(start)
    {
         t=start;
        if(t->item==data)
          return t;
        t=t->next;
    }
    return NULL;
}

void dll::deletefirst()
{
  node*t;
   if(start)
   {
      if(start->next==NULL)
       {
         delete start;
         start=NULL;
       }
      else
      {
       start=start->next;
       if(start)
       {
        delete start->prev;
        start->prev=NULL;
       }
      }
   }
}

void dll::deletelast()
{
    node *t;
   
    if(start)
    {
         t=start;
      if(t->next==NULL)
        delete t;
      else
      {
        while(t->next!=NULL)
           t=t->next;
        t->prev->next=NULL;
         delete t;
      }
    }
}

void dll::deletenode(int data)
{
    node *t;
    
   if(start)
   {
    t=start;
       while(t)
       {
        if(t->item==data)
           {
            if(t==start)
                  deletefirst();
            else
            {
                if(t->next)
                    t->next->prev=t->prev;
                t->prev->next=t->next;
                delete t;
            }
           }
           t=t->next;
       }
   
   }
}

void dll::printdll()
{
   node *t;
   t=start;
   while(t)
   {
    cout<<t->item<<" ";
    t=t->next;
   }
}

int main()
{
   dll d;
   d.insertfirst(10);
   d.insertlast(20);
   d.insertafter(d.search(20),30);
   d.printdll();
   return 0;
}

