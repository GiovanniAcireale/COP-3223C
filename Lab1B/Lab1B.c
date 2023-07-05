/*
COP3223 Summer 2023 Lab1B
Copyright 2023 Acireale_Giovanni
*/

#include <stdio.h>

void main(void) {
	int input;
	printf("Input 5 numbers: ");
	scanf_s("%d", &input);

	if (input <= 99999 && input > 9999) {


        int a, b, c, d, e;
        a = input % 10;
        input = input / 10;
        b = input % 10;
        input = input / 10;
        c = input % 10;
        input = input / 10;
        d = input % 10;
        input = input / 10;
        e = input % 10;
        input = input / 10;

        printf("%d   %d   %d   %d   %d", e, d, c, b, a);
	}
    else {
        printf("Invalid input!");
    }

    return 0;

}