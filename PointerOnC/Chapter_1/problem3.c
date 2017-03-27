#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	signed char checksum = -1;
	char ch;
	while ((ch = getchar()) != EOF) {
		checksum += ch;
		putchar(ch);
		if (ch == '\n') break;
	}
	if (checksum > 127) 
		checksum = 127;
	else if (checksum < -128) 
		checksum = -128;
	printf("checksum = %d\n", checksum);
}