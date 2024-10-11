#include<stdio.h>
#include<string.h>
void swap_string(char *s1,char *s2)
{
   
   char temp[200];
  strcpy(temp,s1);
  strcpy(s1,s2);
  strcpy(s2,temp);
      
}
//q2
void sort(int *ptr,int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
        if(ptr[i]>ptr[j])
        {
          temp= ptr[i];
          ptr[i]=ptr[j];
          ptr[j]=temp;
        }
        }
    }
}
//q3
void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)
{
    int i,j=0;
    for(i=0;i<size1;i++,j++)
    {
        arr3[j]=arr1[i];
    }

     for(i=0;i<size2;i++,j++)
    {
        arr3[j]=arr2[i];
    }


}
//q4
void left_first_right(int *str,int size)
{
  int i=0,j=0,temp[50],k=0;
 for(i=1;i<size;i++)
 {
    if(str[0]>str[i])
    {
        temp[k]=str[i];
        k++;
    }
 }
    temp[k++]=str[0];
    for(i=1;i<size;i++)
 {
    if(str[0]<str[i])
    {
        temp[k++]=str[i];
    }
 }

 for(i=0;i<size;i++)
 {
    str[i]=temp[i];
 }
       
}
//q5
int higest_marks(int **p,int class,int students[])
{
    int i,j,max=p[0][0];
    for(i=0;i<class;i++)
    {
        for(j=0;j<students[i];j++)
        {
            if(max<p[i][j]);
        }
    }
    return max;
}
int main()
{
    int p1[]={12,45,8,6,96};
   int *str,i;
   str=p1;
   left_first_right(str,5);
   for(i=0;i<5;i++)
   {
    printf("%d ",p1[i]);
   }

   return 0;
}

