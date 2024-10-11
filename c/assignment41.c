#include<stdio.h>
#include<string.h>
//q1
void s_word(char str[])
{
    int j=0,k,p=0,r,h,i,s;
    char new[10][50];
    for(i=0,s=1;i<strlen(str);i++)
    {
        if(str[i]==' ')
        s++;
    }
    
    for(i=0;i<s;i++)
    {
        k=j;
        for(;str[j]!=' ' && str[j]!='\0' ;j++);
        if(str[j-1]=='s')
        {
          for(r=k,h=0;r<j;r++,h++)
          {
            new[p][h]=str[r];
          }
           new[p][h]='\0';
        p++;
        }
       j++;
    }
    for(i=0;i<p;i++)
    {
        puts(new[i]);
    }
}
//q2
char repeat_character(char str[][50])
{
   int i,p,k,j,h,r,a,s=0;
   char c;
   for(i=0;str[i][0]!='\0';i++);
  
   for(p=0;p<i-1;p++)
   {
    for(k=0;str[p][k]!='\0';k++)
    {
        for(j=0,a=0;j<i-1;j++)
        {
            for(h=0;str[j][h]!='\0';h++)
            {
                if(str[p][k]==str[j][h])
                {
                    a++;
                }
            }
        }
        if(s<a)
        {
            c=str[p][k];
            s=a;
        }
    }
   }

  return c;
}
//q3
int anagram_string(char s1[],char s2[]  )
{
   int f1[256]={0},f2[256]={0};
   int i;
   for(i=0;s1[i];i++)
   f1[s1[i]]++;
    for(i=0;s2[i];i++)
   f2[s2[i]]++;
   for(i=0;i<256;i++)
   if(f1[i]!=f2[i])
   return 0;

   return 1;
   
}
//q4
 void a_word(char s1[])
 {
    int k,p=0,i,s,j=-1;
    char new[10][50];
    for(i=0,s=1;i<strlen(s1);i++)
        if(s1[i]==' ')
        s++;


    i=0;
    for(k=0;k<s;k++)
    {
   if(s1[i]=='a' && s1[i-1]==' ')
   {
    j++;
     for(;s1[i]!=' '&&s1[i]!='\0';i++)
     {
       new[j][p++]=s1[i]; 
     }
     new[j][p]='\0';
   
     p=0;
   }
   else
   {
       for(;s1[i]!=' '&&s1[i]!='\0';i++);
   }
    if (s1[i] == '\0') 
            break;

       i++;
    }
    for(i=0;i<=j;i++)
    {
        puts(new[i]);
    }
 }

//q5
int gmail_checking(char s1[][100])
{
    char find[]={"@gmail.com"};
    int k,count=0,j,i,m;
    for(i=0;s1[i][0]!='\0';i++)
    {
        for(j=strlen(s1[i])-10,m=0,k=0;m<10;m++,j++)
        {
            if(find[m]==s1[i][j])
            k++;
        }
        if(k==10)
        count++;
    }
    return count;
}

int main()
{
    char s1[][100]={"roshani@gmail.com","bija@gmail.com","ra@google.com","giwndos@gmail.com","pinku@gmail.com"};
  
  printf("%d", gmail_checking(s1));
    return 0;
}