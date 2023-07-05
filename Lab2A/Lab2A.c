/*
COP3223 Summer 2023 Lab2A
Copyright 2023 Acireale_Giovanni
*/

/*
Question 1:

Write a single C statement to accomplish each of the following:
a) Multiply the variable product by 2 using the *= operator.
// product *= 2;

b) Multiply the variable product by 2 using the = and * operators.
// product = product * 2

c) Test whether the value of the variable count is greater than 10.
	If it is, print "Count is greater than 10".
// if (count > 10) { printf("Count is greater than 10"); }

d) Calculate the remainder after quotient is divided by divisor and
	assign the result to quotient. Write this statement two different ways.
// quotient %= devisor;
// quotient = quotient % devisor;

e) Print the value 123.4567 with two digits of precision. What value is printed?
// 123.46

f) Print the floating-point value 3.14159 with three digits to the right of the
	decimal point. What value is printed
// 3.142

Question 2:

Write a C statement to accomplish each of the following tasks.
a) Define variable x to be of type int and set it to 1.
// int x = 1;

b) Define variable sum to be of type int and set it to 0.
// int sum = 0;

c) Add variable x to variable sum and assign the result to variable sum.
// sum = x + sum;

d) Print "The sum is: " followed by the value of variable sum.
// printf("The sum is: %d", sum);

Question 3:

Combine the statements from question 2 into a program that calculates the sum
	of the integers from 1 to 10. Use the while statement to loop through the
	calculation and increment statements. The loop should terminate when x becomes 11.

#include <stdio.h>

void main(void) {

	int x = 1;
	int sum = 0;

	while (sum < 11) {
		sum += x;
		printf("The sum is: %d\n", sum);
	}
}

Question 4:

Write single C statements to perform each of the following tasks:
a) Input integer variable x with scanf. Use the conversion specification %d.
// scanf("%d", x);

b) Input integer variable y with scanf. Use the conversion specification %d.
// scanf("%d", y);

c) Set integer variable i to 1.
// int i = 1;

d) Set integer variable power to 1.
// int power = 1;

e) Multiply integer variable power by x and assign the result to power.
// power *= x;

f) Increment variable i by 1.
// i++;

g) Test i to see if it’s less than or equal to y in the condition of a while statement.
// while (i <= y) {}

h) Output integer variable power with printf.
// printf("%d", power);

Question 5:

Write a C program that uses the statements in the question 4 to calculate x raised to
	the y power. The program should have a while iteration control statement.

#include <stdio.h>

void main(void) {

	int x;
	int y;
	int i = 1;
	int power = 1;

	printf("Enter a number: ");
	scanf("%d", &x);
	printf("Enter the power you'd like to raise %d by: ", x);
	scanf("%d", &y);

	while (i <= y) {
		power *= x;
		i++;
	}

	printf("%d\n", power);

}
*/

