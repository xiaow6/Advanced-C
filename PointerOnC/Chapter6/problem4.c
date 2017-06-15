#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 1000
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
	printf("2----");
	for (number = 3, pt = &string[0]; pt < &string[MAX_NUM]; number += 2, pt++) {
		if(*pt)
			printf("%d----", number);
	}
	return EXIT_SUCCESS;
}