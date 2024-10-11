/*q1
#include<stdio.h>
float area();
int main()
{
  int a;
  float b;
  printf("enter the radius of a circle");
  scanf("%d",&a);
  b=area(a);
  printf("the area of circle is %f",b);
  return 0;
}

float area(int r)
{
    float c;
    c=3.14*r*r;
    return c;
  //return 3.14*r*r;
}
*/

/*q3
#include<stdio.h>
float interest(int a, int b,int c);
int main()
{
    int p,r,t;
    float s;
    printf("enter p,r,t");
    scanf("%d %d %d",&p,&r,&t);
    s=interest (p,r,t);
    printf("simple interest is %f",s);
    return 0;
}

float interest(int a,int b,int c)
{
  float d;
  d=a*b*c/100.0;
  return d ;
}

*/
/*q3
#include<stdio.h>
int check (int c);
int main ()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    b=check(a);
    printf("%d",b);
    return 0;
}

int check(int c)
{
    
  if(c%2==0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
  //return c%2==0;
  }
  */


 

/*q4
#include<stdio.h>
void naturalnumber(int a);
int main()
{
  int x;
  printf("enter the number");
  scanf("%d",&x);
  naturalnumber(x);
  return 0;
}

void naturalnumber(int a)
{
  int b;
  for(b=1;b<=a;b++)
  {
    printf("%d",b);
  }
}
*/
/*q5
#include<stdio.h>
void naturalnumber(int a);
int main()
{
  int x;
  printf("enter the number");
  scanf("%d",&x);
  naturalnumber(x);
  return 0;
}

void naturalnumber(int a)
{
  int b;
  for(b=1;b<=a*2;b+=2)
  {
    printf("%d",b);
  }
}
*/