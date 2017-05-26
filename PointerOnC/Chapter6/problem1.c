#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>


#define NUL '\0'
const char * find_char(char const *source, char const *chars) {
    const char *cp;
    if (source != NULL && chars != NULL) {
        while(*source != NUL) {
            for(cp = chars; *cp != NUL; cp++) {
                if (*source == *cp) {
                    return source;
                }
            }
            source++;
        }
    }
    return NULL;
}

void main(void) {
    char source[] = "ABCDEF";
    char chars[] = "TEST";
    char source2[] = "Tesla";
    char source3[] = "AERIAL";
    char source4[] = "LOSS";
    char source5[] = "WHATTHEFUCK";
    const char * result;
    result = find_char(source, chars);
    printf("result = %c\n", *result);
    result = find_char(source2, chars);
    printf("result = %c\n", *result);
    result = find_char(source3, chars);
    printf("result = %c\n", *result);
    result = find_char(source4, chars);
    printf("result = %c\n", *result);
    result = find_char(source5, chars);
    printf("result = %c\n", *result);

}
/*
原型函数：
#include <sys/cdefs.h>
#include <string.h>

/*
 * Find the first occurrence in s1 of a character in s2 (excluding NUL).

char *
strpbrk(s1, s2)
    register const char *s1, *s2;
{
    register const char *scanp;
    register int c, sc;

    while ((c = *s1++) != 0) {
        for (scanp = s2; (sc = *scanp++) != 0;)
            if (sc == c)
                return ((char *)(s1 - 1));
    }
    return (NULL);
}
*/