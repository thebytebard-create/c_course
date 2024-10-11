#include <stdio.h>
#include<stdlib.h>

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

int main()
{
    int a;  
    while(1)
    {
       printf("\n1 for add ");
        printf("\n2 for subtract ");
         printf("\n3 for multiply ");
          printf("\n4 for divide ");
            printf("\n5 for exit ");
        printf("enter your choice : ");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
               add();
               break;
            case 2:
               subtract();
               break;
            case 3:
               multiply();
               break;
            case 4:
               divide();
               break;
            default :
              printf("wrong choice\n");
               break;
            case 5:
              exit(0);
        }
       
    }
}