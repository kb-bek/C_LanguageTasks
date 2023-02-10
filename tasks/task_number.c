#include <stdio.h>

int main()
{	
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	
	if (num > 100)
		printf("%d greater than 100\n", num);
	
	else if (num == 100)
		printf("%d number is 100\n", num);
	
	else
		printf("%d less than 100", num);

	return 0;

}

