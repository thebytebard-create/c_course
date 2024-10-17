#include<stdio.h>
void q1(int a,int b,int c)
{
    //average of three number
    printf("the average of three numbers : %f",(a+b+c)/3);
}

void q2(int r)
{
    //circumfrance of a circle
    printf("the circumfrance of a circle : %f",2*3.14*r);   
}

void q3(int p,int r,int t)
{
    //simple interest
    printf("the simple intrest is %f",(p*r*t)/100);
}

void q4(int l,int b,int h)
{
    //volume of cuboid
    printf("volume of cuboid : %d",l*b*h);
}

void q5(int cp,int sp)
{
    //profit or loss of 25 banana (given is cp per dozen and sp per dozen)
    float one_cp=cp/12;
    float one_sp=sp/12;
    printf("the profit or loss of 25 banana : %.2f",(one_sp-one_cp)*25);
}
int main()
{
   printf("\ncp and sp of banana : ");
   int a,b;
   scanf("%d %d", &a, &b);
   q5(a,b);
   return 0;
   
}