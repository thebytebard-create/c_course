#include<iostream>
#include <stack>
#include<string.h>
using namespace std;

void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=(n-1)-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
}

void modified_bubble_sort(int a[],int n)
{
    int i,j,temp;
    bool flag;
    for(i=0;i<=n-1;i++)
    {
        flag=false;
        for(j=0;j<=(n-1)-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
        if(!flag)
        break;
    }
    
}

void selection_sort(int a[],int n)
{
    //my way
    int temp,t;
    for(int i=0;i<n-1;i++)
    {
        t=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[t])
            {
                t=j;
            }
        }
       if(t!=i)
       {
        temp=a[i];
        a[i]=a[t];
        a[t]=temp;
       }
    }
}

int min(int a[],int n,int j)
{
    int min,minindex;
    min=a[j];
    minindex=j;
    for(int i=j+1;i<=n-1;i++)
    {
        if(a[i]<min)
        {
           min=a[i];
           minindex=i;
        }
    }
    return minindex;
}

void selectionsort(int a[],int n)
{
    //sir ka way
    int i,minindex,t;
    for(int i=0;i<n-1;i++)
    {
      minindex= min(a,n,i);
    
   t=a[i];
   a[i]=a[minindex];
   a[minindex]=t;
    }

}

void insertion_sort(int a[],int n)
{
    // my way
  int temp;
  for(int i=0;i<n-1;i++)
  {
    temp=a[i+1];
    if(a[i]>temp)
    {
        for(int j=i;j>=0;j--)
        {
             if(a[j]<=temp)
             break;
            a[j+1]=a[j];
            a[j]=temp;
           
        }
    }
  }
}

void insertionsort(int a[],int n)
{
    // sir ka method
  int temp,j,i;
  for( i=1;i<n;i++)
  {
    temp=a[i];
    
        for(j=i-1;j>=0;j--)
        {
             if(a[j]>temp)
             a[j+1]=a[j];
           else
             break;
        }
        a[j+1]=temp;
   
  }
}

int quicki(int a[],int l,int u)
{
    // my way
    int loc,temp;
    loc=l;
    while(l<u)
    {
    while(1)
    {
        if(l==u)
        break;
       if(a[loc]>a[u])
       {
         temp=a[u];
         a[u]=a[loc];
         a[loc]=temp;
         loc=u;
         break;
       }
       else
         u--;
    }
     while(1)
    {
        if(l==u)
        break;
       if(a[loc]<a[l])
       {
         temp=a[l];
         a[l]=a[loc];
         a[loc]=temp;
         loc=l;
         break;
       }
       else
         l++;
    }
   
    }
    return loc;
}

int quick(int a[],int l,int u)
{
    
    //sir way
    int loc=l,t;
    while(l<u)
    {
        while(l<u && a[loc]<=a[u])
        u--;
        if(l==u)
        break;
        t=a[loc];
        a[loc]=a[u];
        a[u]=t;
        loc=u;
        while(l<u&& a[l]<=a[loc])
        l++;
        if(l==u)
        break;
        t=a[l];
        a[l]=a[loc];
        a[loc]=t;
        loc=l;
    }
    
    return loc;
}
void quick_sort(int a[],int l,int u)
{ 
   
    int loc;
    loc=quick(a,l,u);
    if(loc>l+1)
        quick_sort(a,l,loc-1);
    if(loc<u-1)
        quick_sort(a,loc+1,u);
     
}

void quicksort_loop(int a[],int l,int u)
{
    int loc,i,j;
    stack <int> lower;
    stack<int> upper;
    lower.push(l);
    upper.push(u);
    while(!lower.empty())
    {
      i=lower.top();
      j=upper.top();
      loc=quick(a,i,j);
      lower.pop();
      upper.pop();
      if(loc>i+1)
      {
        lower.push(i);
        upper.push(loc-1);
      }
       if(loc<j-1)
      {
        lower.push(loc+1);
        upper.push(u);
      }
    }

}
void merge(int a[],int n1,int i1,int b[],int n2,int i2,int c[],int i3)
{
    int i,j,k;
    for(i=0,j=0,k=0;i<n1&&j<n2;k++)
    {
        if(a[i+i1]<b[j+i2])
        {
            c[k+i3]=a[i+i1];
            i++;
        }
        else 
        {
            c[k+i3]=b[j+i2];
            j++;
        }
    }
    while(i<n1)
    {
        c[k+i3]=a[i+i1];
        i++;
        k++;
    }
    while(j<n2)
    {
        c[k+i3]=b[j+i2];
        j++;
        k++;
    }
}
void mergepass(int a[],int n,int l,int b[])
{
   int j,count,r,s,index;
   count =n/(2*l);
    s=count*2*l;
    r=n-s;
    for (j=0;j<count;j++)
    {
        index=j*2*l;
        merge(a,l,index,a,l,index+l,b,index);
    }
    if(r<=l)
    {
        for(int i=0;i<r;i++)
        b[s+i]=a[s+i];
    }
    else
       merge(a,l,s,a,r-l,s+l,b,s);
}

