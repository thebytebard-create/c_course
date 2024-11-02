#include<iostream>
using namespace std;

class node
{
  public:
   node*next;
   int item,vert;
};

class adjlist
{
  private:
  int vertex;
     node *start;
  public:
     adjlist();
     adjlist(int);
     node*getstart();
     void insert(int ,int);
     void setvertex(int);
     void del();
     void print();
     ~adjlist();

};

node* adjlist::getstart()
{
  return start;
}
adjlist::adjlist()
{
  start=nullptr;
}
void adjlist::setvertex(int v)
{
  vertex=v;
}

adjlist::adjlist(int v)
{
  start=nullptr;
  vertex=v;
}
adjlist::~adjlist()
{
  while(start)
     del();
}

void adjlist::del()
{
  node*t;
  if(start)
  {
    t=start;
    start=start->next;
    delete t;
  }
   
}

void adjlist::insert(int data,int v)
{

  node*n=new node();
  n->vert=v;
  n->item=data;
  n->next=start;
  start=n;
}

void adjlist::print()
{
  node*t;
  t=start;
     while(t)
     {
        cout<<endl<<t->vert<<" "<<t->item;
        t=t->next;
     }
}
class graph 
{
   private:
   int v_count;
      adjlist *arr;
   public:
       graph();
       ~graph();
       int getv_count();
       void create(int v);
       void print();
};

graph::graph()
{
  arr=nullptr;
}

 int graph::getv_count()
 {
  return v_count;
 }
graph::~graph()
{
      delete []arr;
}

void graph::create(int v)
{
    v_count=v;
    arr=new adjlist[5];
  int j,k;
    for(int i=0;i<v_count;i++)
    {
      cout<<endl<<"enter item and vertex number";
      cin>>j>>k;
      arr[i].insert(j,k);
    }
}

 void graph:: print()
 {
     for(int i=0;i<v_count;i++)
     {
      arr[i].print();
     }
 }