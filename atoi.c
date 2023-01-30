/*
 * E89 Pedagogical & Technical Lab
 * project:     atoi
 * created on:  2023-01-30 - 11:36 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: atoi.c
 */

#include <stdlib.h>

int stu_atoi(const char *str)
{
    int nbrs;
    int tmp;
    int i;

    nbrs = 0;
    tmp = 0;
    i = 0;
    if (str[0] == '-') {
        i += 1;
    }
    while (str[i] != '\0') {
        tmp = str[i] - '0';
        nbrs += tmp;
        nbrs *= 10;
        i += 1;
    }
    nbrs /= 10;
    if (str[0] == '-') {
        nbrs *= -1;
    }
    return (nbrs);
}
