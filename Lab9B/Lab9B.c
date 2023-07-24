/*
COP3223 Summer 2023 Lab9B
Copyright 2023 Acireale_Giovanni
*/
#include <stdio.h>

//function declared
void display(unsigned val);
unsigned calPower(unsigned number, unsigned power);

int main() {
    //variables declared
    unsigned num;
    unsigned ans;
    unsigned power;

    //input num
    printf("Enter a number: \n");
    scanf("%u", &num);
    //input power
    printf(" Enter a power: \n");
    scanf("%u", &power);

    //print integer result
    printf(" The integer result is: \n");
    display(power); //call function display

    //function to calculate power
    ans = calPower(num, power);
    //display answer in number and bits 
    printf("The result in bits is:%u ", ans);
    display(ans); //call function display
}

//function to calculate power i.e multiplies number by 2 power times
unsigned calPower(unsigned n, unsigned p) {
    return n << p;
}

//function to display bits
void display(unsigned val) {
    //variables declared
    unsigned c;
    unsigned mask = 1 << 15;
    //print value in decimal
    printf("%7u = ", val);

    //print value in bits
    for (c = 1; c <= 16; c++) {
        // check mask and set bits accordingly
        val& mask ? putchar('1') : putchar('0');
        val <<= 1; //shift by 1 bit

        // if bits printed put space
        if (c % 8 == 0) {
            putchar(' ');
        }
    }
    //put next line
    putchar('\n');
}