#include<stdio.h>
//q1
int count_vowel(char str[],int l )
{
  int i,count=0,k;
  char v[]="aeiouAEIOU";
  for(i=0;i<l;i++)
  {
     for(k=0;v[k];k++)
     {
        if(str[i]==v[k])
        {
            count++;
            break;
        }
     }
  }
  return count;
}
//q2
int find_number(char str[],int l,char ch)
{
int i;
for(i=0;i<l;i++)
{
    if(str[i]==ch)
    {
        return i;
    }
}
return -1;
     
}

//q3
 int find_index( char str[],int i1,int i2,char ch)
 {
  int i;
   for(;i1-1<i2-1;i++)
   {
     if(str[i1]==ch)
     break;
   }
   return i1+1;
 }

 //q4
 char* swap(char str[],int i1,int i2)
 {
    int s;
    s=str[i1-1];
    str[i1-1]=str[i2-1];
    str[i2-1]=s;
    return str;
 }

//q5
 
 int check_string(char str[],int l)
 {
    int i,s;
    for(i=0;i<l;i++)
    {
        if(str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z')
        {
          s=1;
        }
        if(str[i]>='0'&&str[i]<='9')
        {
            s++;
        }
        if(s>1)
        return 1;
    }
    if(i==l)
    {
        return 0;
    }
 }
int main()
{
    int l,i1,i2;
    char str[20],ch;
    printf("enter the string : ");
    fgets(str,20,stdin);
   // fflush(stdin);
 //   printf("enter a character : ");
    scanf(" %c",&ch);
    for(l=0;str[l];l++);
    str[l-1]='\0';

    printf("%d",find_number(str,l,ch));
    return 0;
}