#include<stdio.h>
int main ()
{
  char str[20];
  int i;
  printf("enter the string : ");
  fgets(str,20,stdin);

  for(i=0;str[i];i++)
  {
    if(str[i]>='A'&&str[i]<='Z')
    {
      str[i]=str[i]+32;
    }
  }
  str[i-1]='\0';
  printf("%s",str);
  return 0;
}

  /*q2
int main()
{
  
    char str[20],oth[20];
    int count,i,k,s;
    printf("enter a string");
     
    gets(str);
    for(i=0;str[i];i++);
     
      for(count=0;count<i;count++)
   {    
       oth[count]=  str[count];
   }
      for(count=0,k=i-1;count<i;count++,k--)
   {    
      str[count]=  oth[k];
   }
  
   printf("%s",str);
   return 0;
}
*/

/*q3
int main()
{
  char str[20];
  int i,j,p=0,q=0,r=0;
  printf("enter the string");
  fgets(str,20,stdin);

 
  for(j=0;str[j]!='\0';j++)
  {
    if(str[j]>='a'&&str[j]<='z' || str[j]>='A'&&str[j]<='Z')
    {
      p=p+1;
    }
    else
    {
      if(str[j]>='0'&&str[j]<='9')
      {
       q=q+1;
      }
      else
      {
       r=r+1;
      }
    }
  }
str[i-1]='\0';
  printf("alphabets = %d digit = %d special = %d",p,q,r);
  return 0;
}
*/

/*q4
int main()
{
  char str[20],oth[20];
  int i;
  fgets(str,20,stdin);
  for(i=0;str[i]!='\0';i++)
  {
    oth[i]=str[i];
  }
  oth[i]='\0';
  printf("%s",oth);
  return 0;
}
*/

/*q5
int main ()
{
  char str[20],c;
  int i;
  printf("enter the string and character : ");
  fgets(str,20,stdin);
  scanf("%c",&c);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]==c)
    break;
  }
  if(str[i])
  {
    printf("%d",i+1);
  }
  else
  {
    printf("not found");
  }
  return 0;

}*/