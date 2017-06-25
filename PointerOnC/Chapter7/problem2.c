#include <stdio.h>
#include <stdlib.h>

int gcd(int M, int N) {
	int R;
	if (M <= 0 || N<= 0) return 0;
	if (M % N == 0) {
		return N;
	} else {
		R = M % N;
		return gcd(N, R);
	}
}

int main(void) {
	int result = gcd(14, 21);
	printf("result = %d\n", result);
	return result;
}
