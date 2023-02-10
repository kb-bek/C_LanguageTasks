#include <stdio.h>


int calc(double a, double b, char action){
    if (b == 0){
        printf("division by 0 is not possible");
        
    }
    else{
    switch (action) {
    case '+':
      return (a+b);
      break;
    case '-':
      return (a-b);
      break;
    case '*':
      return (a*b);
      break;
    case '/':
      return (a/b);
      break;

    default:
      printf("Error! operator is not correct");
    }

    }
}

int main(){
    double a, b, res;
    char action;
    
    printf("action > ");
    scanf("%c", &action);    
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    
    
    res = calc(a, b, action);
    printf("%lf", res);
    
}
