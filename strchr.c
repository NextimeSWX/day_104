/*
 * E89 Pedagogical & Technical Lab
 * project:     strchr
 * created on:  2023-01-31 - 11:08 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: strchr.c
 */

char *stu_strchr(const char *str, char search)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        if (search == str[i]) {
            return (char*)str;
        }
        i += 1;
    }
    return (NULL);
}
