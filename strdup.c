/*
 * E89 Pedagogical & Technical Lab
 * project:     strdup
 * created on:  2023-01-31 - 09:35 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: strdup.c
 */

#include <stdlib.h>

unsigned int stu_strlen(const char *str);

char *stu_strdup(const char *src)
{
    char *dest;
    int i;

    i = 0;
    dest = malloc(sizeof(char) * (stu_strlen(src) + 1));
    while (src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return (dest);
}
