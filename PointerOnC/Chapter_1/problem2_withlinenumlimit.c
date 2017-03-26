#include <stdio.h>
#include <string.h>
#define MAX_INPUT 10000
int main(void) {
	unsigned long line_num = 0;
	char input[MAX_INPUT];
	while (gets(input) != NULL) {
		printf("%ld : ", line_num);
		printf("%s \n", input);
		line_num++;
	}
	return 0;
}
