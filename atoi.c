/*
 * E89 Pedagogical & Technical Lab
 * project:     atoi
 * created on:  2023-01-30 - 11:36 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: atoi.c
 */

#include <stdlib.h>



#include <stdio.h>


int stu_atoi(const char *str)
{

    int nbrs;
    int tmp;
    int i;
    int k;
    int j;

    nbrs = 0;
    tmp = 0;
    i = 0;
    k = 1;
    j = 0;
    if (str[0] == '-') {
        j = 1;
    }
    while (str[i] != '\0') {
        i += 1;
    }
    i -= 1;
    while (i >= j) {
        tmp = str[i] - 48;
        tmp *= k;
        k *= 10;
        nbrs += tmp;
        i -= 1;
    }
    if (str[0] == '-') {
        nbrs *= -1;
    }
    printf("%d\n", nbrs);
    return (nbrs);
}
