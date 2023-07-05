#include <stdio.h>

//write a program where a student enters a date they submitted an assignment.
//assignment submission is available for 13 days
//assignment is due by day 10
//after 13 days submissions will not be accepted
//every day after day 10 they will recieve 10% off per day

void main(void) {
	int dueDate = 10;
	int lateDate = 14;
	int submissionDate = 0;
	int penalty = 0;

	printf("It is 6/1, you are assigned to finish an assignment by 6/%d\n", dueDate);
	printf("Please input your submission date: 6/");
	scanf_s("%d", &submissionDate);

	if (1 <= submissionDate <= dueDate) {
		printf("Good job! You submitted on time!");
	}
	else if (submissionDate < 1) {
		printf("Error, incorrect date!");
	}
	else if (dueDate < submissionDate < lateDate) {
		penalty = lateDate - submissionDate;
		penalty = penalty * 10;
	}
}