/*
COP3223 Summer 2023 Lab4A
Copyright 2023 Acireale_Giovanni
*/
#include <stdio.h>

/*
Question 1: Give the function header for each of the following 
	functions:

a) Function hypotenuse that takes two double arguments, 
	side1 and side2, and returns a double result.

	double hypotenuse (double side1, double side2);

b) Function smallest that takes three integers, x, y, z, 
	and returns an integer.

	int smallest (int x, int y, int z);

c) Function instructions that does not receive any 
	arguments and does not return a value.

	void instructions (void);

d) Function intToFloat that takes an integer argument, 
	number, and returns a float.

	float intToFloat (int number);

Question 2:  Give the function prototype for each of the 
	following:

a) The function described in question 1(a).

	double hypotenuse (double side1, double side2)
	{
		double result;
		result = sqrt(pow(side1, 2) + pow(side2, 2));

		return result;
	}

b) The function described in question 1(b).

	int smallest (int x, int y, int z)
	{
		int result;

		if (x < y && x < z)
		{
			result = x;
			return result;
		}
		else if (y < x && y < z)
		{
			result = y;
			return result;
		}
		else
		{
			result = z;
			return result;
		}
	}

c) The function described in question 1(c).

	void instructions (void) {}

d) The function described in question 1(d).

	float intToFloat (int number)
	{
		float result;
		result = number;
		return result;
	}

Question 3 Write a declaration for floating-point variable 
	lastValue that’s to retain its value between calls to the 
	function in which it’s defined.

	static float lastValue;

Question 4 Find the error in each of the following program 
	segments and correct them:

a)
	int g(void)
	{
		printf("%s", "Inside function g\n");
	}
	int h(void)
	{
		printf("%s", "Inside function h\n");
	}


b)
	int sum (int x, int y)
	{
		int result;
		result = x + y;
		return result;
	}

c)
	void f (float a)
	{
		printf("%f", a);
	}

d)
	int sum (int n)
	{
		if (n == 0)
		{
			return 0;
		}
		else
		{
			n += sum(n - 1);
			return n;
		}
	}

e)
	void product(void)
	{
		int a, b, c;

		printf("%s", "Enter three integers: ");

		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);

		int result = a * b * c;

		printf("Result is %d", result);
	}
*/

void main(void) {

}