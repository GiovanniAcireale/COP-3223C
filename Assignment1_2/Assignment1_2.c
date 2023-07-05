/*
COP3223 Summer 2023 Assignment 1.2
Copyright 2023 Acireale_Giovanni
*/
#include <stdio.h>

/*
A palindrome is a number or a text phrase that reads the same backward as 
forward. For example, each of the following five-digit integers is a 
palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in 
a five digit integer and determines whether or not it’s a palindrome. 
[Hint: Use the division and remainder operators to separate the number 
into its individual digits.]

Please enter a five digit integer: 12345
12345 is a not palindrome number

Please enter a five digit integer: 12321
12321 is a palindrome number

*/
void main(void) {

    int input;
    printf("Please enter a five digit integer: ");
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

        if (a == e && b == d) {
            printf("%d%d%d%d%d is a palindrone number\n", e, d, c, b, a);
        }
        else {
            printf("%d%d%d%d%d is not a palindrone number\n", e, d, c, b, a);
        }
    }
    else {
        printf("Invalid input!");
    }

    return 0;


}