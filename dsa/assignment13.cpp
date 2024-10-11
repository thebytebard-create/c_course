#include<iostream>
using namespace std;

struct node
{
     node*next;
     int p;
     int item;
};

class pq
{
    private:
     node*start;
    public:
      pq();
      ~pq();
      void enqueue(int data);
      void dequeue();
      int get_element();
      int get_number();
      bool isempty();

};

pq::pq()
{
    start=nullptr;
}

pq::~pq()
{
    while(start)
      dequeue();
}

void pq::enqueue(int data)
{
  node *n=new node;
  n->item=data;
  n->next=nullptr;
  n->p=1;
  if(start==nullptr)
    start=n;
  else if(start->next==nullptr)
  {
    if(start->item>=n->item)
    {
      n->next=start;
      start=n;
      if(start->item!=n->item)
      n->p=2;
    }
    else
    {
      start->next=n;
      n->p=2;
    }
  }
  else
  {
    node*t,*t2,*k=start;
    t=start;
    t2=nullptr;
    do
    {
      if(t->item>=n->item)
      {
        if(start==t)
            start=n;
        else
            t2->next=n;
        n->next=t;
        n->p=t->p;
        if(n->item!=t->item)
        {
            k=t;
            while(k!=nullptr)
            {
              k->p=k->p+1;
              k=k->next;
            }
        }
        k=nullptr;
      }
      if(k==nullptr)
         break;
      t2=t;
      t=t->next;
    } while (t!=nullptr);   
     if(t==nullptr)
     {
      t2->next=n;
      n->p=t2->p+1;
     }
  } 
}

void pq::dequeue()
{
  if(start!=nullptr)
  {
    if(start->next==nullptr)
    {
       delete start;
       start=nullptr;
    }
    else
      {
        node*t=start;
        if(t->next->next!=nullptr)
          t=t->next;
        delete t->next->next;
        t->next=nullptr;
      }
  }
}

int pq::get_element()
{
  if(start==nullptr)
    return -1;
  else
  {
  node*t=start;
  while(t->next!=nullptr)
     t=t->next;
  return t->item;
  }

  return -1;
  
}

int pq::get_number()
{
  if(start==nullptr)
    return 0 ;
  else
  {
  node*t=start;
  while(t->next!=nullptr)
     t=t->next;
  return t->p;
  }
  return -1;
}

bool pq::isempty()
{
  if(start==nullptr)
    return true;
  return false;
}

int main()
{
 pq k;
 k.enqueue(5);
k.enqueue(8);
 k.get_element();
 return 0;


}