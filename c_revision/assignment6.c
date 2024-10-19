#include<stdio.h>

void q1(int data)
{
    //convert inr into usd and 1 usd is 84.23
    printf("%.2f",data/84.23);
}

void q2(int a)
{
    //rotate its digit by one
    printf("%d",a%10*100+a/100*10+a/10%10);
}

void q3()
{
  //reult of x=10>8>4
  int x;
  x=10>8>4;
  printf("   %d",x);

}

void q4()
{
    //reult of x=!2>-2
     int x;
  x=!2>-2;
  printf("   %d",x);
}

void q5()
{
    //reult of x=3<0&&5>0
     int x;
  x=3<0&&5>0;
  printf("   %d",x);
}

int main()
{
    q3();
    q4();
    q5();
    return 0;
}