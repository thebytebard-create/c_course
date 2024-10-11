#include<stdio.h>
//q1
void sum ()
{
  int i,j,a[3][3],b[3][3],c[3][3];
  printf("enter the 9 value of first matrix : ");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
        printf("enter the 9 value of second matrix : ");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
        printf("the sum of first and second matrix : \n");
      
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
         {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d  ",c[i][j]); 
       
         }
         printf("\n");
  }
     
}

//q2
void product()
{
    int i,j,a[3][3],b[3][3],c[3][3],k,s;
    printf("enter the 9 values of first matrix : ");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);

    printf("enter the 9 values of second matrix : ");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);

    printf("product of first and second matrix : ");
    printf("\n");
    for(i=0;i<3;i++)
    {
      for(k=0;k<3;k++)
      {
        for(j=0,s=0;j<3;j++)
        {
          s=s+a[i][j]*b[j][k];
        }
        c[i][k]=s;
        printf("%d  ",c[i][k]);

      }
      printf("\n");
    }
}

//q3
void transpose()
{
  int a[3][3],i,j,s,k=0;
   printf("enter the 9 values of first matrix : ");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);

    for(i=0,j=1;k<3;k++)
    {
      s=a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=s;
      if(j-i==0)
     j++;
     else
     i++;
    }

       printf("the new transpose matrix : ");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    printf("%d  ",a[i][j]);
 
    }
printf("\n");
    } 
}


int main()
{
  transpose();
   return 0;
}