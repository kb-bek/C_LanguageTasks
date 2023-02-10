#include <stdio.h>
int factorial(int n){
    if (n==0) return 1;
    return n*factorial(n-1);
}

int main(){
    int num;
    scanf("%d", &num);
    
    int k = factorial(num);
    printf("%d", k);
}
