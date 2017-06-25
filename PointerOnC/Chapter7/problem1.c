#include <stdio.h>
#include <stdlib.h>

int hermite(int n, int x) {
	result = -1;
	if (n <= 0) {
		result = 1;
	} else if (n == 1) {
		result = 2 * x;
	} else {
		result = 2 * x * hermite(n-1, x) - \
			 2 * (n - 1) * hermite(n - 2, x);
	}
	return result;
}

