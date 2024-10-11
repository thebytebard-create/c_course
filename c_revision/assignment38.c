#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int q1(char [],int);
void q2(char [],int);
int q3(char [],int);
char* q4(char [],int);
bool q5(char [],char []); 
int q1(char s[],int j)
{
    // check if series is palindrome or not
    int i;
    char temp[j+1];
    for(i=0;i<j;i++)
     temp[i]=s[i];
     temp[i]='\n';
     for(i=0;i<j;i++)
     {
        if(temp[j-1-i]!=s[i])
        return 0;         
     }
    return 1;
}

void q2(char s[],int j)
{
    // removing leading spaces from both ends
    int i,k;
    for(i=0;s[i]==' ';i++);
    for(;s[j-1]==' ';j--); 
    for(k=0;i<=j;k++,i++)
    s[k]=s[i];
   s[k]='\0';

}

int q3(char s[],int j)
{
    //count the words
    int i,count=1;
    for(i=0;i<j;i++)
    {
       if(s[i]==' ')
       count++;
    }
    return count;
}

char* q4(char s[],int j)
{
    // reverse the string word vise not letter vise
   int i,k=0;
   char temp[j+1];
   for(j=j-1;j>=0;j--)
   {
    if(s[j]==' '||j==0)
    {
      if(j!=0)
      i=j+1;
      else
       i=j;
      for(;s[i]!=' '&&s[i]!='\0';i++,k++)
     temp[k]=s[i];
    }
    if(s[j]==' ')
    {
        temp[k]=' ';
        k++;
    }
   }
 temp[k]='\0';
   for(i=0;temp[i];i++)
   s[i]=temp[i];

   return s;
}

bool q5(char s[],char p[])
{
    int j,i;
    if(strlen(s)==strlen(p))
    j=strlen(s);
    else
    return 0;
   int  t[j],t2[j];
    for(i=0;i<j;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            t[i]=s[i]+32;
        else
             t[i]=s[i];
        if(p[i]>='A'&&p[i]<='Z')
            t2[i]=p[i]+32;
        else
             t2[i]=p[i];
    }

      for(i=0;i<j;i++)
    {
        if(t[i]!=t2[i])
           return 0;
    }

    return 1;

}


int main()
{
 char s[]={"jai mata @i"},p[]={"jai mata @i"};
 
 printf("%d",q3(s,11));
 //printf("%d",);
 return 0;
}