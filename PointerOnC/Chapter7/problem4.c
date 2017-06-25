#include <stdio.h>
#include <stdarg.h>

int max_list(int first_arg, ...){
	va_list var_arg;
	int max = 0;
	if (first_arg >= 0) {
		int this_arg;
		max = first_arg;
		va_start(var_arg, first_arg);
		while ((this_arg = va_arg(var_arg, int)) >= 0) {
			if (this_arg > max)
				max = this_arg;
		}
		va_end(var_arg);
	}
	printf("max = %d\n", max);
	return max;
}
int main() {
	return max_list(1, 2, 3, 4, 5, 6, 7, 199, 8, 0, -1);
}
