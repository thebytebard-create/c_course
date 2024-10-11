#include<stdio.h>
#include<stdlib.h>
int main ()
{   
    /*
    int a,b;
    printf("enter the the number of student");
    scanf("%d",&a);
    if (a>=90 && a<=100)
    {
        b=1;
    }
    if(a>=80 && a<90)
    {
        b=2;
    }
    if(a>=70 && a<80)
    {
        b=3;
    }
    if(a>=60 && a<70)
    {
        b=4;
    }
    if(a>=50 && a<60)
    {
        b=5;
    
    }
    if(a>=0 && a<50)
    {
        b=6;
    }
    switch (b)
    {
        case 1:
        printf("grade A");
        break;
        case 2:
        printf("grade B");
        break;
        case 3:
        printf("grade C");
        break;
        case 4:
        printf("grade D");
        break;
        case 5:
        printf("grade E");
        break;
        case 6:
        printf("grade F");
        break;
        default:
        printf("invalid");

    }
    */
   /*
   int n;
   printf("enter the number");
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
  */
  
  /*

  int a,b,c,d,e;
  while(1)
  {
  printf("1.factorial of a number\n2.checking of even or odd\n3.area of circle\n4.sum of first n natural number\n5.exit\n");
  scanf("%d",&d);
  if(d!=5)
  {
  printf("enter the number");
  scanf("%d",&a);
  }
  
  switch(d)
  {
    case 1:
    c=1;
    b=2;
    for(e=1;e<a;e++)
    {
        c=b*c;
        b++;
    }
    printf("%d",c);
    break;
    case 2:
    if(a%2==0)
    {
        printf("it is even number");
        break;
    }
    else
    {
        printf("it is odd number");
        break;
    }
    case 3:
    printf("%f",3.14*a*a);
    break;
    case 4:
     b=1;
    c=0;
    for(e=1;e<=a;e++)
    {
        c=c+b;
        b++;
    }
    printf("%d",c);
    break;
    case 5:
    exit(0);
    
  }
  }
 */ 

/*
int a,b;
printf("enter a the nummber");
scanf("%c",&a);
if(a>=65 && a<=90)
{
    b=1;
}
if(a>=97 && a<=122)
{
    b=2;
}
if(a>=0 && a<=47 || a>=58 && a<=64 || a>=91 && a<=96 || a>=123 && a<=255 )
{
    b=3;
}

switch(b)
{
    case 1:
    printf("uppercase alphabet");
    break;
    case 2:
    printf("lowercase alphabet");
    break;
    case 3:
    printf("some other special character");

}
*/
/*q3
int a,b;
printf("enter a the character");
scanf("%c",&a);


switch(b)
{
    case 'A' ... 'B':
    printf("uppercase alphabet");
    break;
    case 'a' ... 'z':
    printf("lowercase alphabet");
    break;
    default :
    printf("some other special character");

}
*/

/*
int a,b;
printf("enter a number");
scanf("%c",&a);
if(a>=0 && a<=47 || a>=58 && a<=64 || a>=91 && a<=96 || a>=123 && a<=255 )
{
    b=1;
}
else
{
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U' )
    {
        b=2;
    }
    else
    {
        b=3;
    }
}
 
 switch(b)
{
    case 1:
    printf("some other special charcter");
    break;
    case 2:
    printf("vowels");
    break;
    case 3:
    printf("consonenets");

}

*/
/*q4
char x;
printf("enter a charcter");
scanf("%d",&x);
switch(x)
{
   
    case 'a': case'e':case'i':case'o':case'u':
     case 'A': case'E':case'I':case'O':case'U':
     printf("vowels");
     break;
     case 'b' ... 'd':case'f' ... 'h':case 'j' ... 'n':case 'p' ... 't': case 'v' ... 'z':
     case 'B' ... 'D':case'F' ... 'H':case 'J' ... 'N':case 'P' ... 'T': case 'V' ... 'Z':
     printf("consonants");
     break;
     default:
     printf("some other special character");

}
*/

/*q5 mine

int a,b,c,d,e,f,g;
printf("1.lcm of two number\n2.calculate the sum of digits of number\n3.volume of cuboid\n4.checking of prime number\n5.exit\n");
scanf("%d",&d);
if(d==1)
{  
    printf("enter the two number");
    scanf("%d",&a);
    scanf("%d",&b);
}
if(d==2)
{   
    printf("enter the number");
    scanf("%d",&a);
}
if(d==3)
{  
    printf("enter the three number");
    scanf("%d %d %d",&a,&b,&c);
}
if(d==4)
{   
    printf("enter the number");
    scanf("%d",&a);
}

switch(d)
{
  case 1:
    c=a>b?a:b;
    while(c%a!=0 || c%b!=0)
    {
        c++;
    }
    if(c==a*b)
    {
        printf("%d",a*b);
        break;
    }
    else
    {
        printf("%d",c);
        break;
    }
  case 2:
   f=0;
  g=a;
 for(b=0;a!=0;b++)
 {
    a=a/10;
 }
 
 for(c=1;c<=b;c++)
 {
  e=g%10;
    g=g/10;
    f=f+e;  

 }
 printf("%d",f);
 case 3:
 e=a*b*c;
 printf("%d",e);
 case 4:
 
 for(b=2;a!=b;b++)
 {
    if(a%b==0)
    {
        break;
    }
 }
 if(a==b)
 {
    printf(" it is prime number");
 }
 else
 {
    printf("it is not prime number");
 }
 case 5:
 printf("bye bye");

}
*/

   return 0;
}
