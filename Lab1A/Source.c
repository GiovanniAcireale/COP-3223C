#include <stdio.h>

/*
COP3223 Summer 2023 Lab1A
Copyright 2023 Acireale_Giovanni
*/

void main(void) {

	//Question 1
	//a
	int number = 0;
	//b
	int a;
	printf("Please input a number: ");
	//c
	scanf_s("%d", &a);
	//d
	if (a != 7) {
		printf("\nThis number is not equal to 7\n");
	}
	//e
	printf("This is a C program\n");
	//f
	printf("This is a C \nprogram\n");
	//g
	printf("This\nis\na\nC\nprogram\n");
	//h
	printf("This\t is\t a\t C\t program\n");

	//Question 2 & Question 3
	//a
	printf("This program will take three numbers a return the product.\n");
	//c, d, e
	int x, y, z = 0;
	//b
	printf("Please input the first number: ");
	//f
	scanf_s("%d", &x);
	printf("Please input the second number: ");
	scanf_s("%d", &y);
	printf("Please input the third number: ");
	scanf_s("%d", &z);
	//g
	int result = x * y * z;
	//h
	printf("The product is %d", result);

	//Question 4
	/*
	a) printf("The value is %d\n", number);
	b) scanf("%d%d", &number1, &number2);
	c) if (c < y) {
		   puts("C is less than 7");
		   }
	d) if (c >= 7) {
		   puts("C is greater than or equal to 7");
	*/
}