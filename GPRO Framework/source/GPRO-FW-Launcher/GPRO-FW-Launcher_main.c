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

	enum BOOL play = true;
	do {
		int testNumber = rand() % 50;
		int guess = 0;
		do {
			printf("\n Guess the number (0-50): \n");
			scanf("%d%*c", &guess);
			printf("\n You guessed: \n");
			numberTest(guess, testNumber);
		} while (guess != testNumber);

		play = againTest();

	} while (play == true);
}
