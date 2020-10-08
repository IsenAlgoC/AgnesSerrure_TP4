#include <stdio.h>
#include <stdlib.h>

#define SEPARATEUR '/'
#define TAILLETAB1 20

int MyTab1[TAILLETAB1];

int main() {

	for (int i = 0; i < 20; i++)

	{

		MyTab1[i] = i + 1;

		printf("%d %c ", MyTab1[i], SEPARATEUR);


	}
	printf("\n");

	int* MyPtr1 = 0;
	MyPtr1 = &MyTab1[TAILLETAB1 - 1];

	for (int a = 0; a < TAILLETAB1; a++) {
		printf("%d %c ", *MyPtr1, SEPARATEUR);
		MyPtr1--;
	}
}