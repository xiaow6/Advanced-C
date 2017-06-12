#include <stdio.h>
#include <stdlib.h>

#define NUL '\0'
#define FALSE 0
#define TRUE 1
char* match(char *str, char *substr) {
	while (*substr != NUL) {
		if (*str++ != *substr++) 
			return NULL;
	}
	return str;
}
int del_substr(char *str, char *substr) {
	printf("enter del_subst\n");
	char *next = NULL;
	char *str1 = NULL;
	str1 = str;
	while (*str != NUL) {
		next = match(str, substr);
		if (next != NULL)
			break;
		str++;
	}
	if (*str == NUL) {
		return FALSE;
	}
/*	while (str != NULL && next != NULL && *next != NUL)
	{
		*str++ = *next++;
	}
	*str = NUL;*/
	while (*str++ = *next++)
		;
	printf("string = %s\n", str);
	printf("string = %s\n", str1);
	return TRUE;
}
int main() {

/*	char *str = (char *)malloc(sizeof(char) * 16);
	if (str == NULL) {
		printf("out of memory1 \n");
	}*/
	char str[] = "ABCDEFG";
/*	char *substr = (char *)malloc(sizeof(char) * 8);
	if (substr == NULL) {
		printf("out of memory\n");
	}*/
	char substr[] = "BCD";
	int result;
	result = del_substr(str, substr);
	printf("result = %d\n", result);
}

