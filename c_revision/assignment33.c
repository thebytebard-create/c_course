#include<stdio.h>
void q1(int [][3],int[][3]);
void q2(int [][3],int [][3]);
void q3(int [][3]);
void q4();
void q5(int ,int,int,int [][4]);
void q6(int [][4]);
int q7(int [][4],int);
int q8(int [][4]);
void q9(int [][4]);
void sort(int [],int []);
void q1(int a[][3],int b[][3])
{
    //sum of two matrix(3*3)
    int i,j,temp[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            temp[i][j]=a[i][j]+b[i][j];
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
}

void q2(int a[][3],int b[][3])
{
   //the multiplication of two matrix(3*3)
   int i,j,temp[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           temp[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
}

void q3(int a[][3])
{
   //transpose the matrix
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d ",a[j][i]);
        }
        printf("\n");
    } 
}


void q4()
{
    // declare a scoreboard and run the function at the same time
    int score_board [4][4]={0};
    q5(0,1,2,score_board);
    q5(0,2,1,score_board);
    q5(0,3,2,score_board);
    q5(1,2,1,score_board);
    q5(1,3,0,score_board);
    q5(2,3,0,score_board);
    q9(score_board);
}


void q5(int p1,int p2,int result,int score_board[][4])
{
    // update the scoreboard after each game
   score_board[p1][p2]=result;
    score_board[p2][p1]=2-result;

}


void q6(int score_board[][4])
{
    // display the score board
    int i,j;
   for(i=0;i<4;i++)
   {
      for(j=0;j<4;j++)
      printf("%d ",score_board[i][j]);

      printf("\n");
   } 
}

int q7(int score_board[][4],int p)
{
    // return the score of specific player
    int i,sum=0;
    for(i=0;i<4;i++)
   {
       sum=score_board[p][i]+sum; 
   } 
   return sum;
}


int q8(int score_board[][4])
{
   //find the winner
     int player=0,score,winner;
      score= q7(score_board,player);
      winner=player;
     for(++player;player<4;player++)
     {
        if(score<q7(score_board,player))
     {
        score=q7(score_board,player);
        winner=player;
     }
     }
     return winner;
 

}

void sort(int a[],int s[])
{
    int i,j,temp;
    for(i=0;i<4;i++)
    {
         for(j=i+1;j<4;j++)
         {
            if(a[i]<a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            }
         }
    }
}


void q9(int score_board[][4])
{
    //show rank of player
    int p[4],i,si[4];
    
     for(i=0;i<4;i++)
     {
       p[i]=q7(score_board,i);
       
       si[i]=i;
     }
     sort(p,si);
     for(i=0;i<4;i++)
     {
     printf("%d)  %d - score %d\n",i+1,si[i],p[i]);
     }

}
int main()
{
 
   int m[][3]={{1,2,3},{4,5,6},{7,8,9}};
   q3(m);
    return 0;
}