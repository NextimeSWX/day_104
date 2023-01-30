/*
 * E89 Pedagogical & Technical Lab
 * project:     strcmp
 * created on:  2023-01-30 - 16:06 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: strcmp.c
 */

int stu_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] > s2[i]) {
            return (1);
        }
        else if (s2[i] > s1[i]) {
            return (-1);
        }
        i += 1;
    }
    return (0);
}
