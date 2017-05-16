#include <stdio.h>

#define MAX_LENGTH 128
/*
void print_dup(FILE* fp) {
	char input[MAX_LENGTH];
	char prev[MAX_LENGTH];
	int print_current = 0;
	if (gets(prev) != NULL) {
		while (gets(input) != NULL) {
			if (strcmp(input, prev) != 0) {
				print_current = 0;
				strcpy(prev, input);
			} else if (!print_current) {  //本行使用print_current判断可以避免多次重复行打印。
				print_current = 1;
				printf("%s\n", input);
			}
		}
	}
}
*/
void main() {
	char input[MAX_LENGTH];
	char prev[MAX_LENGTH];
	FILE *fp;
	int print_current = 0;
	char filename[] = "./test.txt";
	if ((fp = fopen(filename, "r")) == NULL) {
		printf("Failed to open the file");
		return NULL;
	}
	while (!feof(fp)) {
		if(fgets(prev, MAX_LENGTH, fp) != NULL) {
			while (fgets(input, MAX_LENGTH, fp) != NULL) {
				if (strcmp(input, prev) != 0) {
					print_current = 0;
					strcpy(prev, input);
				} else if (!print_current) {
					print_current = 1;
					printf("%s\n", input);
				}
			}
		}
	}

}
