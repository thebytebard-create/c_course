#include<stdio.h>
#include<stdlib.h>
char a[3][3];

void set()
{
    int i,j;
    char k='1';
   for(i=0;i<3;i++) 
      for(j=0;j<3;j++,k++)
        a[i][j]=k;
}

void display()
{
    int i,j;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
        printf("%c ",a[i][j]);
    printf("\n");
   }
}


int game_menu()
{
    
    
     printf("\n(1) to start game : "); 
      printf("\n(2) to exit game : ");
       printf("\nenter your choice : ");
     int choice;
    scanf("%d",&choice);

    return choice;
}

int empty(int move)
{
   switch(move)
   {
    case 1:
      if(a[0][0]!= 'X' && a[0][0]!= 'O')
        return 1;
      else
         return 0;
    case 2:
      if(a[0][1]!= 'X' && a[0][1]!= 'O')
        return 1;
      else
         return 0;
    case 3:
      if(a[0][2]!= 'X' && a[0][2]!= 'O')
        return 1;
      else
         return 0;
    case 4:
      if(a[1][0]!= 'X' && a[1][0]!= 'O')
        return 1;
      else
         return 0;
    case 5:
      if(a[1][1]!= 'X' && a[1][1]!= 'O')
        return 1;
      else
         return 0;
    case 6:
      if(a[1][2]!= 'X' && a[1][2]!= 'O')
        return 1;
      else
         return 0;
    case 7:
      if(a[2][0]!= 'X' && a[2][0]!= 'O')
        return 1;
      else
         return 0;
     case 8:
      if(a[2][1]!= 'X' && a[2][1]!= 'O')
        return 1;
      else
         return 0;
     case 9:
      if(a[2][2]!= 'X' && a[2][2]!= 'O')
        return 1;
      else
         return 0;
   } 
}
int make_move(int player)
{
    printf("player %d :",player);
   
    int move;
    while(1)
    {
      printf("\nchoose colum number :");
     scanf("%d",&move);
    if(move<1&&move>9 )
    {
      printf("\ninvalid choice ");
    }
    else 
    {
       if(empty(move)==0)
         printf("\nalready filled  ");
       else
         break;
    }
    }
    return move;
}

void input_move(int move,int player)
{
    switch(move)
   {
    case 1:
      if(player==1)
        a[0][0]='X';
      else
        a[0][0]='O';
        break;
    case 2:
      if(player==1)
        a[0][1]='X';
      else
        a[0][1]='O';
        break;
    case 3:
      if(player==1)
        a[0][2]='X';
      else
        a[0][2]='O';
        break;
    case 4:
      if(player==1)
        a[1][0]='X';
      else
        a[1][0]='O';
        break;
    case 5:
      if(player==1)
        a[1][1]='X';
      else
        a[1][1]='O';
        break;
    case 6:
      if(player==1)
        a[1][2]='X';
      else
        a[1][2]='O';
        break;
    case 7:
       if(player==1)
        a[2][0]='X';
      else
        a[2][0]='O';
        break;
    case 8:
       if(player==1)
        a[2][1]='X';
      else
        a[2][1]='O';
        break;
    case 9:
        if(player==1)
        a[2][2]='X';
      else
        a[2][2]='O';
   }  
}


int check()
{
  int i,j;
   for(i=0;i<3;i++)
   {
    if((a[i][0] == 'X' && a[i][1] == 'X' && a[i][2] == 'X') ||  (a[i][0] == 'O' && a[i][1] == 'O' && a[i][2] == 'O') )
       {
         display();
         
        if(a[i][0]=='X')
        printf("\nplayer 1 is winner ");
        else
          printf("\nplayer 2 is winner ");
        return 1; 
       }
   }
   for(i=0;i<3;i++)
   {
    if( (a[0][i] == 'X' && a[1][i] == 'X' && a[2][i] == 'X') ||  (a[0][i] == 'O' && a[1][i] == 'O' && a[2][i] == 'O') )
       {
          display();
       
        if(a[0][i]=='X')
        printf("\nplayer 1 is winner ");
        else
          printf("\nplayer 2 is winner ");
           
         return 1;
       }
   }
  
    if((a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') ||  (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O'))
       {
         display();
       
        if(a[0][0]=='X')
        printf("\nplayer 1 is winner ");
        else
          printf("\nplayer 2 is winner ");
            printf("\n");
           

        return 1; 
       }
     if((a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X') || ( a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O' ) )
       {
         display();
         
        if(a[0][2]=='X')
        printf("\nplayer 1 is winner ");
        else
          printf("\nplayer 2 is winner ");
          printf("\n");
           

        return 1;; 
       }

       return 0;
}


int main()
{
    int turn ,player,move;
  while(1)
  {
    switch(game_menu())
   {
      case 1:
      system("cls");
        set();
        for(turn=0,player=1;turn<9;turn++)
        {
          
           display();

             printf("\n");
            move= make_move(player);
          input_move(move,player);
          if(player==1)
            player=2;
          else
            player=1;
         system("cls");
          if(check(move)==1)
          break;
        
        }
        if(turn==9)
        {
           display();
            printf("\n");
          printf("DRAW");
        }
         printf("\n");
        break;
      case 2:
      exit(0);
      default:
       printf("invalid choice : ");
   }
  }
  return 0;
}