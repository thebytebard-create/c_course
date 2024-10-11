#include<iostream>
#define error 1
#define empty 2
using namespace std;

class stack
{
   private :
     int capacity;
     int top;
     int *ptr;
   public:
     stack(int);
     ~stack();
    void push(int);
    int peek( );
    void pop();
    bool isfull();
    bool isempty();
    void reverse();
    int min();
    int size();
};

int stack::size()
{
    return top+1;
}
stack::stack(int x)
{
   capacity=x;
   ptr=new int[capacity];
   top=-1;
}

stack::~stack()
{
    delete [] ptr;
}


void stack::push(int data)
{   
    try 
    {
    if(isfull())
       throw error;
    ptr[++top]=data;
    }
    catch(int e)
    {
        cout<<"overflow";
    }
      
}


int stack::peek()
{
  
   if(isempty())
   throw empty;
    return ptr[top];
    
}


void stack::pop()
{
   
    if(isempty())
       throw empty;
    top--;
  
}


bool stack::isfull()
{
    if(top==capacity-1)
    return true;
    return false;
}


bool stack::isempty()
{
    if(top==-1)
   return true;
   return false;
}

void stack::reverse()
{
    stack a(top+1);
    for(int i=0;i<=top;i++)
      a.push(ptr[i]);
    for(int i=0;i<=top;i++)
    {
       ptr[i]=a.peek();
       a.pop();
    }
}

void reverse(stack &e)
{
    // another function to reverse  by pure stack logic
    stack s1(e.size()),s2(e.size());
     
     while(!e.isempty())
     {
        s1.push(e.peek());
        e.pop();
     }
      while(!s1.isempty())
     {
        s2.push(s1.peek());
        s1.pop();
     }
       while(!s2.isempty())
     {
        e.push(s2.peek());
        s2.pop();
     }
}

int menu()
{
   cout<<endl<<"1. push";
   cout<<endl<<"2. pop";
   cout<<endl<<"3. peek";
   cout<<endl<<"4. Underflow";
   cout<<endl<<"5. Overflow";
   cout<<endl<<"6. reverse";
    cout<<endl<<"7. minimum value ";
    cout<<endl<<"8. exit ";
   cout<<endl<<"Enter your choice : ";
   int x;
   cin>>x;
   return x;
}

int stack::min()
{
    int temp;
    for(int i=0;i<top+1;i++)
    {
        for(int j=i+1;j<top+1;j++)
        {
            if(ptr[i]>ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
    return ptr[0];    
}

int main()
{
    cout<<"enter capacity of stack :";
    int y;
    cin>>y;
    stack s(y);
    while(1)
    {
        switch(menu())
        {
            case 1:
            cout<<endl<<"enter data :";
            int x;
            cin>>x;
             s.push(x);
            break;
            case 2:
             s.pop();
             break;
            case 3:
             cout<<endl<<s.peek();
             break;
             case 4:
             cout<<endl<<s.isfull();
             break;
              case 5:
             cout<<endl<<s.isempty();
             break;
             case 6:
              s.reverse();
              break;
             case 7:
                cout<<endl<<s.min();
                break;
              case 8:
              return 0;
             default:
               cout<<endl<<"wrong choice ";
               break;

            
        }
    }
}
