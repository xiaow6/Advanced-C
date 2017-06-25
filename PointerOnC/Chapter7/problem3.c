#include <stdio.h>
#include <stdlib.h>

int ascii_to_integer(char *string) {
	int result = 0;
	while (*string != '\0') {
		if (*string >= '0' && *string <= '9') {
			result = 10 * result + (*string - '0');
		}
		string++;
	}
	printf("result = %d\n", result);
	return result;
}

int main(void) {
	return ascii_to_integer("123asdf123");
}

