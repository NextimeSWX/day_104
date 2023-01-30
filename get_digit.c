#include <stdio.h>

int get_digit(int nb, int index)
{
    int i;

    i = 0;
    while (i < index) {
        nb /= 10;
        i += 1;
    }
    nb %= 10;
    return (nb);
}
