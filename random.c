#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
 /*   // Your code here

    srand(time (0));

    int number1=(rand()%6)+1;
    int number2=(rand()%6)+1;
    int number3=(rand()%6)+1;
    int number4=(rand()%6)+1;
    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);
    printf("%d\n", number4);
   */

  const int MIN=1;
  const int MAX=100;
  int guess;
  int guesses = 0;
  int answer;

  srand(time (0));

  answer = (rand() % MAX)+ MIN;

  do
  {
    printf("Type number to guess: ");
    scanf("%d",&guess);

    if (guess > answer)
    {
        /* code */
        printf("too high \n");
    }
    else if (guess < answer){
        printf("too low \n");
    }
    else {
        printf("correct \n");
    }
    
    guesses++;

  } while (guess != answer);
  
  printf("***********************\n");
  printf("amswer %d\n", answer);
  printf("guesses %d\n", guesses);
  printf("***********************\n");
  

    return 0;
}