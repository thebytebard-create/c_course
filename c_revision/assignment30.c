#include<stdio.h>
void q1(int []);
void q2(int []);
void q3(int []);
void q4(int []);
void q5(int [],int [],int size);
void fill(int []);
void show(int []);


int main()
{
    int arr[10],arr2[10];
    fill(arr);
    fill(arr2);
   q5(arr,arr2,10);
    show(arr);
    return 0;
}


void fill(int a[])
{
    //to fill the values of array element
   int i;
   printf("enter ten digits : ");
   for(i=0;i<10;i++)
   {
    scanf("%d",&a[i]);
   }
}

void show(int a[])
{
   //to show the values of array element
   int i;

   for(i=0;i<10;i++)
   {
    printf("%d\n",a[i]);
   } 
}

void q1(int a[])
{
    // to sort array (in ascending order)
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
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

void q2(int a[])
{
    // the second largest value
    q1(a);
    printf("\nthe second largest : %d",a[8]);
}

void q3(int a[])
{
    //the second smallest value
    q1(a);
    printf("\nthe second smallest : %d\n",a[1]);
}

void q4(int a[])
{
    // sort an array in descending order
  int i,j,temp;
  for(i=0;i<10;i++)
  {
    for(j=i+1;j<10;j++)
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

void q5(int a[],int b[],int size)
{
    // copy the element of one array into another array
    int i;
    for(i=0;i<size;i++)
    {
        a[i]=b[i];
    } 
}


