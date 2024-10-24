#include<stdio.h>
 void q1()
 {
    //sum first n natural number
    int i,n,s=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+i;
    printf("\n%d",s);
    
 }

 void q2()
 {
   //sum first n even number
    int i,n,s=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=2;i<=n*2;i+=2)
    s=s+i;
    printf("\n%d",s);
 }

 void q3()
 {
   //sum first n odd number
    int i,n,s=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=1;i<n*2;i+=2)
    s=s+i;
    printf("\n%d",s);
 }
 void q4()
 {
   //sum first n square number
    int i,n,s=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+i*i;
    printf("\n%d",s);
 }
 void q5()
 {
   //sum first n cube number
    int i,n,s=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+i*i*i;
    printf("\n%d",s);
 }

 int main()
 {
    
   q4();
   q5();
   return 0;

 }