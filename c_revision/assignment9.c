#include<stdio.h>

void q1()
{
    //profit or loss percentage
    int cp ,sp ,outcome;
 printf("enter the cp and sp of product : ");
 scanf("%d %d",&cp,&sp);
 if(sp>cp)
 {
    outcome=(sp-cp)*100;
    printf("the profit percentage : %d",outcome/cp);
 }
 else if(sp<cp)
  {
    outcome=(cp-sp)*100;
    printf("the loss percentage : %d",outcome/cp);
 }
 else
 {
    printf("no gain or loss");
 }
}

void q2()
{
    //if student pass or fail after giving marks
    int a,b,c,d,e;
 printf("enter the marks of five subjects : ");
 scanf("%d %d %d %d %d",&a,&b,&c,&d,&e); 
 if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
 printf("PASS");
 else
printf("LOSS");
 
}

void q3()
{
    //check alphabet is in uppercase or lower case
    char alphabet;
    printf("enter the alphabet : ");
    scanf("%c",&alphabet);
    if(alphabet>=65&&alphabet<=90)
    printf("uppercase");
    else
    printf("lowercase");
}

void q4()
{
    //check if number is divisible by 2 and 3 or not
    int val;
    printf("enter the value :");
    scanf("%d",&val);
    if(val%3==0&&val%2==0)
    printf("yes");
    else
    printf("no");
}

void q5()
{
    //check if number is divisible by 7 or 3
     int val;
    printf("enter the value :");
    scanf("%d",&val);
   if(val%7==0&&val%3==0)
    printf("both");
      else  if(val%3==0)
    printf("yes by 3");
    else if(val%7==0)
    printf("yes by 7");
    else
    printf("none");
     
}
int main()

{
    q5();

    return 0;
}
