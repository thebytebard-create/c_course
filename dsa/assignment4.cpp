#include<iostream>
using namespace std;

struct node
{
  int item;
  node *next;
};

class sll
{
  private:
  node *start;
  public:
   sll();
   ~sll();
   void insertfirst(int );
   void insertlast(int );
   void insertnode(int,node* );
   node* search(int );
   void deletefirst();
   void deletelast();
   void deletenode(int data);
};

sll::sll()
{
  start=NULL;
}

void sll::insertfirst(int data)
{
  node *n=new node;
     
    n->item =data;
    n->next=start->next;
    start=n;
    

}

sll::~sll()
{
  while(start)
     deletefirst();
}

void sll::insertlast(int data)
{
  node *n=new node;
  node *t;
  n->item=data;
  if(start==NULL)
     start=n;
  else
  {   
  t=start;
  while(t->next==NULL)
     t=t->next;
    t->next=n;
  }
}

void sll::insertnode(int data,node*t)
{
  node *n=new node;
  if(t)
  {
  n->next=t->next;
  n->item=data;
  t->next=n;
  }  
}

node* sll::search(int data)
{
  node*t;
    t=start;
    while(t)
    {
      if(t->item==data)
          return t;
       t=t->next;      
    }
  return NULL;
}

void sll::deletefirst()
{
  node*t;
  if(start)
  {
   t=start;
   start=start->next;
   delete t;
  }
}

void sll::deletelast()
{
  node *t;
  if(start)
  {
    if(t->next==NULL)
    {
      delete t;
      t=NULL;
    }
    else
    {
    t=start;
    while(t->next->next!=NULL)
        t=t->next;
     delete t->next;
     t->next=NULL;
    }  
  }

}

void sll::deletenode(int data)
{
  node *t,*t2;
  if(start)
  {
   t=start;
   t2=NULL;
   while(t)
    {
      if(t->item==data)
       break;
      t2=t;
      t=t->next;
    }
  } 
  if(t)
  {
    if(t2==NULL)
      delete start;
     else
     {
     t2->next=t->next;
     delete t;
     }
  }
}

