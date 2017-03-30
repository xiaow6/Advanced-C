#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int ret = 0;
	char ch;
	while ((ch = getchar()) != EOF) {
		if (ch == '{') ret += 1;
		if (ch == '}') ret -= 1;
		if (ret < 0) {
			printf("Typing more } before {, please check.\n");
			return -1;
		}
	}
	if (0 == ret) {
		printf("All matched.\n");
		return 0;
	} else {
		printf("Unmatched!\n");
		return -1;
	}
}