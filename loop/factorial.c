#include <stdio.h>

int main() {
	
	int n, i, f = 1;
	printf("enter a number > ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++){
		f *= i;
		
	
	}
    
    printf("The factorial of numbers 1 to %d is %d", n, f);
    
	return 0;

}
