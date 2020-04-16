//Our foo function
#include <stdio.h>
#include <stdlib.h>

int foo(int bar) {
	return bar + 1;
}

char* numberTest(int guess, int test) {

	//strings
	char STRING_L[5] = "LOWER";
	char STRING_C[7] = "CORRECT";
	char STRING_H[6] = "HIGHER";

	if (guess == test) {
		return STRING_C;
	}
	else if (guess < test) {
		return STRING_L;
	}
	else if (guess > test) {
		return STRING_H;
	}
}

int againTest() {
	int i = 0;
	while (i == 0) {
		//Loops untill you give a correct input
		char check = 'a';
		printf("\n Do you want to play again? (Y/N): ");
		scanf("%s", &check);

		if (check == 'Y' || check == 'y') {
			return 1;
		}
		else if (check == 'N' || check == 'n') {
			return 0;
		}
		printf("\n Invalid input. \n");
	}
}