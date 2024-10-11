#include<stdio.h>
/*Q1
int main()
{
    int i,value;
    printf("enter a number : ");
    scanf("%d",&value);
    if(value%2==0)
    printf("EVEN");
    else
     printf("ODD");
     return 0;
}
*/
/*q2
int factorial(int n)
{
    if(n==1)
    return 1;

    return n*factorial(n-1);
    
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
   printf("%d",factorial(n));
   return 0;
}
*/
/*q3
int main()
{
    int a,b,c;
    printf("enter two number : ");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
    return 0;
}
*/
//q4
void lcm(int a,int b)
{
    int i;
    if(a>b)
    {
        for(i=a;i<(a*b);i++)
        if(i%a==0 && i%b==0)
        break;
    }
    else
    {
        
        for(i=b;i<(a*b);i++)
        if(i%a==0 && i%b==0)
        break;
    }

    printf("%d",i);
}
//q5
void prime(int n)
{
  int p;

   for(p=2;p<n;p++)
   if(n%p==0)
   break;

   if(p==n)
   printf("YES");
   else
   printf("NO");

}

int main()
{
    int a,b;
    printf("enter two value : ");
    scanf("%d %d",&a,&b);
   lcm(a,b);
    return 0;
}



using namespace std;
void copy(char f1[],char f2[])
{
   ifstream fin;
   ofstream fout;
   char ch;
   fin.open(f1,ios::in);
   if(!fin)
   {
    cout<<"file not found";
   }
   else
   {
   fout.open(f2,ios::out);
   ch=fin.get();

   while(!fin.eof())
   {
    fout<<ch;
      ch=fin.get();
   }
   }
  fin.close();
  fout.close();
}
// char s[]={"assignment1.c"},s2[]={"temp.c"};
   // copy(s,s2);