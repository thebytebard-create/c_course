#include<stdio.h>
int main()
{
    int a;
       printf("\n1 for c to f ");
        printf("\n2 for f to c ");
         printf("\n3 for c to k ");
          printf("\n4 for k to c ");
            printf("\n5 for f to k ");
            printf("\n6 for k to f ");
        printf("enter your choice : ");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
               cf();
               break;
            case 2:
               fc();
               break;
            case 3:
               ck();
               break;
            case 4:
               kc();
               break;
            case 5:
               fk();
               break;
            case 6:
               kf();
               break;
            default :
              printf("wrong choice\n");
             
        }
}

void cf()
{
    printf("enter celcius : ");
    float c;
    float  a;
    scanf("%f",&c);
    a=c*9/5+32;
    printf("fahrenheit : %f",a);
}
void fc()
{
    printf("enter fahrenheit : ");
    float f;
    float  a;
    scanf("%f",&f);
    a=(f-32)*5/9;
    printf("celcius : %f",a);
}
void ck()
{
    printf("enter celcius : ");
    float c;
    float  a;
    scanf("%f",&c);
    a=c+273.15;
    printf("kelvin : %f",a);
}
void kc()
{
    printf("enter kelvin : ");
    float k;
    float  a;
    scanf("%f",&k);
    a=k-273.15;
    printf("fahrenheit : %f",a);
}
void fk()
{
    printf("enter fahrenheit : ");
    float f;
    float  a;
    scanf("%f",&f);
    a=(f-32)*5/9+273.15;
    printf("kelvin : %f",a);
}
void kf()
{
    printf("enter kelvin : ");
    float k;
    float  a;
    scanf("%f",&k);
    a=(k-273.15)*9/5+32;
    printf("fahrenheit : %f",a);
}