/*
COP3223 Summer 2023 Lab5A
Copyright 2023 Acireale_Giovanni
*/
#include <stdio.h>

/*
Question 1:

Follow the instructions below regarding an array called fractions.
a) Define a symbolic constant SIZE with the replacement text 10.

#define SIZE 10

b) Define a double array with SIZE elements and initialize the elements to 0.

double values[SIZE] = {0}

c) Refer to array element 4.

values[3]

d) Assign the value 1.667 to array element nine.

values[8]=(double)1.667;

e) Assign the value 3.333 to the seventh element of the array.

values[6]=(double)3.333;

f) Print array elements 6 and 9 with two digits of precision to the right of the decimal point, and show the output that’s displayed on the screen.

printf(“%0.2f”,values[5]);
printf(“%0.2f”,values[8]);

g) Print all the elements of an array using a for iteration statement. Use the variable x as the loop’s control variable. Show the output.

for (x = 0; x < SIZE; x++) {
    printf("%f\n", values[x]);
}

Question 2:

Write statements to accomplish the following:
a) Define table to be an integer array and to have 3 rows and 3 columns. Assume the symbolic constant SIZE has been defined to be 3.

int table[SIZE][SIZE];

b) How many elements does the array table contain? Print the total number of elements.

printf("%d",SIZE*SIZE);

c) Use a for iteration statement to initialize each element of table to the sum of its subscripts. Use variables x and y as control variables.

for(int s = 0;s<SIZE;s++){
   for(int b=0;b<SIZE;b++){
       table[s][b]=s+b;
   }
}

d) Print the values of each element of array table. Assume the array was initialized with the definition:
int table[SIZE][SIZE] = {{1, 8}, {2, 4, 6}, {5}};

for(int s = 0;s<SIZE;s++){
   for(int b=0;b<SIZE;b++){
       printf("%d",table[s][b]);
   }
}

Question 3:

Find the error in each of the following program segments and correct the error.
a) #define SIZE 100;

#define SIZE 100

b) SIZE = 10;

int SIZE = 10;

c) int b[10] = {0};
   int i;
   for (size_t i = 0; i <= 10; ++i) {
      b[i] = 1;
   }

int b[10] = {0};
for (int i = 0; i < 10; i++) {
    b[i] = 1;
}

d) #include <stdio.h>;

#include <stdio.h>

e) int a[2][2] = {{1, 2}, {3, 4}};
   a[1, 1] = 5;

int a[2][2] = {{1, 2}, {3, 4}};
    a[1][1] = 5;

f) #define VALUE = 120

#define VALUE 120

*/

void main(void) {

}