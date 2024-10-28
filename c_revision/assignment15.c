#include<stdio.h>

  void q1()
{
    //prime number under 100
    int i,j;
    for(i=2;i<100;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("  %d",i);
    }
}

  void q2()
{
    //prime numbers between two numbers
     int s,l,j;
  printf("enter two number : ");
   scanf("%d %d",&s,&l);
    for(s=s+1;s<l;s++)
    {
        for(j=2;j<s;j++)
        {
            if(s%j==0)
            break;
        }
        if(s==j)
        printf(" %d",s);
    } 
  
}


 void q3()
{
  //next prime number
  
     int s,j;
    printf("\nenter a number : ");
    scanf("%d",&s);
   
     for(s=s+1;s;s++)
     {
        for(j=2;j<s;j++)
        {
            if(s%j==0)
            break;
        }
        if(s==j)
        { 
    
            printf(" %d",s);
            break;
        }
     } 
    
}


 void q4()
{
   //calculate hcf of two number
   int i,j,s,l;
    printf("enter two number : ");
   scanf("%d %d",&s,&l);
    for(i=s<l?s:l;i>0;i--)
    {  
            if(s%i==0&&l%i==0)
            {
              printf(" %d",i);
               break;
            }
    } 
}

void q5()
{
    //whether two program are co prime or not
      int i,j,s,l;
    printf("enter two number : ");
   scanf("%d %d",&s,&l);
    for(i=s<l?s:l;i>1;i--)
    {  
            if(s%i==0&&l%i==0)
            {
              printf(" no");
               break;
            }
    } 
    if(i==1)
        printf(" yes");
}

int main()
{
  
    q5();
    return 0;
}