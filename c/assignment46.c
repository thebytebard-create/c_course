#include<stdio.h>
#include<stdlib.h>
char* inputstring()
{
  char *p=NULL,*q=NULL,ch;
  int size=1,i;
  while(i)
  {
    ch=getchar();
    if(ch==10)
    break;
    p=(char*)malloc(size);
    if(q)
    {
      for(i=0;i<size;i++)
      p[i]=q[i];
      p[i-1]=ch;
      free(q);
    }
    else
      *p=ch;

      q=(char*)malloc(size+1);
      for(i=0;i<size;i++)
      q[i]=p[i];

      q[i]='\n';
      free(p);
      size++;
  }
  return q;

}

void f2()
{
int *p,i,n,s=0;
printf("enter the number of digits : ");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
  scanf("%d",&p[i]);
  s=s+p[i];

}
printf("%f",s/(float)n);
free(p);

}
void f3()
{
int *p,i,n,s=0;
printf("enter the number of digits : ");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
  scanf("%d",&p[i]);
  s=s+p[i];

}
printf("%d",s);
free(p);

}
int* f4(int a[],int b[],int c,int d)
{
  int i,j,*p,n,k;
  p=(int*)malloc(sizeof(int)*(c+d));
  for(n=0,k=0;k<c;k++, n++)
  {
    p[n]=a[k];
   

  }
  
  for(k=0;k<d;k++,n++)
  {
     p[n]=b[k];
  }

  return p;
}

int main()
{
  int a[]={1,5,6,9};
  int b[]={8,6,10,4};
  int *c,i;
  c=f4(a,b,4,4);
  for(i=0;i<8;i++)
  {
     printf("%d",c[i]);
  }

  return 0;
}
