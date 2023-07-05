/*
COP3223 Summer 2023 Lab4B
Copyright 2023 Acireale_Giovanni
*/
#include <stdio.h>
#include <math.h>

/*
Ask user to enter the position (X, Y) of two points, 
then calculate and print out the distance. Write a 
function distance that calculates the distance between 
two points (x1, y1) and (x2, y2). All numbers and return 
values should be of type double. Use Math function 
wherever applicable.

Distance = sqrt((x1-x2)^2 + (y1-y2)^2)
*/

float distance(float a, float b, float c, float d) {
	float result = pow(a - c, 2) + pow(b - d, 2);
	return result;
}

int main() {
	
	float x1, x2, y1, y2;

	printf("This program takes two sets of coordinates and gives you the distance between them.\n");
	printf("Please input the x-coordinate of point 1: ");
	scanf_s("%f", &x1);
	printf("Please input the y-coordinate of point 1: ");
	scanf_s("%f", &y1);
	printf("Please input the x-coordinate of point 2: ");
	scanf_s("%f", &x2);
	printf("Please input the y-coordinate of point 2: ");
	scanf_s("%f", &y2);

	float total = sqrt(distance(x1, y1, x2, y2));

	printf("Distance: %.2f", total);
	return 0;
}
