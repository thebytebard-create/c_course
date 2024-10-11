#include<stdio.h>
//q1
void sort()
{
    int a[10],i,j,t;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;i++)
        {
          if(a[i]>a[i+1])
          {
            t=a[i];
            a[i]=a[j];
            a[j]=a[i];
          
        }
        }
    }
    for(i=0;i<10;i++)
    printf("%d\t ",a[i]);
}

int main()
{
    sort();
    return 0;

}