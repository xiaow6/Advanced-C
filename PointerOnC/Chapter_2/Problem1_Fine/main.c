#include <stdio.h>
#include <stdlib.h>

signed int main(void) {
	printf("%d %d \n", increment(10), negate(10));
	printf("%d %d \n", increment(0), negate(0));
	printf("%d %d \n", increment(-10), negate(-10));
	return EXIT_SUCCESS;
}