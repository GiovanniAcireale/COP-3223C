/*
COP3223 Summer 2023 Lab3B
Copyright 2023 Acireale_Giovanni
*/
#include <stdio.h>

/*
Write a program that calculates and prints the sum of the even integers 
from 0 to 1000, except the integers can be divided by 3 
(for example 6 is a even integers but can be divided by 3).
*/

void main(void) {

	int count;
	int sum = 0;

	for (count = 0; count <= 1000; count += 2) { 
		if (count % 3 != 0) {
			sum += count;
		}
		else {}
	}
	printf("%d", sum);
}