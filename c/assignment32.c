#include<stdio.h>
//q1
void swap(int b[])
{
    int r,p;
    
   printf("enter the index number :");
   scanf("%d %d",&r,&p);
   b[r-1]=b[r-1]+b[p-1];
   b[p-1]=b[r-1]-b[p-1];
   b[r-1]=b[r-1]-b[p-1];

  
       printf("%d %d",b[r-1],b[p-1]);
       printf("\n");
   
}
//q1q
void swapd(int b[],int i,int j)
{
  int t;
  t=b[i];
  b[i]=b[j];
  b[j]=t;
}

//q2
int repeat (int b[],int n)
{
  int i,p,s,c,q;
  
     for(i=0,s=0;i<n;i++)
  {
    for(c=0,q=0;c<i;c++)
    {
      if(b[i]==b[c])
      {
        q=1;
      }
    }
    if(q==0)
  {
 
  
    for(p=i+1;p<n;p++)
    {
        if(b[i]==b[p] )
        {
           s=s+1;
           break;
           
        }
    }
  
  }
  }
  return s;
}
//q3
void unique (int b[],int n)
{
  int i,p;
  
  for(i=0;i<n;i++)
  {
    for(p=0;p<n;p++)
    {
        if(p!=i)
        {
        if(b[i]==b[p] )
        {
           break;
           
        }
        }
    }
    if(b[i]==b[p])
    {

    }
    else
    {
        printf("%d",b[i]);
    }
  }
 
}
//q4
void merge(int a[],int b[],int c[])
{
  int i,j,s;
  for(i=0;i<5;i++)
  {
     c[i] = a[i];

  }
   for(i=0,j=5;i<5;i++,j++)
  {
     c[j] = b[i];
  }

  for(i=0,j=0;i<10;i++)
  {
    for(j=i+1;j<10;j++)
    {
       if(b[i]>=b[j])
            {
                s=b[i];
                b[i]=b[j];
                b[j]=s;
            }
    }
  }
   for(i=9;i>=0;i--)
    {
        printf("%d",b[i] );
        printf("\t");
    }

}

//q5
void frequency(int b[],int n)
{
  int i,c,s,p,q,r;
  printf("enter the values : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
  }
  
  for(i=0;i<n;i++)
  {
    for(c=0,s=0;c<i;c++)
    {
      if(b[i]==b[c])
      {
        s=1;
      }
    }
    if(s==0)
  {
    for(p=0;p<n;p++)
    {
     for(q=i+1,r=1;q<n;q++)
     {
      if(b[i]==b[q])
      {
        r=r+1;
      }
     }
    }
    printf("%d = %d",b[i],r);
    printf("\n");
  }  
  } 
}
int main()
{
    int i,n;
  //  int c[] = {25,63,96,81,88};
   // int d[] = {99,85,76,33,10};
   // int e[10];
   // printf("enter the array index : ");
   // scanf("%d",&n);
   // int a[n];
  //  for(i=0;i<n;i++)
  //  {
    //  scanf("%d",&a[i]);
    //}

  // printf("%d", repeat(a,n));
// merge(c,d,e);
    return 0;

}