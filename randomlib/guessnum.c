#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

  int n, guess, i;
  int action = 1;

  srand(time(NULL));


  while (action==1){
    n = rand()%101;
    for (i=0; i<10; i++){
      printf("%d-attempt\nEnter a number> ", i+1);
      scanf("%d", &guess);
      if (guess > n){
        printf("more\n");
        if (i==9){
          printf("you couldn't guess\n");
          break;
        }
      }
      else if (guess < n){
        printf("less\n");
        if (i==9){
          printf("you couldn't guess\n");
          break;
        }
      }
      else{
        printf("you could gues\n");
        break;
      }

    }

    printf("Enter 1 to continue the game\n enter 0 to end the game > ");
    scanf("%d", &action);

  }




  return 0;
}
