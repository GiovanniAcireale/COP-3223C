/*
COP3223 Summer 2023 Lab8A
Copyright 2023 Acireale_Giovanni
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Question 1:  Study below code (Fig 7.16 in the text book) and explain what does shuffle function, deal function do.

	The shuffle function fills the deck array with every combination of SUITS and FACES and the deal function takes the 
	deck array and distributes the cards among the players.

Question 2:

Modify the program in Question 1 so that the card-dealing function deals a five-card poker hand. Then write the following additional functions:
a) Determine whether the hand contains a pair.
b) Determine whether the hand contains two pairs.
c) Determine whether the hand contains three of a kind (e.g., three jacks).
d) Determine whether the hand contains four of a kind (e.g., four aces).
e) Determine whether the hand contains a flush (i.e., all five cards of the same suit).
f) Determine whether the hand contains a straight (i.e., five cards of consecutive face values)
*/

#define SUITS 4
#define FACES 13
#define CARDS 52
#define PLAYERS 2

void shuffle(unsigned int wDeck[][FACES]);
void deal(int hands[][5], unsigned int wDeck[][FACES], const char* wFace[], const char* wSuit[]);
int onePair(int hand[], const char* wFace[]);
int twoPair(int hand[], const char* wFace[]);
int threeOfAKind(int hand[], const char* wFace[]);
int fourOfAKind(int hand[], const char* wFace[]);
int flush(int hand[], const char* wSuit[]);
int straight(int hand[], const char* wFace[]);
int bestHand(int hands[PLAYERS][5], const char* wFace[], const char* wSuit[]);
int qualityOfHand(int hand[], const char* wFace[], const char* wSuit[]);

int main(void) {
	const char* suit[SUITS] = { "Hearts", "Diamonds", "Clubs", "Spades" }; 

	const char* face[FACES] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

	unsigned int deck[SUITS][FACES] = { 0 };

	srand((unsigned int)time(NULL)); 

	shuffle(deck); 

	int hands[PLAYERS][5]; 

	deal(hands, deck, face, suit); 
	printf("Player %d has the best hand \n\n", bestHand(hands, face, suit) + 1);
	return 0;
}

/*
Takes a deck and fills it with randomized cards
@param wDeck array (with each element initialized to 0)
*/

void shuffle(unsigned int wDeck[][FACES]) {
	size_t row; 
	size_t column; 
	size_t card; 

	// for each of the cards, choose slot of deck randomly
	for (card = 1; card <= CARDS; card++) {

		// choose new random location until unoccupied slot found
		do {
			row = rand() % SUITS;
			column = rand() % FACES;
		} while (wDeck[row][column] != 0);

		// place card number in chosen slot of deck
		wDeck[row][column] = (int)card;
	}
}

/*
Takes a array array of cards and distributes them among each player

@param hands array of hands to be filled
@param wDeck array of cards
@param wFace character array representing face names
@param wSuit character array representing suit names
*/
void deal(int hands[][5], unsigned int wDeck[][FACES], const char* wFace[], const char* wSuit[]) {
	size_t card;
	size_t row; 
	size_t column;

	for (int player = 0; player < PLAYERS; player++) {
		printf("Player %d: \n\n", player + 1);
		// deal each of the cards
		for (card = 0; card < 5; card++) {
			// loop through rows of wDeck
			for (row = 0; row < SUITS; ++row) {
				// loop through columns of wDeck for current row
				for (column = 0; column < FACES; column++) {
					// if slot contains current card, display card
					if (wDeck[row][column] == card + 1 + (player * 5)) {
						printf("%5s of %-8s\n", wFace[column], wSuit[row]);
						hands[player][card] = (int)((column)+(row * FACES));
					}
				}
			}
		}

		printf("\n");
		if (straight(hands[player], wFace) == 1) {
			printf("> [You have a striaght]\n\n");
		}
		else if (flush(hands[player], wSuit) == 1) {
			printf("> [You have flush]\n\n");
		}
		else if (fourOfAKind(hands[player], wFace) == 1) {
			printf("> [You have four of a kind]\n\n");
		}
		else if (threeOfAKind(hands[player], wFace) == 1) {
			printf("> [You have three of a kind]\n\n");
		}
		else if (twoPair(hands[player], wFace) == 1) {
			printf("> [You have two pairs]\n\n");
		}
		else if (onePair(hands[player], wFace) == 1) {
			printf("> [You have a pair]\n\n");
		}
		else {
			printf("> [You have nothing]\n\n");
		}
	}
}

