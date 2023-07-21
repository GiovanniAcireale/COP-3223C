/*
COP3223 Summer 2023 Lab8B
Copyright 2023 Acireale_Giovanni
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/*
Please write a program which do following:

1) Allow user keep entering numbers until user enter -1, which indicates user entered all numbers

2) Store the numbers in a dynamic array.

3) Initialize the dynamic array size to 4

4) Display all the elements

5) Ask user to enter a number and search if that number is in the array.

6) Create a function called expandSize which double the size of the array when the its size reaches the limit

7) Create a function called displayArray which print out all the elements in the array

8) Create a function called search, which search is a given number is inside the array. Return the index of that number if it is in the array, return -1 if the number not found in the array.

9) All functions include at least one parameter which receive the dynamic array by reference
*/

void expandSize(int** arr, int* size);   //declare the expandSize function
void displayArray(int* arr, int size);   //declare the displayArray function
int search(int* arr, int size, int num);   //declare the search function

void expandSize(int** arr, int* size) {   //expandSize function
	int* temp = (int*)malloc((*size) * 2 * sizeof(int));   //declare the temp array
	int i = 0;    //local variable
	for (i = 0; i < *size; i++) {   //for loop
		temp[i] = (*arr)[i];    //copy the array
	}
	free(*arr);    //free the array
	*arr = temp;   //assign the temp array to the array
	*size = (*size) * 2;   //double the size
}

void displayArray(int* arr, int size) {   //displayArray function
	int i = 0;    //local variable
	for (i = 0; i < size; i++) {   //for loop
		printf("\nelement %d = %d", i, arr[i]);   //print the array
	}
}

int search(int* arr, int size, int num) {   //search function
	int i = 0;    //local variable
	for (i = 0; i < size; i++) {   //for loop
		if (arr[i] == num) {   //check for the number
			return i;   //return the index
		}
	}
	return -1;   //return -1 if number not found
}

int main() {       //main method

    int s = 4, i = 0, num = 0, flag = 0;   //local variable
    int* arr;                   //dynamic array

    arr = (int*)malloc(s * sizeof(int));   //declare the array


	while (1) {   //while loop
		printf("please enter a number, enter -1 to stop: ");
		scanf("%d", &num);   //get the number
		if (num == -1) {   //check for -1
			break;   //break the loop
		}
		if (i == s) {   //check for the size
			expandSize(&arr, &s);   //call the expandSize function
		}
		arr[i] = num;   //assign the number to the array
		i++;   //increment the i
	}

	displayArray(arr, i);   //call the displayArray function

	printf("\nWhat number you want to check: ");
	scanf("%d", &num);   //get the number to be searched

	int index = search(arr, i, num);   //call the search function

	if (index == -1) {   //check for the index
		printf("Number not found");
	}
	else {
		printf("Find number %d in array[%d]", num, index);   //print the index
	}

	free(arr);   //free the array
	return 0;
}