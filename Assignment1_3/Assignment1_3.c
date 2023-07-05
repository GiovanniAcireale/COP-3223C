/*
COP3223 Summer 2023 Assignment 1.3
Copyright 2023 Acireale_Giovanni
*/
#include <stdio.h>

/*
Write a program that prints the following diamond shape. 
Your printf statements may print either one asterisk (*) or one blank. 
Read an odd number in the range 1 to 19 to specify the number of rows 
in the diamond. Your program should then display a diamond of the 
appropriate size. Use nested for statements.

please enter number of rows (odd nummber): 4
please enter number of rows (odd nummber): 7
   *
  ***
 *****
*******
 *****
  ***
   *

*/

void main(void) {
	int input = 1;
    int moreStars, lessStars;
    int oddCheck = 0;
    int space;

    while (input > 0) {

        printf("please enter number of rows (odd nummber): ");
        scanf_s("%d", &input);

        if (0 < input < 20 && input % 2 != 0) {

            printf("\n");
            
            for (moreStars = 1; moreStars <= input / 2 + 1; moreStars++) {

                for (space = 1; space <= input / 2 + 1 - moreStars; space++) {
                    printf(" ");
                }

                for (lessStars = 1; lessStars <= 2 * moreStars - 1; lessStars++) {
                    printf("*");
                }

                printf("\n");
            }


            for (moreStars = input / 2; moreStars >= 1; moreStars--) {

                for (space = 1; space <= input / 2 + 1 - moreStars; space++) {
                    printf(" ");
                }

                for (lessStars = 1; lessStars <= 2 * moreStars - 1; lessStars++) {
                    printf("*");
                }

                printf("\n");
            }

            printf("\n");
        }
    }

}