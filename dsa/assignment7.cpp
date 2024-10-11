#include<iostream>
using namespace std;
struct node
{
    node* prev;
    int item;
    node* next;
};

class cdll
{
  private:
    node *start;
  public:
     cdll();
     ~cdll();
     void insertfirst(int);
     void insertend(int);
     node*search(int );
     void insertafter(node*,int);
     void deletefirst();
     void deleteend();
     void deletenode(int );
};

cdll::cdll()
{
    start=NULL;
}

cdll::~cdll()
{
    while(start)
       deletefirst();
}

void cdll::insertfirst(int data)
{
   node*n=new node;

   if(start==NULL)
   {
    n->next=n;
    n->prev=n;
    n->item=data;
   }
   else 
   {
    n->next=start;
    n->prev=start->prev;
    n->item=data;
    start->prev->next=n;
    start->prev=n;
    start=n;
   }    
}


void cdll::insertend(int data)
{
    node *n=new node;
    if(start==NULL)
    {
       n->next=n;
    n->prev=n;
    n->item=data;  
    }
    else
    {
        n->next=start;
        n->prev=start->prev;
        start->prev->next=n;
        start->prev=n;
    }
}

node* cdll::search(int data)
{
     node*t=start;
    if(start==NULL)
       return NULL;
    else
    {
      do{
           if(t->item==data)
           return t;
           t=t->next;

        }while(start!=t);

    }
    return NULL;
}

void cdll::insertafter(node*t,int data)
{
    
    if(t)
    {
        node*n=new node;
        n->item=data;
        n->next=t->next;
        n->prev=t;
        t->next=n;
        t->next->prev=n;

    }
}

void cdll::deletefirst()
{
    if(start)
    {
   node*t;
   if(start->next==start)
   {
    delete start;
    start=NULL;
   }
   else
   {
     t=start;
    start->next->prev=start->prev;
    start->prev->next=start->next;
    start=start->next;
    delete t;
   }
   }
}

void cdll::deleteend()
{
    node *t;
    if(start);
    {
         if(start->next==start)
    {
       delete start;
       start=NULL;
    }
    else
    {
        t=start->prev;
        start->prev->prev->next=start;
        start->prev=start->prev->prev;
        delete t;
    }
    }
}

void cdll::deletenode(int data)
{
   
    if(start)
    {
    if(start->next==start&& data==start->item)
    {
        delete start;
        start=NULL;
    }
    else
    {
        node*t;
       t=start;
       do
       {
         if(t->item==data)
         {
           t->prev->next=t->next;
           t->next->prev=t->prev;
           if(start==t)
            start=t->next;
           delete t;
         }
         t=t->next;
       } while (t!=start);
       
    }
    }
}