#include <stdio.h>
#include <stdlib.h>

char *stu_strdup(const char *src);

int main(void)
{
    char *str_a;
    char *str_b;

    str_a = malloc(7 * sizeof(char));
    if (!str_a)
        return 1;
    str_b = stu_strdup("dydou");
    puts(str_b);
    return 0;

}
