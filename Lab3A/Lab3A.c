/*
COP3223 Summer 2023 Lab3A
Copyright 2023 Acireale_Giovanni
*/
#include <stdio.h>
#include <math.h>

/*
Write a statement or a set of statements to accomplish each of the following tasks:
a) Sum the odd integers between 1 and 99 using a for statement. Use the integer variables sum and count.

for (count = 1; count <= 99; count += 2) {sum += count;}

b) Print the value 333.546372 in a field width of 15 characters with precisions of 1, 2, 3, 4 and 5. 
	Left-align the output. What are the five values that print?

333.5
333.55
333.546
333.5464
333.54637

c) Calculate the value of 2.5 raised to the power of 3 using the pow function. Print the result with 
	a precision of 2 in a field width of 10 positions. What is the value that prints?

     15.62

d) Print the integers from 1 to 20 using a while loop and the counter variable x. 
	Print only five integers per line. [Hint: Use the calculation x % 5. When this is 0, 
	print a newline character, otherwise print a tab character.]

int x=1;

while (x <= 20) {
	printf("%d", x);
	if (x % 5 == 0) {
		printf("\n");
		x++;
	}
	else {
		printf("\t");
		x++;
	}
}

e) Repeat Exercise 4.3(d) using a for statement

for (int x = 1; x <= 20; x++) {
	printf("%d", x);
	if (x % 5 == 0) {
		printf("\n");
	}
	else {
		printf("\t");
	}
}

*/

void main(void) {
	/*
	//a)
	int sum = 0;
	int count;

	for (count = 1; count <= 99; count += 2) {
		sum += count;
	}

	printf("The sum of every odd number between 1 and 99 is %d", sum);

	//b)
	printf("%-15.1f\n", 333.546372);
	printf("%-15.2f\n", 333.546372);
	printf("%-15.3f\n", 333.546372);
	printf("%-15.4f\n", 333.546372);
	printf("%-15.5f\n", 333.546372);

	//c)
	float value = pow(2.5, 3);
	printf("%10.2f", value);

	//d)
	int x=1;

	while (x <= 20) {
		printf("%d", x);
		if (x % 5 == 0) {
			printf("\n");
			x++;
		}
		else {
			printf("\t");
			x++;
		}
	}
	*/
	for (int x = 1; x <= 20; x++) {
		printf("%d", x);
		if (x % 5 == 0) {
			printf("\n");
		}
		else {
			printf("\t");
		}
	}
}