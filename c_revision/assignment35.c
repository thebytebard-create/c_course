#include<stdio.h>
#include<string.h>
void q1(char []);
void q2(char []);
void q3(char []);
void q4(char [],char[]);
int q5(char [],char c);

void q1(char s[])
{
  // convert string into uppercase
   int i;
   for(i=0;s[i];i++)
   {
    if(s[i]>='A'&&s[i]<='Z')
    {
        s[i]=+32;
    }
   }
    for(i=0;s[i];i++)
   {
    printf("%s",s[i]);
    
   }
}

void q2(char s[])
{
   // reverse the string
   char a[strlen(s)+1];
   int i;
   for(i=0;i<s[i];i++)
     a[i]=s[strlen(s)-1-i];
     a[i]='\n';
   for(i=0;i<s[i];i++)
     s[i]=a[i];
     printf("%s",s);

}

void q3(char s[])
{
   //count the alphabets,digits,special characters
   int i,a=0,d=0,sc=0;
   for(i=0;i<s[i];i++)
   {
      if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
      a++;
      else if(s[i]>='0'&&s[i]<='9')
      d++;
      else
      sc++;
   }
   printf("alphabet=%d digits=%d special character=%d",a,d,sc);
}

void q4(char a[],char s[])
{
   // copy last string into first string
   int i;
   int j=strlen(s)>=strlen(a)?strlen(s):strlen(a);
   for(i=0;i<j;i++)
   {
     a[i]=s[i];
   }
   while(a[i])
   {
      a[i]='\n';
      i++;
   }
   printf("%s",a);
}

int q5(char s[],char c)
{
  //first occurance of a given character in a givng string
    int i;
    for(i=0;s[i];i++)
    {
      if(s[i]==c)
      return i+1;
    }

    return 0;
}
int main()
{ 
  
  char s[20],a[20],c[6]={"muskan"};
  fgets(s,20,stdin);
  scanf("%c",&c);


  return 0;
}