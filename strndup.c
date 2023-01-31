/*
 * E89 Pedagogical & Technical Lab
 * project:     strndup
 * created on:  2023-01-31 - 09:35 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: strndup.c
 */

#include <stdlib.h>

unsigned int stu_strlen(const char *str);

char *stu_strndup(const char *src, unsigned int n)
{
    char *dest;
    unsigned int i;

    i = 0;
    dest = malloc(sizeof(char) * (stu_strlen(src) + 1));
    while (i <= n && src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return (dest);
}
