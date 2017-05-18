#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define NUL '\0'

unsigned int reverse_bits(unsigned int value) {
    unsigned int answer;
    unsigned int i;
    answer = 0;

    for (i = 1; i != 0; i <<= 1) { //this i is also an unsigned int, so forloop ignore the difference on different machines
        answer <<= 1;
        if (value & 1) {
            answer |= 1;
        }
        value >>= 1;
    }
    return answer;
}
void main() {
    unsigned int value = 25;
    printf("%u\n", reverse_bits(value));
}