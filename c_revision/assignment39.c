#include<stdio.h>
#include<string.h>
void q1(char []);
int q2(char [],char c);
void q3(char []);
void q4(char []);
void q5(char [],char []);

void q1(char s[])
{
    //count frequency of each character
    int i,c,k,count;
    for(i=0;s[i];i++)
    {
        count=1;
       for(c=0;c<i;c++)
       {
        if(s[i]==s[c])
        break;
       }

       if(c==i)
       {
        for(k=i+1;s[k];k++)
        {
            if(s[i]==s[k])
        count++;
       }
        printf("\n%c = %d",s[i],count);
       }
      
    }
}

int q2(char s[],char c)
{
    // find the word in the index
  int i;
  for(i=0;s[i];i++)
  {
    if(s[i]==c)
      return i+1;
  }
  return 0;
}

void q3(char s[])
{
   //make first letter capital
   if(s[0]>='a'&&s[0]<='z')
     s[0]=s[0]-32;
}

void q4(char s[])
{
    // make roshani singh rathore == roshani s r
   int i,k;
   int temp[strlen(s)];
   for(i=0;s[i];i++)
   {
    temp[i]=s[i];
    if(s[i]==' ')
       break;
   }

   for(k=i+1;s[i];i++)
   {
    if(s[i]==' ')
    {
    temp[k]=s[i+1];
    temp[++k]=' ';
    k++;
    }
   }
   temp[k]='\0';
   for(i=0;temp[i];i++)
    s[i]=temp[i];

    s[i]='\0';
   
}

void q5(char s[],char p[])
{
    // concatenat two string
   strcat(s,p);
}
int main()
{
    char s[8]={"Roshani"},c={"dhnzi"};
    q5(s,c);
    printf("%s",s);
    return 0;
}