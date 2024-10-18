#include<iostream>
using namespace std;

#define empty 1

struct node
{
  node*prev;
  node*next;
  int item;
};

class dequeue
{
   private :
      node*front,*rear;
      int size;
   public:
      dequeue();
      ~dequeue();
      void insert_front(int);
      void insert_rear(int);
      void del_front();
      void del_rear();
      int get_front();
      int get_rear();
      bool is_empty();   
};

dequeue::dequeue()
{
   rear= front=nullptr;
   size=0;
}

dequeue::~dequeue()
{
    while(front)
     del_front();
}

void dequeue::insert_front(int data)
{
    node*n=new node();
    n->item=data;
    n->prev=nullptr;
    n->next=front;
    if(rear!=nullptr)
    {
        front->prev=n;
        front=n;
    }
    else
       front=rear=n;   
      
}


void dequeue::insert_rear(int data)
{
  node*n=new node();
    n->item=data;
    n->next=nullptr;
    n->next=rear;
    if(rear!=nullptr)
    {
        rear->next=n;
        rear=n;
    }
    else
       front=rear=n;
      
}


void dequeue::del_front()
{
  if(front)
    {
        node*t;
        t=front;
        if(front->next==nullptr)
        rear=front=front->next;
        else
          front=front->next;
        front->prev=nullptr;
        delete t;
    }   
    
}

void dequeue::del_rear()
{
  if(rear)
    {
        node*t;
        t=rear;
         if(front->next==nullptr)
          front=rear=rear->prev;
        else 
         rear=rear->prev;
        rear->next=nullptr;
        delete t;
    }  
    
}

int dequeue::get_front()
{
    if(front)
      return front->item;
    else
      throw empty;
}

int dequeue::get_rear()
{
    if(rear)
      return rear->item;
    else
      throw empty;
}

bool dequeue::is_empty()
{
    if(front)
     return false;
    else
      return true;
}

int main()
{
  return 0;
}