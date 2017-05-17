#include <stdio.h>

int substr(char dst[], char src[], int start, int len) {
	if (start > strlen(src) || len < 0 || start < 0) {
		dst = NULL;
		return 0;
	}
	int i;
	for (i = 0; (i < len) && (src[i + start] != '\0'); i++) {
		dst[i] = src[i + start];
	}
	dst[i] = '\0';
	printf("%s\n", dst);
	return (i + 1);
}

void main() {
	int start = 3;
	int len = 8;
	char dst[len];
	char src[] = "qwertyuiopasdfghjklzxcvbnm";
	int result = substr(dst, src, start, len);
	printf("%d\n", result);
}
