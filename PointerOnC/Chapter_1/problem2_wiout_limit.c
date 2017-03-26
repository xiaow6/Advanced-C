#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(void) {
	char ch;
	bool HEAD = true;
	int num_line = 1;
	while ((ch = getchar()) != EOF) {
		if (HEAD) {
			HEAD = false;
			printf("%d : ", num_line);
			num_line++;
		}
		putchar(ch);
		if ('\n' == ch) {
			HEAD = true;
		}
	}
	return 0;
}
