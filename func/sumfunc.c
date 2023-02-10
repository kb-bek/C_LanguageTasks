#include <stdio.h>

int sum(int num){
    int i, sum=0;
    for (i=0; i<=num; i++){
        sum+=i;
    }    
    
    return sum;
}

int main(){
    int n;
    printf("Enter a number > ");
    scanf("%d", &n);
    
    printf("%d", sum(n));
    
    return 0;
}
