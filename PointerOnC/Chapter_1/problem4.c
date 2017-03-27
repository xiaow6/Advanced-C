#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*it should be 1001 because '\0'*/
#define MAX_LEN 1001
int main(void) {
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len;
	/*为了对应检查，将其改为 -1*/
	int len_max = -1;
	char ch;
	while (gets (input) != NULL) {
		len = strlen(input);
		if (len >= len_max) {
			len_max = len;
			strcpy(output,input);  
			/*string 赋值的方法*/
		}
		printf("%s\n", output);
		/*if ((ch = getchar()) == '\n') break; 吃掉开头字符的是这个函数啊。。*/
	}
	/*做一道检查，不直接打印,input有能为空*/
	if (len_max >= 0)
		printf("%s\n", utput);
	return EXIT_SUCCESS;
}