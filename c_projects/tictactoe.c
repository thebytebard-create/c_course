#include<stdio.h>
#include<stdlib.h>
void init(char a[][3])
{
    int i,j;
   for(i=0;i<3;i++)
     for(j=0;j<3;j++)
        a[i][j]=' ';
}

void display(char a[][3])
{
   int i,j;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
        printf("%c ",a[i][j]);
    printf("\n");
   }
}

void check(char a[][3])
{
  int i,j;
   for(i=0;i<3;i++)
   {
    if(a[i][0] == 'X' && a[i][1] == 'X' && a[i][2] == 'X' ||  a[i][0] == 'O' && a[i][1] == 'O' && a[i][2] == 'O' )
       {
        if(a[i][0]=='X')
        printf("\nplayer 1 is winner ");
        else
          printf("\nplayer 2 is winner ");
         exit(0); 
       }
   }
   for(i=0;i<3;i++)
   {
    if( a[0][i] == 'X' && a[1][i] == 'X' && a[2][i] == 'X' ||  a[0][i] == 'O' && a[1][i] == 'O' && a[2][i] == 'O' )
       {
        if(a[0][i]=='X')
        printf("\nplayer 1 is winner ");
        else
          printf("\nplayer 2 is winner ");
         exit(0); 
       }
   }
  
    if(a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X' ||  a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
       {
        if(a[0][0]=='X')
        printf("\nplayer 1 is winner ");
        else
          printf("\nplayer 2 is winner ");
         exit(0); 
       }
     if(a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X' ||  a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O'  )
       {
        if(a[0][2]=='X')
        printf("\nplayer 1 is winner ");
        else
          printf("\nplayer 2 is winner ");
         exit(0); 
       }
}
int main()
{
  
  char a[3][3];
  init(a);
  int i=0,j,k,p=1;
  while(i<9)
  {
    if(i!=0)
    display(a);
    printf("\nplayer %d :\nenter row: ",p);
    scanf("%d",&j);
    while(1)
    {
    if(j<1||j>3)
    {
      printf(("\ninvalid row :\nentr from 1 to 3 : "));
       scanf("%d",&j);
    }
    else 
      break;
    }
    printf("\nenter column : ");
    scanf("%d",&k);
     while(1)
    {
    if(k<1||k>3)
    {
      printf(("\ninvalid column :\nentr from 1 to 3 : "));
       scanf("%d",&k);
    }
    else 
      break;
    }
     
     if(a[j-1][k-1]=='X' || a[j-1][k-1]=='O')
     printf("\nthis place is already filled\n");
     else if(p==1)
     {
      a[j-1][k-1]='X';
      p=2; i++;
     }
     else
     {
         a[j-1][k-1]='O';
        p=1;  i++;
     }
    check(a);
   
  }
  if(i==6)
  {
    printf("\nDRAW\nGAME OVER");
  }
    return 0;
}