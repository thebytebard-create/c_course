#include<iostream>
using namespace std;

#define empty 1
struct node
{
    node *next;
    int item;
};

class queue
{
   private:
      node*front,*rear;
      int size;
   public:
      queue();
      ~queue();
      void enqueue(int);
      int view_rear();
      int view_front();
      void dequeue();
      int count();
};

queue::queue()
{
   front=nullptr;
   rear=nullptr;
    size=0;
}

queue::~queue()
{
    while(front)
      dequeue();
}

void queue::enqueue(int data)
{
  node *n=new node();
  n->next=nullptr;
  n->item=data;
  if(rear==nullptr)
     rear=front=n;
  else
  {
    rear->next=n;
    rear=n;
  }
  size ++;
}

int queue::view_rear()
{
  if(rear!=nullptr)
     return rear->item;
  else
    return empty;
}

int queue::view_front()
{
  if(rear!=nullptr)
  return front->item;
  else
    throw empty;
}

void queue::dequeue()
{
  node *t;
    if(rear!=nullptr)
    { 
      t=front;
        if(front==rear)
           rear= front=nullptr;
        else
           front=front->next; 
         delete t;
    }
    size--;
}

int queue::count()
{
  return size;

}
/* //mera tarika
int queue::size()
{
   int i=0;
   if(rear!=nullptr)
   {
    node*t;
    t=front;
    for(i=1;t!=rear;i++)
      t=t->next;
   }

   return i;
}
*/

int main()
{
    queue p;
    p.enqueue(6);
    p.enqueue(5);
     p.enqueue(2);
      p.enqueue(8);

    printf("%d %d",p.view_front(),p.view_rear());
       return 0;

}