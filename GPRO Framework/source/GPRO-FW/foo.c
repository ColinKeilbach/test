//Our foo function
#include <stdio.h>
#include <stdlib.h>
#include "GPRO-FW/foo.h"

int foo(int bar) {
	return bar + 1;
}

void numberTest(int guess, int test) {

	if (guess == test) {
		printf(" CORRECT \n");
	}
	else if (guess < test) {
		printf(" LOWER \n");
	}
	else if (guess > test) {
		printf(" HIGHER \n");
	}
}

enum BOOL againTest() {
	enum BOOL output = true;

	char check = 'A';

		printf("\n Do you want to play again? (Y/N): ");
		scanf("%c%*c", &check);

		switch (check) {
		case 'Y':
			output = true;
			break;
		case 'y':
			output = true;
			break;
		case 'N':
			output = false;
			break;
		case 'n':
			output = false;
			break;
	}

	return output;
}