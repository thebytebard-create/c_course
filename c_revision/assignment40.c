#include<stdio.h>
#include<string.h>

void q1(char str[][20],int n)
{
    // to take the string
         int i,l;
           for(i=0;i<n;i++)
           {
            fgets(str[i],20,stdin);
            str[i][19]='\0';
            fflush(stdin);
           }
}


void ps(char s[][20],int n)
{
    // to print the string
    int i;
     for(i=0;i<n;i++)
           printf("\n%s",s[i]);
}

void q2(char s[][20],int n)
{
    // count vowels in each array
   int i,j,k,count;
   char t[]={"aeiouAEIOU"};
    q1(s,5);
    for(i=0;i<n;i++)
    {
         for(j=0,count=0;s[i][j];j++)  
           {
             for(k=0;t[k];k++)
             {
                if(t[k]==s[i][j])
                {
                    count++;  
                }
             }
           }
           printf("\n%d",count);
    }
    
}

void q3(char s[][20],int n)
{
  // sort ten city names or names
   int i,j,k;
   char t[20];
    q1(s,n);
    for(i=0;i<n;i++)
    {
         if(s[i][0]<='z'&&s[i][0]>='a')
           s[i][0]= s[i][0]-32;
    }
     for(i=0;i<n;i++)
    {
         for(j=i+1;j<n;j++)
         {
            if(s[i][0]>s[j][0])
            {
              strcpy(t,s[i]);
              strcpy(s[i],s[j]);
              strcpy(s[j],t);
            }
         } 
    }
    ps(s,10);
}


void q4(char c[],char s[][20])
{
   // store each word of string into difeerent two d array
    int i,j=-1,k=0;
    for(i=0;c[i];i++)
    {
       if(c[i]!=' ') 
        s[k][++j]=c[i];
       else
          {
            s[k][++j]='\0';
            k++;
            j=-1;
          }
    }
    ps(s,k);
}

void q5(char s[][20],int n)
{
  //remove the duplicate
  int i,j,k;
 
  q1(s,n);
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;)
    {
      if(strcmp(s[i],s[j])==0)
      {
        for (k = j; k < n - 1; k++) {
                    strcpy(s[k], s[k + 1]);
                }
                n--; 
            } else {
                j++; 
      }
    }
  }
    ps(s, n); 
}

int main()
{
    char s[5][20];
    
    q5(s,5);
    return 0;
}