#include<stdio.h>
int pallindrome(char str[],int l)
{
   int i,k;
   char check[l];
   for(i=0,k=l-1;i<l;i++,k--)
   {
    check[i]=str[k];
   }
    for(i=0;i<l-1;i++)
   {
    if(str[i]!=check[i])
    return 0;
   }
   
return 1;
}
//q2
char* trim(char str[],int l)
{
  int i,j,p;
                                                
  
  for(i=0;str[i]==' ';i++);
   for(j=l-1;str[j]==' ';j--); 
   j=j-i;  
 char  rev[j+1] ;
 for(p=0;p<=j;i++,p++)
 {
    rev[p]=str[i];
 }
  for(p=0;p<=j;p++)
 {
    str[p]=rev[p];
 }
 str[j+1]='\0';
  return str;
}

 char* tr(char str[])
 {
   int i;
   for(i=0;str[i];i++)
   {
      if(str[i]!='\0')
      strcpy(str,str+i);
      for(i=0;str[i];i++);
      i--;
      while(str[i]==' ')
      i--;
      str[i+1]='\0';
      return str;
   }
 }
//q3
int count_words(char str[],int l)
{
   int i,c=1;
   for(i=0;i<l-1;i++)
   {
     if(str[i]==' ')
     c++;
   }
   return c;
}
char* reverse_word(char str[],int l)
{
   int i,j=l-1,o,k=0,s=1;
   char oth[l-1];

   for(i=0;i<l;i++)
   {
      if(str[i]==' ')
      {
         s++;
      }
   }

   for(i=0;i<s;i++)
   {
      for(;str[j]!=' '&&j!=0;j--);
      
      o=j;
      if(o!=0)
      {
         j=j+1;
      }
       for(;str[j]!=' '&&j<l&&k<l;j++,k++)
   {
     
      oth[k]=str[j];
    
   }
   oth[k]=' ';
   j=o-1;
   k++;

   }
  
  for(i=0;i<l;i++)
  {
   str[i]=oth[i];
  }
  return str;

}
int compare(char str[],char oth[])
{
   int i,l;
   for(i=0;str[i];i++);
   for(l=0;oth[l];l++);
   if(i!=l)
   return 0;

   for(i=0;i<l;i++)
   {
      if(str[i]>='a'&&str[i]<='z')
      {
         str[i]=str[i]-32;
      }
       if(oth[i]>='a'&&oth[i]<='z')
      {
         oth[i]=oth[i]-32;
      }
   }

   for(i=0;i<l;i++)
   {
      if(str[i]!=oth[i])
      break;
   }
   if(i>=l)
   {
      return 1;
   }
   else
   {
      return 0;
   }

   
   

}

int main() {
    char str[20]="kamlesh",oth[20]="KAMLESr";
    int l;
  //  printf("Enter the string: ");
   // fgets(str, 20, stdin);
    for (l = 0; str[l] != '\0'; l++) {
        if (str[l] == '\n') {
            str[l] = '\0'; 
            break;
        }
    }
    printf("%d",compare(str,oth));
    return 0;
}