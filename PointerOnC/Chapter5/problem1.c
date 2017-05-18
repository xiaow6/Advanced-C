#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define NUL '\0'
void main() {
    char ch;
    while ((ch = getchar()) != NUL) {
        putchar(tolower(ch));
    }
}
/* if we are not allowed to use tolower*/
/* in while loop
if (ch >= 'A' && ch <= 'Z') 
    ch += 'a' - 'A';
    putchar(ch);
    */