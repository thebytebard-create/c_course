#include<stdio.h>
#include<stdlib.h>
void q1()
{
    //take month number dipaly days of mont
    printf("enetr the month number : ");
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("\nthis month has 31 days ");
        break;
        case 2:
        printf("\nthis month has 28 or 29 days ");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("\nthis month has 31 days ");
         default:
     printf("wrong choice");

    }
}

void add()
{
    int a ,b;
    printf("enter two number: ");
    scanf("%d %d",&a,&b);
    printf("the sum of number is: %d",a+b);
}
void divide()
{
    int a;
    float b;
    float d;
    printf("enter the dividend and divisor: ");
    scanf("%d %f",&a,&b);
    d=a/b;
    printf("the answer is: %.2f",d);

}
void subtract()
{
    int a ,b;
    printf("enter two number: ");
    scanf("%d %d",&a,&b);
    printf("the subtract of number is: %d",a-b);
}
void multiply()
{
    int a ,b;
    printf("enter two number: ");
    scanf("%d %d",&a,&b);
    printf("the multiplication of number is: %d",a*b);
}

void q2()
{
  //menu driven progran for add subtract divide multiply
  printf("\n1) subtract\n2) divide\n3) multiply\n4) add\nenter the choice : ");
  int n;
  scanf("%d",&n);
  switch(n)
  {
    case 1:
       subtract();
    break;
    case 2:
    divide();
    break;
    case 3:
    multiply();
    break;
    case 4:
      add();
    break;
     default:
     printf("wrong choice");
  
  }

}

void q3()
{
   // this print the unique greeting for each day
    printf("enetr the day number : ");
    int n;
    scanf("%d",&n);
     switch(n)
  {
    case 1:
       printf(" work");
    break;
    case 2:
    printf(" more work");
    break;
    case 3:
   printf("extra work");
    break;
    case 4:
     printf("sunady is krib");
    break;  
    case 5:
    printf("hgvsd");
    break;
    case 6:
    printf("party");
    break;
    case 7:
    printf("free bird");
    break;
     default:
     printf("wrong choice");

  }

}

void q4()
{
    // check these condition
    printf ("1.checking of isoscales triangle\n2.checking of right angle triangle\n3.checking of equilateral triangle \n4.exit");
    int n;
    scanf("%d",&n);
    printf("enetr the side of triangle : ");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    switch(n)
    {
     
        case 1:
           if(a==b ||b==c ||c==a)
           printf("yes");
           else
           printf("no");
        break;
        case 2:
            if(a*a==b*b+c*c)
            printf("yes");
            else
            printf("no");
        break;
        case 3:
        if(a==b&&b==c)
         printf("yes");
           else
           printf("no");
        break;
        case 4:
        exit(0);
    }
}

void q5()
{
    //convert if else into switch
     printf("enetr the number 1,2,3 : ");
    int n;
    scanf("%d",&n);
 switch(n)
 {
    case 1:
    printf("good");
    break;
    case 2:
    printf("better");
    break;
    case 3:
    printf("best");
    break;
     default:
     printf("wrong choice");
  
  }

}


int main()
{
    q4();
    return 0;
}