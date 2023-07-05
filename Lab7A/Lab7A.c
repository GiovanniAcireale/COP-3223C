/*
COP3223 Summer 2023 Lab7A
Copyright 2023 Acireale_Giovanni
*/
#include <stdio.h>

/*
Question 1:

Answer each of the following. Assume that single-precision floating-point numbers are stored in four bytes, 
and that the array’s starting address is location 1002500 in memory. Each part of the exercise should use 
the results of previous parts where appropriate.

a) Define a float array called numbers with 10 elements, and initialize the elements to the values 
	0.0, 1.1, 2.2, …, 9.9. Assume the symbolic constant SIZE has been defined as 10.

numbers[0]=0.0;
numbers[1]=1.1;
numbers[2]=2.2;
numbers[3]=3.3;
numbers[4]=4.4;
numbers[5]=5.5;
numbers[6]=6.6;
numbers[7]=7.7;
numbers[8]=8.8;
numbers[9]=9.9;

b) Define a pointer, nPtr, that points to a float.

float *nPtr;

c) Use a for statement and array subscript notation to print array numbers’ elements. Use one digit of precision to the right of the decimal point.

for(int i=0;i<SIZE;i++)
{
	printf("%.1f",numbers[i]);
}

d) Give two separate statements that assign the starting address of array numbers to the pointer variable nPtr.

nPtr=&numbers[0];

e) Print numbers’ elements using pointer/offset notation with the pointer nPtr.

for(int i=0;i<SIZE;i++)
{
	printf("%.1f",*(nPtr+i));
}

f) Print numbers’ elements using pointer/offset notation with the array name as the pointer.

for(int i=0;i<SIZE;i++)
{
	printf("%.1f",*(numbers+i));
}

g) Print numbers’ elements by subscripting pointer nPtr.

for(int i=0;i<SIZE;i++)
{
	printf("%.1f",nPtr[i]);
}

h) Refer to element 4 of numbers using array subscript notation, pointer/offset notation with the array name as the pointer, 
	pointer subscript notation with nPtr and pointer/offset notation with nPtr.

printf("4th Element with Arrray subscript notation : %.1f \n",numbers[3]);
printf("4th Element with pointer notation where array name as the pointer : %.1f \n",*(numbers+3));
printf("4th Element with pointer subscript notation : %.1f \n",nPtr[3]);
printf("4th Element with pointer notation with nPtr : %.1f \n",*(nPtr + 3));

i) Assuming that nPtr points to the beginning of array numbers, what address is referenced by nPtr + 8? What value is stored at that location?

printf("\nAddress is referenced by nPtr+8 is : %d \n",nPtr+8);

nPtr = &numbers[5];
nPtr-=4;

j) Assuming that nPtr points to numbers[5], what address is referenced by nPtr –= 4? What’s the value stored at that location?

printf("\nAddress is referenced by nPtr -= 4 is : %d \n", nPtr-4);


Question 2:

For each of the following, write a statement that performs the specified task. Assume that float variables 
number1 and number2 are defined and that number1 is initialized to 7.3.

a) Define the variable fPtr to be a pointer to an object of type float.

float *fPtr;

b) Assign the address of variable number1 to pointer variable fPtr.

fPtr = &number1;

c) Print the value of the object pointed to by fPtr.

printf("Value of the object pointed by fPtr is : %.1f \n",*fPtr);

d) Assign the value of the object pointed to by fPtr to variable number2.

number2 = *fPtr;

e) Print the value of number2.

printf("Value of number2 is : %.1f \n",number2);

f) Print the address of number1. Use the %p conversion specification.

printf("Address of number1 is : %p \n",&number1);

g) Print the address stored in fPtr. Use the %p conversion specifier. Is the value printed the same as the address of number1?

printf("Address stored in fPtr is : %p \n",fPtr);

*/

void main(void) {

}