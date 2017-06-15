#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 100000
#define FALSE 0
#define TRUE 1

int main(void) {
	char string[MAX_NUM];
	char *pt;
	int number;
	for (pt = string; pt < &string[MAX_NUM]; pt++)
		*pt = TRUE;
	int i,n;
	for (number = 3; ; number +=2) {
		pt = &string[0] + (number - 3) / 2;
		if (pt >= &string[MAX_NUM]) break;
		while (pt += number, pt < &string[MAX_NUM])
			*pt = FALSE;
	}

	int n_prime = 1;
	int limit = 1000;
	for (number = 3, pt = &string[0]; pt < &string[MAX_NUM]; number += 2, pt++) {
		if (number >= limit) {
			printf("%d - %d: %d\n", limit - 1000, limit, n_prime);
			n_prime = 0;
			limit += 1000;
		}
		if(*pt)
			n_prime += 1;
	}
	printf("%d - %d: %d\n", limit - 1000, limit , n_prime);
	return EXIT_SUCCESS;
}