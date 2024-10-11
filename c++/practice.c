#include<stdio.h>
int main()
{
    char a[1000];
    int i,f,j,k;
    fgets(a,1000,stdin);
      for(j=0;j<10;j++)
    {   
        f=0;
     for(i=0;a[i];i++)
       {
          if(a[i]=='0'+j)
          {
            f++;
          }
       }
       printf("%d\t",f);
    }
   return 0;
}
