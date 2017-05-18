#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

void set_bit(char bit_array[], unsigned int bit_number) {
    bit_array[char_offset(bit_number)] |= 1 << bit_offset(bit_number);
}
void clear_bit(char bit_array[], unsigned int bit_number) {
    /*return bit_array[char_offset(bit_number)] &= 0 << bit_offset(bit_number);*/
    bit_array[char_offset(bit_number)] &= ~(1 << bit_offset(bit_number));
}
void assign_bit(char bit_array[], unsigned int bit_number, int value) {
    if (value != 0) {
        set_bit(bit_array, bit_number);
    } else {
        clear_bit(bit_array, bit_number);
    }
}
int test_bit(char bit_array[], unsigned int bit_number) {
    return (bit_array[char_offset(bit_number)] & 1 << bit_offset(bit_number)) != 0;
}




int char_offset(unsigned int bit_number) {
    printf("char_offset=%d\n", bit_number / CHAR_BIT);
    return bit_number / CHAR_BIT;
}
int bit_offset(unsigned int bit_number) {
    printf("bit_offset=%d\n", bit_number % CHAR_BIT);
    return bit_number % CHAR_BIT;
}

void main() {
    printf("CHAR_BIT=%d\n", CHAR_BIT);
    char bit_array[] = "12345678";
    set_bit(bit_array, 0);
    printf("%s\n", bit_array);
    clear_bit(bit_array, 0);
    printf("%s\n", bit_array);
    assign_bit(bit_array, 3, 1);
    printf("%s\n", bit_array);
    test_bit(bit_array, 3);
    printf("%s\n", bit_array);
    printf("%d\n", test_bit(bit_array, 3));
}
