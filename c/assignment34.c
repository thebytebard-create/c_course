#include<stdio.h>
/*q1
int main()
{
    int i;
    char name[20]="roshani singh";
    
    for(i=1;name[i];i++);
    printf("%d",i); 
    return 0;

}
*/

/*q2
int main ()
{
    char str[20],c;
    int count,i;
    printf("enter a string");
    fgets(str,20,stdin);
    str[i-1]='\0';
     printf("enter a character");
     fflush(stdin);
     scanf("%c",&c);
   for(count=0,i=0;count<20;count++)
   {
    if(str[count]==c)
    {
         i++;
    }
   }
   printf("%d",i);
   return 0;

}
*/

/*q3
int main()
{
   char str[19] ;
   int i,count;
   //v[]="aeiouAEIOU" THEN COMPARE ,it is other method
   count=0;
   printf("enter a string");
   gets(str);
  for(i=0;i<19;i++)
  {
    if(str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='u'|| str[i]=='i' )
    {
     count++;
    }
  }
  printf("%d",count);
  return 0;
}
*/
 /*q4
int main ()
{
    char str[20],c;
    int count,i;
    printf("enter a string");
    fgets(str,20,stdin);
     
   for(count=0,i=0;count<20;count++)
   {
    if(str[count]==' ')
    {
         i++;
    }
   }
   printf("%d",i);
   return 0;

}
*/

int main ()
{
    char str[20];
    int count,i;
    printf("enter a string");
     
    fgets(str,20,stdin);
    for(i=1;str[i];i++);
     
      for(count=0;count<i-1;count++)
   {
    if(str[i]>='a'&& str[i]<='z')
    {
     if(str[count]!=32)
     {
         str[count]= str[count]-32;
     } 
    }
   }
  
   printf("%s",str);
   return 0;
}

