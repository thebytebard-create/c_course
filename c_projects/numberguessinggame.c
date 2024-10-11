#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i,un,rn;
    srand(time(0));
  for(i=0;i<3;i++)
   {
     rn=rand()%100;
    printf("GUESS THE NUMBER ");
   
    scanf("%d",&un);
    if(un==rn)
     printf("correct\n");
    else
      printf("wrong\nthe correct answer was %d \ntry next chance\n",rn);
    
   }

   printf("GAME OVER");
   return 0;

}