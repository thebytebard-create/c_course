#include<stdio.h>
int main ()
{  
  /*
    int i,j,k,b;
    b=1;
   for(i=1;i<5;i++)
   {
    for(j=3;j>=i;j--)
    {
      printf("\t");
    }
    for(k=0;k<b;k++)
    {
        printf("%c\t",'*');
        
    }
    b+=2;
    printf("\n\n");
   } 
   return 0;
   */

/*q2
 int p,i,k,c;
 p=8;
 c=8;
 for(i=1;i<5;i++)
 {
   for(k=1;k<i;k++)
   {
    printf("\t");
   }
   while(p>i)
   {
    printf("%c\t",'*');
    p--;
   }
   c--;
   p=c;
   printf("\n");
 }
  return 0;
  */
 
         
 /*q3
 int i,k,p;
 for(i=1;i<15;i++)
 {
  for(k=14;k>i;k--)
  {
    printf(" ");
  }
  
  for(p=0;p<i;p++)
  {
    printf("%c ",'*');
  }
  printf("\n");
 }
  return 0;
*/

/*q4
int a,b,c,i,k,p,j;
b=1;
c=0;
for(i=1;i<5;i++)
{
  a=1;
  for(k=4;k>i;k--)
  {
    printf("\t");
  }
  for(p=0;p<i;p++)
  {
    printf("%d\t",a);
    a++;
  }
  for(j=1;j<i;j++)
  {
    printf("%d\t",b);
    b--;
  }
  c++;
  b=c;
  printf("\n");
}
return 0;
*/

/*q5
int b,i,k,c,j;
b=8;
k=8;
for(i=1;i<5;i++)
{
  c='A';
  for(j=1;j<i;j++)
  {
    printf("\t");
  }
  while(k>i)
  {
    printf("%c\t",c);
    c++;
    k--;
  }
  b--;
  k=b;
  printf("\n");
}
  return 0;
*/

/*q6
int a,b,c,i,k,p,j;
b='C';
c='C';
for(i=1;i<5;i++)
{
  a='A';
  for(k=1;k<i;k++)
  {
    printf("\t");
  }
  for(p=5;p>i;p--)
  {
    printf("%c\t",a);
    a++;
  }
  for(j=4;j>i;j--)
  {
    printf("%C\t",b);
    b--;
  }
  c--;
  b=c;
  printf("\n");
}
 return 0;
*/

/*Q7
int  i,y,m,n,k,a,b,c,l,h,d,e,f,g,j;
y=1;
m=0;
n=0;
k=5;
h=1;
g=1;
j=1;
c=1;
for(i=1;i<=k;i++)
{
  for(c=5;c>i;c--)
  {
    printf(" ");
    
  }

  if(i/2*2!=i)
  {
    l=1;
    for(a=1;a<=y;a++)
    {
      printf("%d ",l);
      l++;
    }

    for(b=1;b<y;b++)
    {
      printf("%d ",m);
      m--;
    }
    n++;
    m=n;
    y++;
    printf("\n");
   
  }

  else
  {
     d=1;
    for(e=1;e<=h;e++)
    {
      printf("%d ",d);
      d++;
    }

    for(f=1;f<=h;f++)
    {
      printf("%d ",g);
      g--;
    }
    j++;
    g=j;
    h++;
  printf("\n"); 
  }

}
*/

/*q8
int i,a,b,c,d,e;
char f;
f='*';

for(i=1;i<=7;i++)
{
  printf("%c\t",f);
}

printf("\n");
d=1;
for(a=1;a<=3;a++)
{
  for(b=3;b>=a;b--)
  {
    printf("%c\t",f);
  }
  for(c=1;c<=d;c++)
  {
    printf("\t");
  }
  d+=2;
  for(e=3;e>=a;e--)
  {
    printf("%c\t",f);
  }
  printf("\n");
}

*/

/*q9
int a,b,c,d,e,f,g,h,i,j,k,l;
b=1;
d=3;
l=3;
h=1;
k=3;
for(a=1;a<=4;a++)
{
  printf("%d\t",b);
  b++;
}
for(c=1;c<=3;c++)
{
  printf("%d\t",d);
  d--;
}
printf("\n");

for(e=1;e<=3;e++)
{
  g=1;
  for(f=3;f>=e;f--)
  {
    printf("%d\t",g);
    g++;
  }
  
  for(i=1;i<=h;i++)
  {
    printf("\t");
  }
  h+=2;
  for(j=3;j>=e;j--)
  {
    printf("%d\t",k);
    k--;
  }
  l--;
  k=l;
  printf("\n");
  
}
*/

/*q10
int a,c,e,f,h,i,j;
char b,d,g,k,l;
b='A';
d='C';
l='C';
h=1;
k='C';
for(a=1;a<=4;a++)
{
  printf("%c\t",b);
  b++;
}
for(c=1;c<=3;c++)
{
  printf("%c\t",d);
  d--;
}
printf("\n");

for(e=1;e<=3;e++)
{
  g='A';
  for(f=3;f>=e;f--)
  {
    printf("%c\t",g);
    g++;
  }
  
  for(i=1;i<=h;i++)
  {
    printf("\t");
  }
  h+=2;
  for(j=3;j>=e;j--)
  {
    printf("%c\t",k);
    k--;
  }
  l--;
  k=l;
  printf("\n");
  
}
*/
return 0;

}