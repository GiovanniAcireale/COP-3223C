/*
COP3223 Summer 2023 Lab5B
Copyright 2023 Acireale_Giovanni
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
Use a one-dimensional array to solve the following problem. 
Read 20 numbers, each of which is between 10 and 100, inclusive. 
As each number is read, print it only if it’s not a duplicate 
of a number already read. Provide for the “worst case” in which 
all 20 numbers are different.
*/

void main(void) {
	//one-dimensional array
	int array[20];

	//index of array
	int index = 0;

	//counters
	int i, j;

	//input
	int input;

	//duplicates
	int duplicate;

	//user instructions
	printf("This program will read 20 numbers, each of which between 10 and 100.\nThen it will print every number that isn't a duplicate of a previous number.\n");
	printf("Your inputs will be stored in slots, please press enter to move to the next slot.\n");

	//for loop taking the input for each slot in the array
	for (i = 0; i < 20; i++) {

		duplicate = 0;

		//user input
		printf("Enter the number for slot %d: ", i + 1);
		scanf_s("%d", &input);

		//check for valid input
		if (input < 10 || input > 100) {
			printf("Invalid input! Must be a number between 10 and 100.\n");
			i--;
		}
		else {
			//check for duplicates
			for (j = 0; j < index; j++) {
				if (input == array[j]) {
					printf("Duplicate number.\n");
					duplicate = 1;
					break;
				}
			}
			//add input to array
			if (duplicate == 0) {
				array[index++] = input;
			}
		}
	}

	//final output
	printf("The unique numbers that were entered are\n");

	//for loop listing contents of array
	for (i = 0; i < index; i++) {
		printf("%d ", array[i]);
	}

	return 0;

}