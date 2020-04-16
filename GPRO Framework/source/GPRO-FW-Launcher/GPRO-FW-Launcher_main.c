#include <stdio.h>
#include <stdlib.h>
#include "GPRO-FW/foo.h"

int main()
{
	srand(time(0));
	int test = foo(9000);
	system("pause");

	printf("\n %d \n", test);

	//Number guess game

	int play = 1;
	do {
		int testNumber = rand() % 50;
		int guess = 0;
		do {
			printf("\n Guess the number (1-50): \n");
			scanf("%d", &guess);
			printf("\n You guessed: %s \n", numberTest(guess, testNumber));
		} while (guess != test);

		play = againTest();

	} while (play == 1);
}
