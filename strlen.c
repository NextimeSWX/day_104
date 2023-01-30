/*
 * E89 Pedagogical & Technical Lab
 * project:     strlen
 * created on:  2023-01-30 - 15:17 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: strlen.c
 */

unsigned int stu_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}
