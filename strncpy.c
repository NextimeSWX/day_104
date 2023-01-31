/*
 * E89 Pedagogical & Technical Lab
 * project:     strncpy
 * created on:  2023-01-31 - 09:26 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: strncpy.c
 */

char *stu_strncpy(char *dest,
                  const char *src,
                  unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i <= n && src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return (dest);
}
