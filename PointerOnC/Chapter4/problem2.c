#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void) {
	int prime = 3;
	printf("2\n");
	while (prime > 2 && prime < 100) {
		int i;
		bool if_prime = true;
		for (i = 2; i < prime; i++) {
			if (0 == prime % i){
				if_prime = false;
			}
		}
		if (if_prime == true)
			printf("%d\n", prime);
		/* prime++; */
		/* Even numbers are not prime for sure */
		prime = prime + 2;
	}
	return EXIT_SUCCESS;
}
