#include<stdio.h>
int main ()
{  
   /*
  int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%c\t",'*');
    }
    printf("\n");
  }
  return 0;
  */

 
/*q2 
int i,j,k;
 for(i=1;i<6;i++)
 {
  for(j=5;j>i;j--)
  {
    printf("\t");
  }
  for(k=1;k<=i;k++) 
  {
    printf("%c\t",'*');
  }
  printf("\n");
 }
 return 0;
 */
 

/*
 int i,j;
 for(i=1;i<6;i++)
 {
  for(j=6;j>i;j--)
  {
    printf("%c\t",'*');
  }
  printf("\n");
 } 
return 0;
*/

/*q4
int i,j,k;
for(i=1;i<6;i++)
{
  for(k=1;k<i;k++)
  {
    printf("\t");
  }
  for(j=5;j>=i;j--)
  {
    printf("%c\t",'*');
  }
  printf("\n");
}
return 0;
*/

/*q5
int i,j;
  for(i=1;i<=5;i++)
  {
  
    for(j=1;j<=i;j++)
    {
      
      printf("%d\t",j);
    }
    printf("\n");
  }
  return 0;
*/
/*
int i,j,p,c;

p=1;
c=1;


for(i=1;i<5;i++)
{
  for(j=1;i>=j;j++)
  {
    printf("%d\t",p);
   //  p--;
  }
  
  c++;
  p=c;
  
  printf("\n");
}
return 0;
*/
/*q6
int i,j;
for(i=1;i<5;i++)
{
  for(j=1;j<=4;j++)
  {
    if(j<=i)
    printf("%d",i-j+1);
    else
    printf(" ");
    
  }
  printf("\n");
  
}
return 0;
*/
/*q8
int i,j,k;
char p;
for(i=1;i<6;i++)
{
  p='A';
  for(k=1;k<i;k++)
  {
    printf("\t");
  }
  for(j=5;j>=i;j--)
  {
    printf("%c\t",p++);
  }
  printf("\n");
}
return 0;

*/

/*q9
int i,j,p;
p=1;
for(i=1;i<5;i++)
{
  for(j=1;j<=i;j++)
  {
    printf("%d\t",p);
    p++;
  }
  printf("\n");
}
return 0;
*/

/*q9
int i,j,k;
char p,c;
p='A';
c='A';
for(i=1;i<6;i++)
{
  for(j=1;j<i;j++)
  {
    printf("\t");
  }
  for(k=5;k>=i;k--)
  {
    printf("%c\t",p);
    p++;
  }
  c++;
  p=c;
  printf("\n");
}
return 0;
*/

/*q10
int i,a,b,c,d,e;
  for(a=1;a<9;a++)
  {
    printf("%c  ",'*');
  }
  printf("\n");
  for(b=1;b<4;b++)
  {
    printf("%c  ",'*');
    for(c=1;c<2;c++)
    {
      printf("                  ");
    }
    printf("%c  ",'*');
    printf("\n");
  }
  
  for(d=1;d<9;d++)
  {
    printf("%c  ",'*');
  }
  return 0;
*/
}





