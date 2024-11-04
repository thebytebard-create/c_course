#include<stdio.h>
#include<stdlib.h>
void q1()
{
    // give grade
     printf("enter the number for grade :");
     int n;
   scanf("%d",&n);
   switch(n)
   {
    
    case 90 ... 100:
    printf("GRADE A");
    break;
    case 80 ... 89:
    printf("GRADE b");
    break;
    case 70 ... 79:
    printf("GRADE c");
    break;
    case 60 ... 69:
    printf("GRADE d");
    break;
    case 50 ... 59:
    printf("GRADE e");
    break;
    case 0 ... 49:
    printf("GRADE f");
    break;
    default:
    printf("invalid number");
    break;
   }
}

void factorial()
{
      printf("enter a numbers :");
    int p,i,s=1;
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
      s=s*i;
    }
    printf("%d",s);
}

void check()
{
    printf("enter numbers :");
    int p;
    scanf("%d",&p);
    if(p%2==0)
    printf("yes");
    else
    printf("no");
}

void  area_of_circle()
{
    printf("enter the radius :");
    int r; 
     scanf("%d",&r);
     printf("%.2f",3.14*r*r);
}

void  sum_first_n_natural_number()
{
    printf("enter numbers :");
    int p,s=0,i;
    scanf("%d",&p);
     for(i=1;i<=p;i++)
    {
      s=s+i;
    }
    printf("%d",s);

}
void q2()
{
   //menu driven progran for factorial ,even odd check,area of circle,sum of first n natural numbers,exit
   while(1)
   {
  printf("\n1) factorial\n2) check even or odd\n3) area of circle\n4) sum of first n natural numbers\n5) exit\nenter the choice : ");
  int n;
  scanf("%d",&n);
  switch(n)
  {
    case 1:
      factorial();
    break;
    case 2:
   check();
    break;
    case 3:
    area_of_circle();
    break;
    case 4:
      sum_first_n_natural_number(); 
    break;
    case 5:
     exit(0);
  }
   }
}

void q3()
{
    //check uppercase smallercase special character
    char r;
    printf("enetr a charcter : ");
    scanf("%c",&r);
    switch(r)
    {
        case 'A' ... 'Z':
        printf("\nuppercase ");
        break;
        case 'a' ... 'z':
        printf("\nlowercase ");
        break;
        default:
        printf("\nspecial charcter");

    }
}

void q4()
{
    //check vowel or consonant or special charcter
    char r;
    printf("enetr a charcter : ");
    scanf("%c",&r);
    switch(r)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
         case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("\nvowel");
        break;
        case 'b' ... 'd':case'f' ... 'h':case 'j' ... 'n':case 'p' ... 't': case 'v' ... 'z':
        case 'B' ... 'D':case'F' ... 'H':case 'J' ... 'N':case 'P' ... 'T': case 'V' ... 'Z':
        printf("\nconsonant");
        break;
        default:
        printf("\nspecial charcter");

    }
}

void lcm()
{
  printf("enetr two number : ");
  int a,b,i;
  scanf("%d %d",&a,&b);

  for(i=a>b?a:b;i<=a*b;i++)
  {
   if(i%a==0 &&i%b==0)
      break;
  }
  printf("%d",i);
}
void sum_d()
{
  int i,n,s=0,j;
  printf("enetr the number :");
  scanf("%d",&n);
  while(n>0)
  {
   j=n%10;
   n/=10;
   s+=j;
  }
  printf("%d",s);

}
void check_prime()
{
   printf("enetr a number :"); 
   int n;
   scanf("%d",&n);
   int i;
   for(i=2;i<n;i++)
   {
    if(n%i==0)
    break;
   }
   if(i==n)
   printf("yes");
   else
   printf("no");
}
void volume()
{
  printf("enetr three number :");
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  printf("the volume is %d",a*b*c);

}

void q5()
{
    // menu driven for lcm,sum digit,volume,check prime,exit
    int d;
    while(1)
    {
    printf("1.lcm of two number\n2.calculate the sum of digits of number\n3.volume of cuboid\n4.checking of prime number\n5.exit\n");
    scanf("%d",&d);
    switch(d)
    {
        case 1:
      lcm();
      break;
        case 2:
        sum_d();
        break;
        case 3:
        volume();
        break;
        case 4:
        check_prime();
        break;
        case 5:
        exit(0);

    }
    }
}
int main()
{
    q5();
    return 0;
}
