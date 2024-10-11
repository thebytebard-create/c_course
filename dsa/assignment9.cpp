#include<iostream>
using namespace std;
#define error 1

struct node
{
     int item ;
     node *next;
};
 
class stack
{
  private:
    node*top;
  public:
    stack();
    ~stack();
    void push(int);
    int peek();
    int value();
    void pop();
    void reverse();
    bool check_palindrome();
    
};
 stack::stack()
 {
   top=nullptr;
 }
 stack::~stack()
 {
   while(top)
   pop();
 }
 void stack::push(int data)
 {
   node *n=new node();
   n->item=data;
   
   if(top==nullptr)
   {
   n->next=n;
   top=n;
   }
   else
   { 
      if(top==top->next)
   top->next=n;
   else 
   {
      node *temp=top;
      while(top!=temp->next)
      temp=temp->next;
      temp->next=n;
   }
   n->next=top;
   top=n;
   }
   
 }

 void stack::pop()
 {
   node *t;
   if(top==nullptr);
   else if(top==top->next)
   {
      delete top;
      top=nullptr;
   }
   else
   {
  t=top;
   node *temp=top;
      while(top!=temp->next)
      temp=temp->next;
  top=top->next;
  temp->next=top;
  delete t;
   }
 }

 int stack::peek()
 {
   if(top==nullptr)
   throw error;
   else 
   return top->item;
 }

 int stack::value()
 {
   if(top==nullptr)
   return 0;
   
      node *t;
      int i=0;
      t=top;
      do
      {
       i++;
       t=t->next;
      } while (t!=top);
      return i;

 }

  void stack::reverse()
  {
   stack s1,s2;
   int i=0;
   while(i!=value())
   {
      s1.push(peek());
      pop();
   }
   i=0;
    while(i!=s1.value())
   {
      s2.push(s1.peek());
      s1.pop();
   }
   i=0;
    while(i!=s2.value())
   {
      push(s2.peek());
      s2.pop();
   }
  }

   bool stack::check_palindrome()
   {
      stack s1,s2;
   int i=0;
   while(i!=value())
   {
      s1.push(peek());
      s2.push(peek());
      pop();
   }
   i=0;
    while(i!=s1.value())
   {
      push(s1.peek());
      s1.pop();
   }
   i=0;
    while(i!=s2.value())
   {
      if(s2.peek()!=peek())
      return false;
      pop();
      s2.pop();
   }
   return true;
   }


 int main()
 {
   stack p;
   int i=0,j;
   while(i!=5)
   {
      i++;
      scanf("%d",&j);
      p.push(j);
   }
   
  cout<<endl<<p.peek();
   cout<<endl<<p.check_palindrome();
    // cout<<endl<<p.value();
    
   return 0;
 }