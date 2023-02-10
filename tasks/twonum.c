#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter 1-num > ");
    scanf("%d", &num1);
    
    printf("Enter 2-num > ");
    scanf("%d", &num2);
    
    if (num1 > num2){
    	printf("%d greater than %d", num1, num2);
    }
    else {
    	printf("%d greater than %d", num2, num1);
    }
    

    return 0;
}
