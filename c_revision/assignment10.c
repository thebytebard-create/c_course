#include<stdio.h>
void q1()
{
    //check whether a given number is positive ,negative or 0
    int val;
    printf("enter the value :");
    scanf("%d",&val);
    if(val>0)
    printf("positive");
    else if(val<0)
    printf("negative");
    else
    printf("zero");
}

void q2()
{
    //check whether a given number is uppercase ,lowercase,digit or 0 special character
    char val;
    printf("enter the value :");
    scanf("%c",&val);
    if(val>=65&&val<=90)
    printf("uppercase");
    else if(val>=97&&val<=122)
    printf("lowercase");
    else if(val>=48&&val<=57)
    printf("digit");
    else 
    printf("special character");
}

void q3()
{
    //if triangle is valid or not
      int a,b,c;
 printf("enter the sides of a triangle : ");
 scanf("%d %d %d",&a,&b,&c);
 if(a+b>c && b+c>a &&c+a>b)
    printf("valid triangle");
 else 
    printf("invalid triangle");

}

void q4()
{
    //tell me the number of days in month
    int month;
    printf("enter the number of mont : ");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    printf("31");
    else if(month==2)
    printf("28 or 29");
    else if(month<1||month>12)
    printf("invalid month number");
    else
    printf("30 days");

}

int main()
{
    q4();
    return 0;
}