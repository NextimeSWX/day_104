/*
 * E89 Pedagogical & Technical Lab
 * project:     strcpy
 * created on:  2023-01-30 - 16:37 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: strcpy.c
 */

unsigned int stu_strlen (const char *str);

char *stu_strcpy(char *dest, const char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return (dest);
}
