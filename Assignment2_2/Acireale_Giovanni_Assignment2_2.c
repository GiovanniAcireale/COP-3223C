/*
COP3223 Summer 2023 Assignment 2.2
Copyright 2023 Acireale_Giovanni
*/

#include <stdio.h>

/*
The greatest common divisor of integers x and y is the largest integer 
that evenly divides both x and y. Write a recursive function gcd that 
returns the greatest common divisor of x and y. The greatest common divisor 
of x and y is defined recursively as follows: If y is equal to 0, 
then gcd(x, y) is x; otherwise gcd(x, y) is gcd(y, x % y), where % is the remainder operator.

Please input the first number: 3
Please input the second number: 15
the commom divisor for 3 and 15 is 3
*/

void main(void) {

	int x, y, z;

	// user input for two numbers
	printf("Please input the first number: ");
	scanf("%d", &x);
	printf("Please input the second number: ");
	scanf("%d", &y);

	// uses the gcd class
	z = gcd(x, y);

	// final print
	printf("the commom divisor for %d and %d is %d", x, y, z);

}

// class that finds the greatest common denominator
int gcd(int a, int b) {

	int c;

	//finds the remainder of the two numbers
	c = a % b;

	if (c != 0)

		// repeats class except using b and the remainder if the remainder is not 0
		gcd(b, c);

	else

		return (b);
}

