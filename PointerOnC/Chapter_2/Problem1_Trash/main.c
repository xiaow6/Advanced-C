#include <stdio.h>
#include <stdlib.h>

signed int main(void) {
	signed int a = 10;
	signed int b = 0;
	signed int c = -10; 
	signed int result = -1;
	signed int tmp;
	tmp = increment(a);
	result = negate(tmp);
	printf("10-----&&&&%d\n", result);
	tmp = increment(b);
	result = negate(tmp);
	printf("0------&&&&&&%d\n", result);
	tmp = increment(c);
	result = negate(tmp);
	printf("-10----&&&&%d\n", result);
	return EXIT_SUCCESS;
}
