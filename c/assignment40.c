#include<stdio.h>
#include<string.h>

void input_string(char str[][50],int n)
{
           int i,l;
          
           for(i=0;i<n;i++)
           {
            fgets(str[i],50,stdin);
            for(l=0;str[i][l];l++);
            str[i][l-1]='\0';
            fflush(stdin);
            
           }
           

}
//q2
void find_vowel(char str[][50],int n)
{
           int i,l,s;
          
           input_string(str,n);
            for(i=0;i<n;i++)
           {
            printf("the vowels of %d string : ",i+1);
            for(l=0,s=0;l<50;l++)
            {
              if(str[i][l]=='a' || str[i][l]=='e' ||str[i][l]=='i' ||str[i][l]=='o' ||str[i][l]=='u' ||str[i][l]=='A' ||str[i][l]=='E' ||str[i][l]=='I' ||str[i][l]=='O' ||str[i][l]=='U' )
                {
                    s++;
                }
                  if(str[i][l]=='\0')
                  break;
            }
            printf("%d\n",s);   
           }

}
//q3
void sort_city(char str[][50],int n)
{
   int i,j;
   char temp[50];
   input_string(str,n);
   for(i=0;i<n-1;i++)
   {
    for(j=i+1;j<n;j++)
    {
      if(strcmp(str[i],str[j])>0)
      {
        strcpy(temp,str[i]);
        strcpy(str[i],str[j]);
        strcpy(str[j],temp);
        
      }
    }
   }
  
   for(i=0;i<n;i++)
   {
     puts(str[i]);
   }
} 
//q4
void each_word(char str[])
{
  int i,s,j,k,p,r;
  for(j=0,s=1;j<strlen(str);j++)
  {
    if(str[j]==' ')
    s++;
  }
char st[s][50];
for(i=0,j=0;i<s;i++)
{
  k=j;
  for(;str[j]!=' ' && str[j]!='\0';j++);
   for(r=k,p=0;r<j;r++,p++)
    {
      st[i][p]=str[r];
    }
    st[i][p]='\0';
  j++;
}
for(i=0;i<s;i++)
{
  puts(st[i]);
}
}
//q5
void  remove_duplicate(char str[][20],int n)

{
  int i,j,s,k;
   

  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(strlen(str[i])==strlen(str[j]))
      {
         for(k=0,s=0;str[i][k]!='\0';k++)
         {
           if(str[i][k]!=str[j][k])
           {
            s++;
            break;
           }
         }
         if(s==0)
         {
          str[j][0]='\0';
         }
      }
    }
  }
  for(i=0;i<n;i++)
  {
    if(str[i][0]!='\0')
    puts(str[i]);
  }

}

int main()
 {
    int n, i;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    fflush(stdin); // Avoid using fflush(stdin)

    char str[n][20];
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%19s", str[i]); 
    }
    
    remove_duplicate(str, n);

    return 0;
}