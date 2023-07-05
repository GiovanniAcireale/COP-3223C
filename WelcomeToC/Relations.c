#include <stdio.h>

void main(void) {
	int num1 = 0;
	int num2 = 0;
	printf("Enter a number: ");
	scanf_s("%d", &num1);
	printf("Enter a second number: ");
	scanf_s("%d", &num2);

	if (num1 > num2)
	{
		printf("%d is the larger number.", num1);
	}
	else if (num1 = num2) {
		printf("The numbers are the same.");
	}
	else
	{
		printf("%d is the larger number.", num2);
	}
}