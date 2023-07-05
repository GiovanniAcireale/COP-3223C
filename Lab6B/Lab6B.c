/*
COP3223 Summer 2023 Lab6B
Copyright 2023 Acireale_Giovanni
*/

#include<stdio.h>
#include<stdlib.h>
// Define MAX to 50 (size of board)
#define MAX 50

int main() {
	/*
		1	|	pen up
		2	|	pen down
		3	|	turn right
		4	|	turn left
		5,n |	move n spaces
		6	|	print grid
		9	|	quit
	*/

	// pen up: 0, pen down: 1
	// pen up by default
	int pen = 0;

	// directions:
	//      (-x)N
	// (-y)W     (+y)E
	//      (+x)S
	char direction = 'E';

	// 50 by 50 grid
	int grid[MAX][MAX];

	// positions
	int x = 0;
	int y = 0;
	// default (0,0) aka the top left

	

}