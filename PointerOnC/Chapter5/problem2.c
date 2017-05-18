#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define NUL '\0'
void main() {
    char ch;
    while ((ch = getchar()) != NUL) {
        if (ch >= 'A' && ch <= 'M') {
            ch = ch + 13;
        } else if (ch >= 'N' && ch <= 'Z') {
            ch = ch - 13;
        } else if (ch >= 'a' && ch <= 'm') {
            ch += 13;
        } else if (ch >= 'n' && ch <= 'z') {
            ch -= 13;
        }
        putchar(ch);
    }
}
/*只需要两种情况即可A-Z a-z*/
int encrypt(int ch, int base) {
    ch -= base;
    ch += 13;
    ch %= 26;
    return ch + base;
}