#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a,b,c;
	printf("Please enter three numbers:\n");
	scanf("%d,%d,%d", &a, &b, &c);
	if (a <=0 || b <= 0 || c <= 0) {
		printf("Only positive number is allowed\n");
		return EXIT_FAILURE;
	}
	if (a + b < c || a + c < b || b + c < a) {
		printf("These numbers are not valid for a triangle\n");
		return EXIT_FAILURE;
	}
	if (a == b && b == c && a == c)
		printf("This is a Equilateral triangle\n");
	else if (a == b || b == c || a == c)
		printf("This is Isosceles triangle\n");
	else
		printf("This is a scalene trianle\n");
	return EXIT_SUCCESS;
}

