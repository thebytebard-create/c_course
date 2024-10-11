#include<stdio.h>
void q1(int[],int,int);
int q2(int [],int );
void q3(int [],int);
void q4(int [],int [],int );
void q5(int [],int );
void q1(int a[],int i1,int i2)
{
    // swap two elements of given arraynwith speified index
     int temp;
     temp=a[i1];
     a[i2]=a[i1];
     a[i2]=temp;
}

int q2(int a[],int s)
{
    // count the duplicate items
   int i,count=0,j,r;
   for(i=0;i<s;i++)
   {
     for(j=i+1;j<s;j++)
     {
        if(a[i]==a[j])
        {
            for(r=i-1;r>=0;r--)
            {
                if(a[i]==a[r])
                break;
            }
             if(r<0)
             {
                count=count+1;
                break;
             }
        }
        
     } 
   }
   return count;

}


void sort_as(int a[],int s)
{


    int i,j,temp;
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
}
void sort_des(int a[],int s)
{


    int i,j,temp;
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(a[i]<a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
}


void q3(int a[],int s)
{
    //print all unique element
    int i,r;
    for(i=0;i<s;i++)
    {
        for(r=0;r<s;r++)
        {
            if(r!=i)
            {
            if(a[r]==a[i])
            break;
            }
        }
        if(r==s)
        printf("%d  ",a[i]);
    }
}

void q4(int a[],int b[],int s)
{
    //merge two array in descending order
   int temp[s*2],i,j=0;
   for(i=0;i<s;i++,j++)
      temp[j]=a[i];
   for(i=0;i<s;i++,j++)
      temp[j]=b[i];
  
  sort_des(temp,s*2);
  for(i=0;i<s*2;i++)
  printf("%d  ",temp[i]);
}

void q5(int a[],int s)
{
    //count the frequency of each element
    int b[s],i,r,count;
    for(i=0;i<s;i++)
       b[i]=0;

    for(i=0;i<s;i++)
    {
        count =0;
        if(!b[i])
        {
         for(r=0;r<s;r++)
         {
            if(a[r]==a[i])
            {
                b[r]=-1;
                count++;
            }
         }  
          printf("%d = %d, ",a[i],count); 
        }
       
    }   
}


int main()
{
    int a[]={1,2,3,4,5,6,7,8,8},b[]={4,6,9,4,2,4,4,86,6};
    q5(b,9);
    return 0;
}