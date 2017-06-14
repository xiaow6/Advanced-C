#include <stdio.h>
#include <stdlib.h>

void reverse_string(char *string) {
	char *end;
	for (end = string; *end != '\0'; end++)
		;
	end--;
	while(string < end) {
		char temp;
		temp = *string;
		*string++ = *end;
		*end-- = temp;
	}
}

int main(void) {
	char origin[] = "ASBDSDFa;sdlghjwklqkjwdhg";
	reverse_string(origin);
	printf("the reversed string is %s\n", origin);
}