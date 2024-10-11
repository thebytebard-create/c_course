#include<stdio.h>
void q1(char[]);
void q2(char [],char);
void q3(char []);
void q4(char[]);
void q5(char []);


void q1(char s[])
{
    //count the length
   int i;
   for(i=0;s[i];i++);
   printf("%d",i);

}


void q2(char s[],char n)
{
    //count the occurance of n
  int i,count=0;
   for(i=0;s[i];i++)
   {
    if(n==s[i])
    count++;
   }
   printf("%d",count);
}

void q3(char s[])
{
    //count the vowels
  int i,count=0;
   for(i=0;s[i];i++)
   {
    if('a'==s[i]||'e'==s[i]||'i'==s[i]||'o'==s[i]||'u'==s[i])
    count++;
   }
   printf("%d",count);
}

void q4(char s[])
{
    //count the spaces
  int i,count=-1;
   for(i=0;s[i];i++)
   {
    if(' '==s[i])
    count++;
   }
   printf("%d",count);
}


void q5(char s[])
{
    //change into uppercase
    int i;
   for(i=0;s[i];i++)
   {
    if(s[i]>='a'&&s[i]<='z')
      s[i]-=32;
    
   }
    for(i=0;s[i];i++)
   {
    printf("%c",s[i]);
    
   }
}
int main()
{
   
        
    return 0;
}
