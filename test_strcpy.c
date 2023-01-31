#include <stdlib.h>

char *stu_strcpy(char *dest, const char *src);

int main(void)
{
    char *str_a;

    str_a = malloc(7 * sizeof(char));
    if (!str_a)
        return 1;
    stu_strcpy(str_a, "hello!");
    str_a[0] = 'b';
    str_a[4] = 'a';
    puts(str_a);
    return 0;
}
