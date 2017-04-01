#include <stdio.h>
#include <stdlib.h>
int main(void) {
	float prev = 1;
	float i;
	float next = 1;
	scanf("%f", &i);
	if (i < 0) {
		printf("Negative input is not allowed.\n");
		return -1;
	}
	while (1) {
		next = (prev + (i / prev)) / 2;
		if(next == prev) break;
		prev = next;
	}
	printf("Final Result :%f\n", next);
	return EXIT_SUCCESS;
}
