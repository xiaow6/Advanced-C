#include <stdio.h>
#include <stdlib.h>
#define NUL '\0'
void deblank(char string[]) {
	char *src;
	char *dst;
	int ch;
	src = string;
	dst = string++; //dst 得到的是string，但是string移到下一位
	while ((ch = *src++) != NUL) {
		if (is_white(ch)) {
			if (src == string || !is_white(dst[-1]))
				*dst++ = ' ';
		} else {
			*dst++ = ch;
		}
	}
	*dst = NUL;
	printf("%s\n", string);
}



int is_white(int ch) {
	return ch == ' ' || ch == '\t' || ch == '\v' || \
	ch == '\f' || ch == '\n' || ch == '\r';
}
void main() {
	char string[] = "asdf    asdf   asdfasdf	asdf qwqwqrqq";
	deblank(string);
}
