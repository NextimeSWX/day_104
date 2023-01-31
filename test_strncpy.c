#include <stdlib.h>
#include <stdio.h>

char *stu_strncpy(char *dest,
const char *src,
unsigned int n);

int main(void)
{
    char *str_a;

    str_a = malloc(7 * sizeof(char));
    if (!str_a)
        return 1;
    stu_strncpy(str_a, "hello!", 2);
    str_a[0] = 'b';
    str_a[4] = 'a';
    puts(str_a);
    return 0;
}
