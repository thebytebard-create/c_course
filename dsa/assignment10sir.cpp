#include<iostream>
using namespace std;
#define error 1
#define empty 2
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
    if(rear==capacity-1&&front==0||rear+1==front)
       return true;
    else
       return false;
}

bool queue::check_underflow()
{
    if(front==-1)
     return true;
    else
      throw false;
}

void queue::insert(int data)

{
    if(check_overflow())
    throw error;
    else if(rear==-1)
     front=rear=0;
    else if(rear==capacity-1)
      rear=0;
    else
        rear++;
    ptr[rear]=data;

}

int queue::view_rear()
{
    if(check_underflow())
       throw empty; 
  else
   return ptr[rear];  
}


int queue::view_front()
{
   if(check_underflow())
       throw empty; 
  else
   return ptr[front];    
}

void queue::del()
{
   if(check_underflow())
       throw empty;
   if(front==rear)
       front==rear-1;
   else if(front==capacity-1)
     front=0;
    else;
     front++;
}

int queue::count()
{
   if(front>rear)
      return capacity-(front-rear)+1;
   else
      return rear-front+1;
       
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