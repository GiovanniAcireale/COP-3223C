/*
COP3223 Summer 2023 Lab7B
Copyright 2023 Acireale_Giovanni
*/

/*
Modify the program in below (Fig. 7.16 in text book) so that the card-dealing function deals a five-card poker hand. 
Then write the following additional functions:

a) Determine whether the hand contains a pair.
b) Determine whether the hand contains two pairs.
c) Determine whether the hand contains three of a kind (e.g., three jacks).
d) Determine whether the hand contains four of a kind (e.g., four aces).
e) Determine whether the hand contains a flush (i.e., all five cards of the same suit).
f) Determine whether the hand contains a straight (i.e., five cards of consecutive face values).

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// prototypes
void shuffle(unsigned int deck[][FACES]);
void deal(unsigned int deck[][FACES], unsigned int hand[][2], const char *face[], const char *suit[]);

void pair(unsigned int hand[][2], const char *face[], const char *suit[]);
void twoPair(unsigned int hand[][2], const char *face[], const char *suit[]);
void threeOfAKind(unsigned int hand[][2], const char *face[], const char *suit[]);
void fourOfAKind(unsigned int hand[][2], const char *face[], const char *suit[]);
void flush(unsigned int hand[][2], const char *face[], const char *suit[]);
void straight(unsigned int hand[][2], const char *face[], const char *suit[]);

int main(void) {
	// initialize deck array
	int deck[SUITS][FACES] = {0};

	// initialize hand array
	unsigned int hand[5][2] = {0};

	// initialize suit array
	const char* suit[SUITS] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	// initialize face array
	const char* face[FACES] = { "Ace", "Deuce", "Three", "Four", "Five",
							   "Six", "Seven", "Eight", "Nine", "Ten",
							   "Jack", "Queen", "King" };

	srand(time(NULL)); // seed random-number generator
	shuffle(deck); // shuffle the deck

	deal(deck, hand, face, suit); // deal the deck

	// determine hand
	pair(hand, face , suit);
	twoPair(hand, face , suit);
	threeOfAKind(hand, face , suit);
	fourOfAKind(hand, face , suit);
	flush(hand, face , suit);
	straight(hand, face, suit);
}

// shuffle cards in deck
void shuffle(unsigned int deck[][FACES]) {
	// for each of the cards, choose slot of deck randomly
	for (size_t card = 1; card <= CARDS; ++card) {
		size_t row = 0;    // row number
		size_t column = 0; // column number

		// choose new random location until unoccupied slot found
		do {
			row = rand() % SUITS;
			column = rand() % FACES;
		} while (deck[row][column] != 0);

		deck[row][column] = card; // place card number in chosen slot
	}
}

// deal cards in deck
void deal(unsigned int deck[][FACES], unsigned int hand[][2], const char *face[], const char *suit[]) {
	// position counter for hand
	int r = 0;

	puts("The hand is:\n");
	
	// for each of the cards dealt, display card
	for (size_t card = 1; card <= 6; ++card) {
		// loop through rows of deck
		for (size_t row = 0; row < SUITS; ++row) {
			// loop through columns of deck for current row
			for (size_t column = 0; column < FACES; ++column) {
				// if slot contains current card, display card
				if (deck[row][column] == card) {
					hand[r][0] = row;
					hand[r][1] = column;
					printf("%5s of %-8s\n", face[column], suit[row]); 
					++r;
				}
			}
		}
	}
	puts("\n");
}

// checks for cards of the same face
void pair(unsigned int hand[][2], char* face[], char* suit[]) {
	int counter[FACES]= {0};
	size_t r, p;

	for (r = 0; r < 5; ++r) {
		++counter[hand[r][1]];
	}

	for(p=0; p<FACES; ++p) {
		if(counter[p] == 2) {
			printf("The hand contains a pair of %s\n", face[p]);
		}
	}
}

// checks for two sets of cards with the same face
void twoPair(unsigned int hand[][2], char* face[], char* suit[]) {
	int counter[FACES]= {0};
	size_t r, p;
	int pairCounter = 0;

	for (r = 0; r < 5; ++r) {
		++counter[hand[r][1]];
	}

	for(p=0; p<FACES; ++p) {
		if(counter[p] == 2) {
			++pairCounter;
		}
	}

	if(pairCounter == 2) {
		printf("The hand contains two pairs\n");
	}
}

// checks for three cards with the same face
void threeOfAKind(unsigned int hand[][2], char* face[], char* suit[]) {
	int counter[FACES]= {0};
	size_t r, p;

	for (r = 0; r < 5; ++r) {
		++counter[hand[r][1]];
	}

	for(p=0; p<FACES; ++p) {
		if(counter[p] == 3) {
			printf("The hand contains three of a kind of %s\n", face[p]);
		}
	}
}

// checks for four cards with the same face
void fourOfAKind(unsigned int hand[][2], char* face[], char* suit[]) {
	int counter[FACES]= {0};
	size_t r, p;

	for (r = 0; r < 5; ++r) {
		++counter[hand[r][1]];
	}

	for(p=0; p<FACES; ++p) {
		if(counter[p] == 4) {
			printf("The hand contains four of a kind of %s\n", face[p]);
		}
	}
}

// checks for a flush
void flush(unsigned int hand[][2], char* face[], char* suit[]) {
	int counter[SUITS]= {0};
	size_t r, p;

	for (r = 0; r < 5; ++r) {
		++counter[hand[r][0]];
	}

	for(p=0; p<SUITS; ++p) {
		if(counter[p] == 5) {
			printf("The hand contains a flush of %s\n", suit[p]);
		}
	}
}

// checks for a straight
void straight(unsigned int hand[][2], char* face[], char* suit[]) {
	int hand2[5] = {0};
	int temp;
	size_t r, pass, comp;

	for (r = 0; r < 5; ++r) {
		hand2[r] = hand[r][1];
	}

	for(pass=1; pass<5; ++pass) {
		for(comp=0; comp<4; ++comp) {
			if(hand2[comp] > hand2[comp+1]) {
				temp = hand2[comp];
				hand2[comp] = hand2[comp+1];
				hand2[comp+1] = temp;
			}
		}
	}

	if (hand2[4] - 1 == hand2[3] && hand2[3] - 1 == hand2[2] && hand2[2] - 1 == hand2[1] && hand2[1] - 1 == hand2[0]) {
		printf("The hand contains a straight from %s to %s.\n", face[hand2[0]], face[hand2[4]]);
	}
}