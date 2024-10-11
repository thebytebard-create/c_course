#include<stdio.h>
// q1
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
//q2
void search_all_occurances(char *str,char ch,int *arr)
{
    int i,j;
    for(i=0,j=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            arr[j]=i;
            j++;
        }
    }
}
//q3
 char* convert_uppercase(char *str)
 {
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    return str;
 }
 //q3
 char* convert_lowercase(char *str)
 {
    int i;
     for(i=0;str[i];i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    return str;
 }
 //q5
 void extract_string(char *str, int start_index,int end_index,char *result)
 {
    int i=0;
    for(;start_index!=end_index;start_index++)
    {
      result[i]=str[start_index];
      i++;
    }
    result[i]='\0';
 }


int main ()
{
    int a,b;
    printf("enter the value of a and b : ");
    scanf("%d %d",&a,&b);
   swap(&a,&b);

    printf("the swaped values of a and b is : %d %d",a,b);
    return 0;
}