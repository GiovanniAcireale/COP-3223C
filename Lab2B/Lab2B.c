/*
COP3223 Summer 2023 Lab2B
Copyright 2023 Acireale_Giovanni
*/
#include <stdio.h>

void main(void) {

	int n = 0;

	while (n < 10) {
		if (n == 0) {
			printf("N\t10*N\t100*N\t1000*N\n");
		}

		n++;
		printf("%d\t%d\t%d\t%d\n", n, n*10, n*100, n*1000);
	}
}