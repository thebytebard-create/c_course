#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class graph
{
   private:
     int v_count,e_count;
     int **adj;
   public:
      graph(int,int);
      ~graph();
      void creategraph(int u,int v);
      void print();
      void print_adjacent(int);
      bool is_isolated(int);
      void BFS(int);
      void dfs(int start);

};

graph::graph(int m,int n)
{
    v_count=m;
    e_count=n;
    adj=new int*[v_count];
    for(int i=0;i<v_count;i++)
       adj[i]=new int[v_count];

     for(int i=0;i<v_count;i++)
           for(int j=0;j<v_count;j++)
            adj[i][j]=false;

    for(int i=0;i<e_count;i++)
    {
        int u,v;
        cout<<"enter node number conecting edge : ";
        cin>>u>>v;  
         adj[u][v]=true;
         adj[v][u]=true;
   
    }
       
}

graph::~graph()
{
    for(int i=0;i<v_count;i++)
     delete adj[i];
     delete [] adj;
}


void graph::print()
{
     for(int i=0;i<5;i++)
       {
        cout<<" vertics "<<i<<" :";
           for(int j=0;j<v_count;j++)
           {
            cout<<" "<<adj[i][j];
           }
           cout<<endl;
       }
}

void graph::print_adjacent(int vertics)
{
   if(vertics>=0&&vertics<v_count) 
   {
   for(int j=0;j<v_count;j++)
   if(adj[vertics][j])
   cout<<" "<<adj[vertics][j];
   }
   else
   cout<<"invalid vertics ";
}

bool graph::is_isolated(int vertics)
{
   if(vertics>=0&&vertics<=v_count)
   {
    int j;
   for(j=0;j<v_count;j++)
  {
    if(adj[vertics][j]==1)
    return  false;
  }
  
     return true;
   }
   return false;
}

void graph::BFS(int start)
 {
       bool *v=new bool[v_count];
       for (int i = 0; i < v_count; i++) 
            v[i] = false;
       queue<int> q;
       q.push(start);
       v[start]=true;
       int current;

       while(!q.empty())
       {
        current = q.front();
        cout<<" "<<current;
        q.pop();

        for(int j=0;j<v_count;j++)
        {
            if(adj[current][j]==1&&!v[j])
            {
            q.push(j);
            v[j]=true;
            }
        }
       }
       cout<<endl;
       delete[] v;
}

void graph ::dfs(int start)
{
     bool *v=new bool[v_count];
       for (int i = 0; i < v_count; i++) 
            v[i] = false;
       stack<int> q;
       q.push(start);
       v[start]=true;
       int current;

       while(!q.empty())
       {
        current = q.top();
        cout<<" "<<current;
        q.pop();

        for(int j=0;j<v_count;j++)
        {
            if(adj[current][j]==1&&!v[j])
            {
            q.push(j);
            v[j]=true;
            }
        }
       }
       cout<<endl;
       delete[] v;
}


    