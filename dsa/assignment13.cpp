#include <iostream>
using namespace std;

struct node
{
  node *next;
  int p;
  int item;
};

class pq
{
private:
  node *start;

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
  start = nullptr;
}

pq::~pq()
{
  while (start)
    dequeue();
}

void pq::enqueue(int data)
{
  node *n = new node;
  n->item = data;
  n->next = nullptr;
  n->p = 1;
  if (start == nullptr)
    start = n;
  else if (start->next == nullptr)
  {
    if (start->item >= n->item)
    {
      n->next = start;
      start = n;
      if (start->item != n->item)
        n->p = 2;
    }
    else
    {
      start->next = n;
      n->p = 2;
    }
  }
  else
  {
    node *t, *t2, *k = start;
    t = start;
    t2 = nullptr;
    do
    {
      if (t->item >= n->item)
      {
        if (start == t)
          start = n;
        else
          t2->next = n;
        n->next = t;
        n->p = t->p;
        if (n->item != t->item)
        {
          k = t;
          while (k != nullptr)
          {
            k->p = k->p + 1;
            k = k->next;
          }
        }
        k = nullptr;
      }
      if (k == nullptr)
        break;
      t2 = t;
      t = t->next;
    } while (t != nullptr);
    if (t == nullptr)
    {
      t2->next = n;
      n->p = t2->p + 1;
    }
  }
}

void pq::dequeue()
{
  if (start != nullptr)
  {
    if (start->next == nullptr)
    {
      delete start;
      start = nullptr;
    }
    else
    {
      node *t = start;
      if (t->next->next != nullptr)
        t = t->next;
      delete t->next->next;
      t->next = nullptr;
    }
  }
}

int pq::get_element()
{
  if (start == nullptr)
    return -1;
  else
  {
    node *t = start;
    while (t->next != nullptr)
      t = t->next;
    return t->item;
  }

  return -1;
}

int pq::get_number()
{
  if (start == nullptr)
    return 0;
  else
  {
    node *t = start;
    while (t->next != nullptr)
      t = t->next;
    return t->p;
  }
  return -1;
}

bool pq::isempty()
{
  if (start == nullptr)
    return true;
  return false;
}

class lpq
{
private:
  node *start;

public:
  lpq();
  ~lpq();
  void enqueue(int data);
  void dequeue();
  int get_element();
  int get_number();
  bool isempty();
};

lpq::lpq()
{
  start = nullptr;
}

lpq::~lpq()
{
  while (start)
    dequeue();
}

void lpq::enqueue(int data)
{
  node *n = new node;
  n->item = data;
  n->next = nullptr;
  n->p = 1;
  if (start == nullptr)
    start = n;
  else if (start->next == nullptr)
  {
    if (start->item <= n->item)
    {
      n->next = start;
      start = n;
      if (start->item != n->item)
        n->p = 2;
    }
    else
    {
      start->next = n;
      n->p = 2;
    }
  }
  else
  {
    node *t, *t2, *k = start;
    t = start;
    t2 = nullptr;
    do
    {
      if (t->item <= n->item)
      {
        if (start == t)
          start = n;
        else
          t2->next = n;
        n->next = t;
        n->p = t->p;
        if (n->item != t->item)
        {
          k = t;
          while (k != nullptr)
          {
            k->p = k->p + 1;
            k = k->next;
          }
        }
        k = nullptr;
      }
      if (k == nullptr)
        break;
      t2 = t;
      t = t->next;
    } while (t != nullptr);
    if (t == nullptr)
    {
      t2->next = n;
      n->p = t2->p + 1;
    }
  }
}

void lpq::dequeue()
{
  if (start != nullptr)
  {
    if (start->next == nullptr)
    {
      delete start;
      start = nullptr;
    }
    else
    {
      node *t = start;
      if (t->next->next != nullptr)
        t = t->next;
      delete t->next->next;
      t->next = nullptr;
    }
  }
}

int lpq::get_element()
{
  if (start == nullptr)
    return -1;
  else
  {
    node *t = start;
    while (t->next != nullptr)
      t = t->next;
    return t->item;
  }

  return -1;
}

int lpq::get_number()
{
  if (start == nullptr)
    return 0;
  else
  {
    node *t = start;
    while (t->next != nullptr)
      t = t->next;
    return t->p;
  }
  return -1;
}

bool lpq::isempty()
{
  if (start == nullptr)
    return true;
  return false;
}

class apq
{
private:
  int capacity;
  int count;
  int **ptr;

public:
  apq(int);
  ~apq();
  void enqueue(int data);
  void dequeue();
  int get_element();
  int get_number();
  bool isempty();
};

apq::apq(int data)
{
  capacity = data;
  count = 0;
  ptr = new int *[capacity];
  for (int i = 0; i < capacity; i++)
  {
    ptr[i] = new int[2];
  }
}

apq::~apq()
{
  for (int i = 0; i < capacity; i++)
  {
    delete[] ptr[i];
  }
  delete[] ptr;
}

void apq::enqueue(int data)
{
  if(capacity!=count)
  {
    if(ptr[count][1]==0)
    {
      ptr[count][0]=data;
      ptr[count][1]=count+1;
      count++;
    }
    else
    {
      int p,q,i=0;
      do
      {
        if(ptr[i][0]>data)
        {
          p=ptr[i][0];
          ptr[i][0]=data;
          
          for(int j=i+1;j<=count;j++)
          {
            q=ptr[j][0];
            ptr[j][0]=p;
            p=q;
          }
          break;
        }
        i++;
      } while (i!=count+1);
      ptr[count][1]=count+1;
      count++;
    }
  }
}

int apq::get_element()
{
  if(ptr[count-1][1]!=0)
    return ptr[count-1][0];
  return -1;
}

 void apq::dequeue()
 {
  if(ptr[count-1][1]!=0)
   count--;
 }
  
  int apq::get_number()
  {
     if(ptr[count-1][1]!=0)
    return ptr[count-1][1];
  return -1;
  }
  bool apq:: isempty()
  {
    if(ptr[count-1][1]==0)
      return true;
    return false;
  }
int main()
{
 apq k(10);
 k.enqueue(2);
 k.enqueue(5);
 k.enqueue(1);
 k.enqueue(3);
 cout<<k.get_element();
 k.dequeue();
 cout<<k.get_element();
 cout<<k.isempty();


  return 0;
}