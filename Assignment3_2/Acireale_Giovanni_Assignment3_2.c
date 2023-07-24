/*
COP3223 Summer 2023 Assignment 3.2
Copyright 2023 Acireale_Giovanni
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create a program that record following students' info, and let a user locate all records that match the search string. The search can be by first name, last name or ID
// The program should be able to handle up to 6 records

// Create a struct to store student info
/*
	char student[6][4][20] = {
		{"John", "Johnson", "895645", "A"},
		{"Jake", "Michaelson", "236598", "A"},
		{"Sally", "Weber", "225584", "C"},
		{"Tou", "Xiong", "364875", "B"},
		{"Jacquelyn", "Jackson", "984587", "D"},
		{"John", "White", "560258", "C"}
	};
*/
struct studentInfo {
	char firstName[20];
	char lastName[20];
	int id;
	char grade[2];
};

// Create a function to print the student info
void printStudentInfo(struct studentInfo student) {
	printf("\nFirst Name: %s\n", student.firstName);
	printf("Last Name: %s\n", student.lastName);
	printf("ID: %d\n", student.id);
	printf("Grade: %s\n", student.grade);
}

// create a function to search for a student by first name
void searchByFirstName(struct studentInfo student[], int size, char search[]) {
	int i;
	for (i = 0; i < size; i++) {
		if (strcmp(student[i].firstName, search) == 0) {
			printStudentInfo(student[i]);
		}
	}
}

// create a function to search for a student by last name
void searchByLastName(struct studentInfo student[], int size, char search[]) {
	int i;
	for (i = 0; i < size; i++) {
		if (strcmp(student[i].lastName, search) == 0) {
			printStudentInfo(student[i]);
		}
	}
}

// create a function to search for a student by ID
void searchByID(struct studentInfo student[], int size, int search) {
	int i;
	for (i = 0; i < size; i++) {
		if (student[i].id == search) {
			printStudentInfo(student[i]);
		}
	}
}

// main function
int main() {
	/*
	char student[6][4][20] = {
		{"John", "Johnson", "895645", "A"},
		{"Jake", "Michaelson", "236598", "A"},
		{"Sally", "Weber", "225584", "C"},
		{"Tou", "Xiong", "364875", "B"},
		{"Jacquelyn", "Jackson", "984587", "D"},
		{"John", "White", "560258", "C"}
	};
	*/

	// Create an array of structs
	struct studentInfo student[6];

	// Initialize the array of structs
	strcpy(student[0].firstName, "John");
	strcpy(student[0].lastName, "Johnson");
	student[0].id = 895645;
	strcpy(student[0].grade, "A");

	strcpy(student[1].firstName, "Jake");
	strcpy(student[1].lastName, "Michaelson");
	student[1].id = 236598;
	strcpy(student[1].grade, "A");

	strcpy(student[2].firstName, "Sally");
	strcpy(student[2].lastName, "Weber");
	student[2].id = 225584;
	strcpy(student[2].grade, "C");

	strcpy(student[3].firstName, "Tou");
	strcpy(student[3].lastName, "Xiong");
	student[3].id = 364875;
	strcpy(student[3].grade, "B");

	strcpy(student[4].firstName, "Jacquelyn");
	strcpy(student[4].lastName, "Jackson");
	student[4].id = 984587;
	strcpy(student[4].grade, "D");

	strcpy(student[5].firstName, "John");
	strcpy(student[5].lastName, "White");
	student[5].id = 560258;
	strcpy(student[5].grade, "C");

	// Create a variable to store the user's choice
	int choice;

	// Create a variable to store the user's search string
	char search[20];

	// Create a variable to store the user's search ID
	int searchID;

	// Create a variable to store the size of the array
	int size = 6;

	// Create a variable to store the user's choice to continue
	char cont;

	// Create a do while loop to allow the user to continue searching
	do {
		// Ask the user what they would like to search by
		printf("What would you like to search by?\n");
		printf("1. First Name\n");
		printf("2. Last Name\n");
		printf("3. ID\n");
		scanf("%d", &choice);

		// Create a switch statement to handle the user's choice
		switch (choice) {
			case 1:
				// Ask the user what first name they would like to search for
				printf("What first name would you like to search for?\n");
				scanf("%s", search);

				// Call the searchByFirstName function
				searchByFirstName(student, size, search);
				break;
			case 2:
				// Ask the user what last name they would like to search for
				printf("What last name would you like to search for?\n");
				scanf("%s", search);

				// Call the searchByLastName function
				searchByLastName(student, size, search);
				break;
			case 3:
				// Ask the user what ID they would like to search for
				printf("What ID would you like to search for?\n");
				scanf("%d", &searchID);

				// Call the searchByID function
				searchByID(student, size, searchID);
				break;
			default:
				printf("Invalid choice\n");
		}

		// Ask the user if they would like to continue
		printf("Would you like to continue? (y/n)\n");
		scanf(" %c", &cont);
	} while (cont == 'y');

	return 0;
}