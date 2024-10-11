#include<stdio.h>
 int greatestn(int b[],int p)
{
    int i,j,s;
    for(i=0;i<p;i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=0;i<p;i++)
    {
        for(j=i+1;j<p;j++)
        {
            if(b[i]>=b[j])
            {
                s=b[i];
                b[i]=b[j];
                b[j]=s;
            }
        }
    }
    
       return (b[p-1]);
}

int smallestn(int b[],int p)
{
    int i,j,s;
    for(i=0;i<p;i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=0;i<p;i++)
    {
        for(j=i+1;j<p;j++)
        {
            if(b[i]>=b[j])
            {
                s=b[i];
                b[i]=b[j];
                b[j]=s;
            }
        }
    }
    
       return b[0];
}

void sort(int b[],int p)
{
     int i,j,s;
    for(i=0;i<p;i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=0;i<p;i++)
    {
        for(j=i+1;j<p;j++)
        {
            if(b[i]>=b[j])
            {
                s=b[i];
                b[i]=b[j];
                b[j]=s;
            }
        }
    }
    for(i=0;i<p;i++)
    {
        printf("%d",b[i] );
        printf("\t");
    }

}
 void rotate(int b[],int n)
 {
    int i,r;
    printf("enter the values");
    for(i=0;i<n;i++)
    {
      scanf("%d",&b[i]);
    }
    printf("enter the rotation value");
    scanf("%d",&r);
     for(i=r;i<n;i++)
    {
        printf("%d",b[i] );
        printf("\t");
    }
     for(i=0;i<=r;i++)
    {
        printf("%d",b[i] );
        printf("\t");
    }


 }
int duplicate(int b[],int n)
{
    int i,r;
     for(i=0;i<n;i++)
    {
      scanf("%d",&b[i]);
    }

    for(i=0;i<n;i++)
    {
        if(b[i]==b[i+1])
        {
            r=b[i];
            break;
        }
    }
    return r;
}
int main()
{
    int n;
    printf("enter the array size: ");
    scanf("%d",&n);
    int a[n];
 // printf("%d",duplicate(a,n));
 sort(a,n);
 
   return 0;
}
