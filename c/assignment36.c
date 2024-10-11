#include<stdio.h>

//q1
int length(char str[])
{
  int i;
  for(i=0;str[i]!='\0';i++);
  return i-1; 
}
//q2
char* reverse(char str[])
{
    char oth[20];
    int i,j,k;
   
    for(i=0;str[i]!='\0';i++)
    {
        oth[i]=str[i];
    }
     for(k=0,j=i-1;k<i;k++,j--)
    {
       str[k]=oth[j];
    }
  
  return str;
}

//Q3
/*
char* comparison(char s1[] ,char s2[])
{
    int i;
    for(i=0;s1[i]&&s2[i];i++)
    {
       if(s1[i]!=s2[i])
       return s1[i]-s2[i];
    }

    return s1[i]-s2[i];
}
*/
//q4
char* uppercase(char str[])
{
int i;
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]!=' ')
    {
        str[i]=str[i]-32;
    }
  }
  str[i-1]='\0';
 return str;

}
//Q5
char* lowercase(char str[])
{
int i;
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]!=' ')
    {
        str[i]=str[i]+32;
    }
  }
   str[i-1]='\0';
 return str;
}
int main ()
{

   char str[20];
   printf("enter a string : ");
   fgets(str,20,stdin);
   printf("%s",lowercase(str));

   return 0;
}