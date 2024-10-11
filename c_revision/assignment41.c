#include<stdio.h>

void ps(char s[][20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n%s",s[i]);
    }
}

void q1(char c[],char s[][20])
{
    int i,j,p=0,k=0;
    for(i=0;c[i];i++)
    {
       
        if(c[i]=='s'&&c[i+1]==' '||c[i+1]=='\0')
        {
          for(j=0;p!=i;p++,j++)
          s[k][j]=c[i];
          k++;
         s[k][j]='\0';
        }
        if(c[i]==' ')
        p=i+1;
    }
    ps(s,k);
}

int main()
{
    char c[]={"poas fdd gfbg fgds ffd fffs"},s[10][20];
    q1(c,s);
    return 0;
}