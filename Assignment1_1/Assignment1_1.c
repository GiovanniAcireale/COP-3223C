/*
COP3223 Summer 2023 Assignment 1.1
Copyright 2023 Acireale_Giovanni
*/
#include <stdio.h>
#include <math.h>

/*
Develop a program that will determine the gross pay for each of several employees. 
The company pays “straight time” for the first 40 hours worked by each employee 
and pays “time-and-a-half” for all hours worked in excess of 40 hours. You’re given 
a list of the company’s employees, the number of hours each worked last week and 
each employee’s hourly rate. Your program should use scanf to input this information 
for each employee and determine and display the employee’s gross pay. 
Here is a sample input/output dialog:

Enter # of hours worked (-1 to end): 39
Enter hourly rate of the worker ($00.00): 10.00
Salary is $390.00


Enter # of hours worked (-1 to end): 40
Enter hourly rate of the worker ($00.00): 10.00
Salary is $400.00


Enter # of hours worked (-1 to end): 41
Enter hourly rate of the worker ($00.00): 10.00
Salary is $415.00


Enter # of hours worked (-1 to end): -1
*/

void main(void) {
	//initialize the variables
	int hoursWorked = 0;
	float hourlyRate = 0;
	float salary = 0;
	int overtime = 0;

	//starts the while loop based on the initialized value
	while (hoursWorked != -1) {
		//inputs hours worked
		printf("Enter the number of hours worked (-1 to end): ");
		scanf_s("%d", &hoursWorked);

		//checks for exit input or improper inputs
		if (hoursWorked < -1) {
			printf("Employee cannot work negative hours...\n\n");
			break;
		}
		else if (hoursWorked == -1) {
			printf("\n\n");
			break;
		}
		else {
			printf("Enter hourly rate of the worker ($00.00): ");
		}
		//input for hourly rate
		scanf_s("%f.2", &hourlyRate);

		//determines whether overtime should be calculated
		if (0 <= hoursWorked <= 40) {
			//math for no overtime
			salary = hoursWorked * hourlyRate;
			printf("Salary is $%.2f\n\n\n", salary);
		}
		else if (hoursWorked > 40) {
			//math including overtime
			overtime = hoursWorked - 40;
			hoursWorked -= overtime;
			salary = (overtime * (hourlyRate * 1.5)) + (hoursWorked * hourlyRate);

			printf("Salary is $%.2f\n\n\n", salary);
		}

	}
	return 0;
}