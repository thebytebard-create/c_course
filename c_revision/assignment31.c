#include<stdio.h>
int q1(int a[],int s);
int q2(int a[],int s);
void q3(int a[],int s);
void q4(int a[],int s,int r,int );
int q5(int a[],int s);

int q1(int a[],int s)
{
    // the greatest number from given array of given size
    int g,i;
    g=a[0];
  for(i=1;i<10;i++)
  {
    if(g<a[i])
    g=a[i];
  }
    printf("%d",g);

}

int q2(int a[],int s)
{
    //the smallest number from given array of given size
    int s,i;
    s=a[0];
  for(i=1;i<10;i++)
  {
    if(s>a[i])
    s=a[i];
  }
    printf("%d",s);
}

void q3(int a[],int s)
{
    // to sort an array of given size
    int i,j,temp;
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}

void q4(int a[],int s,int r,int d)
{
  // rotate an array by n position in d direction
    int i,j,k=s-r;
    int temp[r];
    if(d==-1)
    {
      for(i=0;i<r;i++)
      {
        temp[i]=a[i];
      }
      for(i=0,j=r;i<k;i++,j++)
      {
        a[i]=a[j];
      }
      for(i=0,j=s-r;i<r;i++,j++)
      {
        a[j]=temp[i];
      }
    }
    else
    {
     for(j=s-r,i=0;j<s;j++,i++)
     {
        temp[i]=a[j];
     }
     for(j=s-1,i=s-r-1;i>=0;i--,j--)
     {
        a[j]=a[i];
     }
     for(i=0;i<r;i++)
     {
        a[i]=temp[i];
     }
    }
    
}

int q5(int a[],int s)
{
  //first occurance of adjacent duplicate values
    int i;
    for(i=0;i<s-2;i++)
    {
        if(a[i]==a[i+1])
        return i;
    }
    return -1;
}

int main()
{
    int a[]={1,8,6,7,8,4},i;
    q4(a,6,2,-1);
    for(i=0;i<6;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}