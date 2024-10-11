#include<stdio.h>
#include<stdbool.h>
int q1(char []);
int q2(char [],char );
int q3(char [],char,int ,int);
void q4(char [],int,int);
bool q5(char []);

int q1(char s[])
{
    //count the vowel
int i,count=0,j;
char v[]={"aeiouAEIOU"};
 for(i=0;s[i];i++)
 {

    for(j=0;v[j];j++)
    {
        if(s[i]==v[j])
        {
        count++;
        break;
        }
    }
 }
 return count;
}

int q2(char s[],char c)
{
    // return the index of first occurance of given character 
    int i,count=0;
 for(i=0;s[i];i++)
 {
    if(s[i]==c)
    return i;
 }
 return -1;
}


int q3(char s[],char c,int a,int b)
{
    int i=0;
    //find character in a given string between specified indecies inclusive start and exclusive end
    for(;a<b;a++)
    {
        if(s[a]==c)
        {
            i=a+1;
          break;
          
        }
       
    }
    return i;
}
 

void q4(char s[],int a,int b)
{

    // swap the string character of given index
    char temp;
    temp=s[a];
    s[a]=s[b];
    s[b]=temp;
}

bool q5(char s[])
{
    //check alphanumeric
    int count=0 ;int i;
     for(i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {
          count++;
          break;
        }
    }
    for(i=0;s[i];i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
          count++;
          break;
        }
    }
    if(count==2)
    return true;
    else 
    return false;
}
int main()
{
    char s[]={"rosani"};
   // q4(s,1,3);
    printf("%d",q5(s));
    return 0;
}