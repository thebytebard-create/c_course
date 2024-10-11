#include<iostream>
using namespace std;
#define error 1
class queue
{
   private:
    int capacity;
    int front,rear ;
    int *ptr;
   public:
    queue(int);
    ~queue();
    void insert(int);
    int view_rear();
    int view_front();
    void del();
    bool check_overflow();
    bool check_underflow();
    int count();

};
queue::~queue()
{
   delete []ptr;
}

queue::queue(int x)
{
    capacity=x;
    front=rear=-1;
    ptr=new int[capacity];
}

bool queue::check_overflow()
{
    if(rear==capacity-1)
     return true;
    else
      return false;
}

bool queue::check_underflow()
{
    if(rear==-1)
     return true;
    else
      return false;
}

void queue::insert(int data)

{
    if(!check_overflow())
    {
   rear++;
      ptr[rear]=data;
      if(rear==0)
        front=0;
    }
    else
    cout<<endl<<"queue is full ";
}

int queue::view_rear()
{
    if(!check_underflow())
        return ptr[rear]; 
  else
   return -1;
       
  
}
int queue::view_front()
{
  if(!check_underflow())
         return ptr[front]; 
  else
   return -1;
       
}

void queue::del()
{
  int i;
  if(!check_underflow())
  {
  for(i=0;i<rear;i++)
  {
    ptr[i]=ptr[i+1];
  }
   rear--;
    if(rear==-1)
    front=-1;
  }
  else
      cout<<endl<<"queue is already empty ";

}

int queue::count()
{
    return rear+1;

}


int main()
{
    queue p(5);

    int i=0,j;
    while(i!=1)
    {
        scanf("%d",&j);
        p.insert(j);
        i++;
    }
    cout<<endl<<p.view_rear();
    p.del();
    cout<<endl<<p.view_rear();
    cout<<endl<<p.view_front();
    cout<<endl<<p.count();
       return 0;
}