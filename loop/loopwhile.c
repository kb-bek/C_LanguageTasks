#include <stdio.h>

int main (){

    int n, last_n;
    printf ("Enter a number > ");
    scanf ("%d", &n);

    last_n = n % 10;

    while (n / 10 != 0){
        n = n / 10;
    }

    printf("first number-%d\n", n);
    printf("last number-%d", last_n);


  return 0;

}