int onePair(int hand[], const char* wFace[]) {
	int count[FACES] = { 0 };
	int card;
	int hold;

	for (card = 0; card < 5; card++) {
		hold = hand[card] % FACES;
		count[hold] += 1;
	}
	for (card = 0; card < FACES; card++) {
		if (count[card] == 2) {
			return 1;
		}
	}
	return 0;
}

int twoPair(int hand[], const char* wFace[]) {
	int count[FACES] = { 0 };
	int card;
	int hold;
	int counter = 0;

	for (card = 0; card < 5; card++) {
		hold = hand[card] % FACES;
		count[hold] += 1;
	}
	for (card = 1; card <= FACES; card++) {
		if (count[card] == 2) {
			counter++;
		}
		if (counter == 2) {
			return 1;
		}
	}
	return 0;
}

int threeOfAKind(int hand[], const char* wFace[]) {
	int count[FACES] = { 0 };
	int card;
	int hold;

	for (card = 0; card < 5; card++) {
		hold = hand[card] % FACES;
		count[hold] += 1;
	}
	for (card = 0; card < FACES; card++) {
		if (count[card] == 3) {
			return 1;
		}
	}
	return 0;
}

int fourOfAKind(int hand[], const char* wFace[]) {
	int count[FACES] = { 0 };
	int card;
	int hold;

	for (card = 0; card < 5; card++) {
		hold = hand[card] % FACES;
		count[hold] += 1;
	}
	for (card = 0; card < FACES; card++) {
		if (count[card] == 4) {
			return 1;
		}
	}
	return 0;
}

int flush(int hand[], const char* wSuit[]) {
	int count[SUITS] = { 0 };
	int card;
	int hold;

	for (card = 0; card < 5; card++) {
		hold = hand[card] / FACES;
		count[hold] += 1;
	}
	for (card = 0; card < SUITS; card++) {
		if (count[card] == 5) {
			return 1;
		}
	}
	return 0;
}

int straight(int hand[], const char* wFace[]) {
	int count[FACES] = { 0 };
	int card;
	int hold;

	for (card = 0; card < 5; card++) {
		hold = hand[card] % FACES;
		count[hold] += 1;
	}

	int counter = 0;
	for (card = 0; card < FACES; card++) {
		(count[card] != 0) ? (counter++) : (counter = 0);
		if (counter == 5) {
			return 1;
		}
	}
	return 0;
}

/*
Determines which hand in an array of hands is the best.

@param hands Array of hands
@param wFace character array representing face names
@param wSuit character array representing suit names
@return a integer value coresponding to the best hand in the array of hands
*/
int bestHand(int hands[PLAYERS][5], const char* wFace[], const char* wSuit[]) {
	int bestHand = 0;
	for (int hand = 0; hand < PLAYERS; hand++) {
		if (qualityOfHand(hands[hand], wFace, wSuit) > qualityOfHand(hands[bestHand], wFace, wSuit)) {
			bestHand = hand;
		}
	}
	return bestHand;
}

/*
Determines an integer value which represents the quality of a hand. The higher the number the better the hand.

@param hand array of integers which represent cards in a deck
@param wFace character array representing face names
@param wSuit character array representing suit names
@return a integer value representing the quality of the hand
*/
int qualityOfHand(int hand[], const char* wFace[], const char* wSuit[]) {
	int quality = 0;
	if (straight(hand, wFace) == 1) {
		quality = 6;
	}
	else if (flush(hand, wSuit) == 1) {
		quality = 5;
	}
	else if (fourOfAKind(hand, wFace) == 1) {
		quality = 4;
	}
	else if (threeOfAKind(hand, wFace) == 1) {
		quality = 3;
	}
	else if (twoPair(hand, wFace) == 1) {
		quality = 2;
	}
	else if (onePair(hand, wFace) == 1) {
		quality = 1;
	}
	else {
		quality = 0;
	}
	return quality;
}