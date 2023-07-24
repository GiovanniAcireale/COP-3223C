/*
COP3223 Summer 2023 Assignment 3.1
Copyright 2023 Acireale_Giovanni
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Function Prototypes
/*
Create a function called expandArraywhich double the size of the array when the its size reaches the limit
Create a function called printListwhich print out all the names in the array
Create a function called findName, which search if a given name is inside the array. Return the index of that number if it is in the array, return -1 if the number not found in the array.
Create a function called removeNmae, which remove the given name in the array and resize the array.
*/
void expandArray(char** names, int* size);
void printList(char** names, int* size);
int findName(char** names, int* size, char* name);
void removeName(char** names, int* size, char* name);

int main()
{
	int size = 4;
	// create a dynamic array of strings
	char** names = malloc(size * sizeof(char));
	int i = 0;
	char name[10];
	
	// get user input
	printf("please enter a name, type 'done' to quit: ");
	scanf("%s", &name);
	
	// loop until user enters 'done'
	while (strcmp(name, "done") != 0)
	{
		// check if array is full
		if (i == size)
		{
			// expand array
			expandArray(names, &size);
		}
		// add name to array
		names[i] = (char*)malloc(20 * sizeof(char));
		strcpy(names[i], name);
		i++;
		// get user input
		printf("please enter a name, type 'done' to quit: ");
		scanf("%s", &name);
	}
	
	// print array
	printList(names, &i);
	
	// search for a name
	printf("please enter a name to search for: ");
	scanf("%s", &name);
	int index = findName(names, &size, name);
	if (index == -1)
	{
		printf("Name not found\n");
	}
	else
	{
		printf("Name found at index %d\n", index);
	}
	
	// remove a name
	printf("please enter a name to remove: ");
	scanf("%s", &name);
	removeName(names, &size, name);
	
	// print array
	printList(names, &i);
	
	// free memory
	for (i = 0; i < size; i++)
	{
		free(names[i]);
	}
	free(names);
	
	return 0;
	
}

// Function Definitions
void expandArray(char** names, int* size)
{
	// expand array
	*size = *size * 2;
}

void printList(char** names, int* i)
{
	// Declare variables
	int j;
	for (j = 0; j < *i; j++)
	{
		printf("%s\n", names[j]);
	}
}

int findName(char** names, int* size, char* name)
{
	// Declare variables
	int i;
	for (i = 0; i < *size; i++)
	{
		if (strcmp(names[i], name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void removeName(char** names, int* size, char* name)
{
	// Declare variables
	int i;
	int index = findName(*names, *size, name);
	if (index != -1) {
		free((*names)[index]);
		for (i = index; i < *size - 1; i++) {
			(*names)[i] = (*names)[i + 1];
		}
		(*size)--;
	}
	
}