void merge_sortloop(int a[],int n)
{
   int l=1,b[n];
   while(l<n)
   {
     mergepass(a,n,l,b);
     mergepass(b,n,2*l,a);
     l=l*4;
   }
}

void merging(int a[],int l,int m,int u)
{
    int le[m-l+1],r[u-m],i,j,k;
    for(i=0;i<m-l+1;i++)
        le[i]=a[l+i];
    for(j=0;j<u-m;j++)
      r[j]=a[m+1+j];
    for(i=0,k=l,j=0;i<m-l+1&&j<u-m;k++)
    {
        if(le[i]<r[j])
        {
            a[k]=le[i];
            i++;
        }
        else
        {
            a[k]=r[j];
            j++;
        }
    }
    while(i<m-l+1)
    {
       a[k]=le[i];
            i++; 
            k++;
    }
    while(j<u-m)
    {
        a[k]=r[j];
            j++;
            k++;
    }   
}

void merge_sort(int a[],int l,int u)
{
   int m;
   if(l<u)
   {
    m=(l+u)/2;
    merge_sort(a,l,m);
    merge_sort(a,m+1,u);
    merging(a,l,m,u);
   }
}

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<" "<<a[i];
}
 

class employee
{
   private:
     int emp_id,salary;
     char name[20];
   public:
      void set_emp_id(int x);
      void set_salary(int y);
      void set_name(char n[]);
      int get_emp_id();
      int get_salary();
      char* get_name();
      
    //  void sort_array(employee [],int l,int u);
    //  void merg(employee[],int l,int m,int u);
     // void sort_array_name(employee [],int l,int u);
      //int quick(employee [],int ,int);

};

  void employee::set_emp_id(int x)
  {
    emp_id=x;
  }
      void employee::set_salary(int y)
      {
        salary=y;
      }
      void employee::set_name(char n[])
      {
        strcpy(name,n);
      }
      int employee::get_emp_id()
      {
        return emp_id;
      }
      int employee::get_salary()
      {
        return salary;
      }
      char* employee::get_name()
      {
         return name;
      }

      void merg(employee a[],int l,int m,int u)
      {
        int i,j,k;
        employee  le[m-l+1],r[u-m];
        for(i=0;i<m-l+1;i++)
           le[i]=a[l+i];
         for(j=0;j<u-m;j++)
           r[j]=a[m+1+j];
        
        for(i=0,j=0,k=l;i<m-l+1 &&j<u-m;k++)
        {
            if(le[i].get_salary()<r[j].get_salary())
            {
                a[k]=le[i];
                i++;
            }
            else
            {
               a[k]=r[j];
                j++; 
            }
        }
        while(i<m-l+1)
        {
            a[k]=le[i];
            i++;
            k++;
        }
         while(j<u-m)
        {
            a[k]=r[j];
            j++;
            k++;
        }
      }
      void sort_array(employee a[],int l,int u)
      {

         int m;
         if(l<u)
         {
            m=(l+u)/2;
            sort_array(a,l,m);
            sort_array(a,m+1,u);
            merg(a,l,m,u);
         }  
      }

int quickiii(employee a[],int l,int u)
{
    int loc=l;
    employee t;
    if(l<u)
    {
        while(l<u)
        {
       while(l<u && strcmp(a[loc].get_name(),a[u].get_name())<=0)
       {
      u--;
       }
      if(l==u)
      break;
      t=a[loc];
      a[loc]=a[u];
      a[u]=t;
      loc=u;
      while(l<u && strcmp(a[loc].get_name(),a[l].get_name())>=0)
     { 
      l++;
    }
      if(l==u)
      break;
      t=a[loc];
      a[loc]=a[l];
      a[l]=t;
      loc=l;
      
       }
    }
    return loc;
}
       void sort_array_name(employee a[],int l,int u)
       {
          int loc;
          loc=quickiii(a,l,u);
          if(loc>l+1)
            sort_array_name(a,l,loc-1);
          if(loc<u-1)
             sort_array_name(a,loc+1,u);
       }
       void set(employee &e,int id,char n[],int s)
      {
        e.set_emp_id(id);
        e.set_name(n);
        e.set_salary(s);
      }

       void show(employee e)
      {
        cout<<endl<<e.get_emp_id()<<" "<<e.get_name()<<" "<<e.get_salary();
      }
      void sortbysalary(employee e[],int s)
      {
        sort_array(e,0,s-1);
      }

      void sortbyname(employee e[],int s)
      {
        sort_array_name(e,0,s-1);
      }

int main()
{
    employee e[10];
    set(e[0],1,"rahul",30000);
    set(e[1],2,"deelip",40000);
    set(e[2],3,"gazendra",50000);
    set(e[3],4,"anjan",10000);
    set(e[4],5,"hitesh",20000);
    set(e[5],6,"rajesh",25000);
    set(e[6],7,"jay",70000);
    set(e[7],8,"jitendra",50000);
    set(e[8],9,"sandeep",35000);
    set(e[9],10,"aalok",5000);
    sortbysalary(e,10);
    for(int i=0;i<=9;i++)
      show(e[i]);
   
    return 0;
}