#include<stdio.h>
void q1();
void q2();
void q3();
void q4();
void q5();

int main()
{
     
 return 0;   
}

void q1()
{
    //sum of number stored in array
  int i,sum=0,arr[10];
   printf("enter ten value : ");
  for(i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
  }
  printf("the sum of array : %d",sum);

}

void q2()
{
  //average of number stored in array
   int i,sum,arr[10];
    printf("enter ten value : ");
   for(i=0;i<10;i++)
   {
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
   }
   
   printf("the average : %f",sum/10.0);
}

void q3()
{
    //sum of even number and odd number
    int i,sum_of_odd=0,sum_of_even=0,arr[10];
     printf("enter ten value : ");
    for(i=0;i<10;i++)
    {
       scanf("%d",&arr[i]);
       if(arr[i]%2==0)
        sum_of_even=sum_of_even+arr[i];
       else
        sum_of_odd=sum_of_odd+arr[i];
    }

    printf("the sum of even and odd : %d %d",sum_of_even,sum_of_odd);

}


void q4()
{
    // the greatest number stored in array
  int i,arr[10],g;
  printf("enter ten value : ");
  scanf("%d",&arr[0]);
  g=arr[0];
  for(i=1;i<10;i++)
  {
    scanf("%d",&arr[i]);
    if(g<arr[i])
    g=arr[i];
  }
  
  printf("greatest number : %d",g);
  
}

void q5()
{
     // the smallest number stored in array
  int i,arr[10],s;
   printf("enter ten value : ");
  scanf("%d",&arr[0]);
  s=arr[0];
  for(i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
    if(s>arr[i])
    s=arr[i];
  }
  
  printf("smallest number : %d",s);
}
