#include<stdio.h>
#include<string.h>
//q1
void frequency_chracter(char str[],int l)
{
    int i,s,j,c;
    printf("the frequency of characters :\n");
    for(i=0;i<l;i++)
    {
       for(c=0;c<i;c++)
       {
         if(str[i]==str[c])
         break;
       }
       if(c==i)
       {
       for(j=0,s=0;j<l;j++)
       {
        if(str[i]==str[j])
        {
           s++;
        }
       }
       printf("%c = %d \n",str[i],s);
       }
    }
}
//q2
 int find_word(char str[],char word[],int l)
 {
   int i,j,k,p;
    for(k=0;word[k];k++)
    {
       if(word[k]=='\n')
       {
        word[k]='\0';
        break;
       }
    }
    for(i=0;i<l;i++)
    {
        j=i;
        for(p=0;p<k;p++,i++)
        {
            if(str[i]!=word[p])
            break;
        }
        if(p==k)
        return j+1;
        i=j;
    }
    return -1;

 }
 //q3
char* first_capital(char str[],int l)
{
   
    int i;
    for(i=0;i<l;i++)
    {
        if( str[i-1]==' ' || i==0)
        {
            if(str[i]>='a'&&str[i<='z'])
            {
                str[i]=str[i]-32;
            }
        }
    }
    return str;
}
//q4
 
 char* short_form(char str[],char new[],int l)
{
    int i, j = 0,k;

   for(k=l-1;str[k]!=' ';k--);

    for (i = 0; i < k; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            new[j++] = str[i];
            new[j++] = ' ';
            
           
        }
    }

    for(i++;i<l;i++)
    {
      new[j++]=str[i];

    }

    
    new[j] = '\0'; // Null-terminate the new string
    
    
    return new;
}

//q5
 char* concatenate(char s1[],char s2[])
 {
   int i,j;
   for(i=0;s1[i];i++);
   s1[i]=' ';
   i++;

   for(j=0;s2[j];j++,i++)
   {
    s1[i]=s2[j];
   }
   return s1;


 }
 
int main()
{
    char str[20];
  char word[20];
    int l;
   printf("enter the string : ");
    fgets(str,50,stdin);
 //fflush(stdin);
  //printf("enter another string : ");
//fgets(word,20,stdin);
    for(l=0;str[l];l++)
    {
       if(str[l]=='\n')
       {
        str[l]='\0';
        break;
       }
    }
  
 
   printf("%s",short_form(str,word,l));
   
 //  frequency_chracter(str,l);

    return 0;

}