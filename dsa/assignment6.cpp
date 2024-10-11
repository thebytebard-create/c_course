#include<iostream>
using namespace std;
struct node
{
   int item;
   node *next;
};

class cll
{
   private:
     node *last;
   public:
      cll();
      ~cll();
      void insertfirst(int);
      void insertlast(int);
      node * search(int);
      void insertafter(node*,int);
      void deletefirst();
      void deletelast();
      void deletenode(int);    

};

cll::cll()
{
   last=NULL;
}

cll::~cll()
{
   while(last)
       deletelast();
}

void cll::insertfirst(int data)
{
   node* n=new node;
   n->item=data;
  if(last)
  {
   n->next=last->next;
   last->next=n;
  }
  else
  {
   n->next=n;
   last=n;
  }

}


void cll::insertlast(int data)
{
  node *n=new node;
  n->item=data;
  if(last)
  {
   n->next=last->next;
   last->next=n;
   last=n;
  }
  else
  {
   n->next=n;
   last=n;
  }
}


void cll::insertafter(node* t,int data)
{
   if(t)
   {
      node *n=new node;
      n->item=data;
      n->next=t->next;
      t->next=n;
      if(t==last)
       last=n;

   }
}


node * cll::search(int data)
{
   node*t;
   if(last==NULL)
   return NULL;
   
      t=last->next;
   do
   {
      if(t->item==data)
      return t;
      t=t->next;
   }while(t!=last->next);
   
   return NULL;
}

void cll::deletefirst()
{                            
  if(last)
  {
      node *t;
      t=last->next;
      if(t==last)
        last=NULL;
      else
      last->next=t->next;
      
      delete t;
  }
}


void cll::deletelast()
{
   if(last)
   {
      if(last==last->next)
      {
         delete last;
         last=NULL;
      }
      else
      {
        node*t;
        t=last->next;
        while(t->next!=last)
        {      
         t=t->next;
        }
         t->next=last->next;
            delete last;
            last=t;
      }
   }
}


void cll::deletenode(int data)
{
   if(last)
   {
      node *t;
      if(last==last->next&&last->item==data)
      {
        delete last;
        last=NULL;
      }
      else
      {
      do
      {
         t=last;
         if(t->next->item==data)
         {
            node*p;
            p=t->next;
            t->next=p->next;
            if(t==last)
            last=t;
             delete p;
             break;
         }
         t=t->next;
      }while(t!=last);
      }
   }
}  


int main()
{
   cll l;
   l.insertfirst(10);
   l.insertlast(20);

   return 0;
}