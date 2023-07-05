/*
COP3223 Summer 2023 Lab6A
Copyright 2023 Acireale_Giovanni
*/
#include <stdio.h>

/*
Question 1: Write statements to accomplish each of the following:
a) Display the value of the seventh element of character array f.

printf("%c", f[6]);

b) Input a value into element 4 of one-dimensional floating-point array b.

scanf("%f", &b[4]);

c) Initialize each of the five elements of one-dimensional integer array g to 8.

for(int i = 0; i <= 4; i++)

g[i] = 8;

d) Total the elements of floating-point 100-element array c.

for(int i = 0; i <= 10; i++)

sum += c[i];

e) Copy array a into the first portion of array b. Assume a has 11 elements, 
	b has 34 elements, and both arrays have the same element type.

for(int i = 0; i <= 10; i++)

b[i] = a[i];

f) Determine and print the smallest and largest values contained in 
	99-element floating-point array w.

int main(){
	int i;
	float smallest, largest;
	smallest = w[0];
	largest = w[0];

	for (i = 1; i < 99; i++){
		if (w[i] < smallest)
			smallest = w[i];

		else if (w[i] > largest)
			largest = w[i];
	}
	printf ("%d is the smallest number.\n", smallest);
	printf(" %d is the largest number.\n", largest);
}


Question2 : Consider a 2-by-5 integer array t.
a) Write a definition for t.

int t[1][4];

b) How many rows does t have?

2

c) How many columns does t have?

5

d) How many elements does t have?

10

e) Write the names of all the elements in the second row of t.

t[1][0] , t[1][1] , t[1][2] , t[1][3] , t[1][4]

f) Write the names of all the elements in the third column of t.

t[0][2], and t[1][2]

g) Write a single statement that sets the element of t in row 1 and column 2 to 0.

t[0][1] = 0;

h) Write a series of statements that initialize each element of t to zero. 
	Do not use an iteration statement.

t[0][0] = 0; t[0][1] = 0; t[0][2] = 0; t[0][3] = 0; t[0][4] = 0;
t[1][0] = 0; t[1][1] = 0; t[1][2] = 0; t[1][3] = 0; t[1][4] = 0;

i) Write a nested for statement that initializes each element of t to zero.

for (int i = 0; i < 2; i++)
	for (int j = 0) t[i][j] = 0;

j) Write a statement that inputs the values for the elements of t from the terminal.

int input;
for (int i = 0; i < 2; i++)
	for (int j = 0) {
		printf("input row %d and column %d", i, j);
		scanf(%d,&input);
	}

k) Write a series of statements that determine and print the smallest value in array t.

int lowest = t[0][0];
for (int i = 0; i < 2; i++)
	for (int j = 0; j < 5; j++)
		if( lowest > t[i][j])lowest = t[i][j];
			printf("The lowest is %d", lowest);

l) Write a statement that displays the elements of the first row of t.

for (int j = 0; j < 5; j++)
	printf("row %d and column %d is %d", i,j, t[0][j]);

m)Write a statement that totals the elements of the fourth column of t.

printf("column 4 total is %d ", ( t[0][3]+t[1][3]));

n) Write a series of statements that print the array t in tabular format. 
	List the column subscripts as headings across the top and list the row subscripts at the left of each row

for (int i = 0; i < 2; i++) {
	for (int j = 0; j < 5; j++) {
		printf("[%d][%d] = %d \t", i, j, t[i][j]);
		}
	printf("\n");
}

*/

void main(void) {

}