#include <stdio.h>
#include <string.h>

/*    struct player 
    {
        char name [12];
        int score;
        

    };
    

int main (){

       struct player player1;
       struct player player2;
       
       strcpy(player1.name, "bro");
       player1.score=4;

       strcpy(player2.name, "code");
       player2.score=7;

       printf("Player %s \n", player1.name);
       printf("score %d \n",player1.score);

        printf("player %s \n", player2.name);
       printf("score %d \n",player2.score);
    return 0;

}*/ 


/*
  typedef  struct 
    {
        char name [12];
        int score;
        

    } player;
    

int main (){

       player player1;
       player player2;
       
       strcpy(player1.name, "bro");
       player1.score=4;

       strcpy(player2.name, "code");
       player2.score=7;

       printf("Player %s \n", player1.name);
       printf("score %d \n",player1.score);

        printf("player %s \n", player2.name);
       printf("score %d \n",player2.score);
    return 0;

}

*/

#include <stdio.h>
#include <string.h>

    struct player 
    {
        char name [12];
        int score;
        

    };
    

int main (){

       struct player player1={"bro",4};
       struct player player2={"code",5};
       
      /* strcpy(player1.name, "bro");
       player1.score=4;

       strcpy(player2.name, "code");
       player2.score=7;
       */
       printf("Player %s \n", player1.name);
       printf("score %d \n",player1.score);

        printf("player %s \n", player2.name);
       printf("score %d \n",player2.score);
    return 0;

}