/*
 * E89 Pedagogical & Technical Lab
 * project:     print_base10
 * created on:  2023-01-30 - 11:05 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: print_base10.c
 */

#include <unistd.h>

int get_digit(int nb, int index);
int nb_len(int nb);

void stu_putchar (char c)
{
    write(1, &c, 1);
}


int print_base10(int nb)
{
    char print;
    int nbr;
    int j;
    int i;

    i = 0;
    if (nb < 0) {
        nb *= -1;
        stu_putchar('-');
    }
    nbr = nb_len(nb);
    nbr -= 1;
    while (nbr >= 0) {
        j = get_digit(nb, nbr);
        print = j + '0';
        nbr -= 1;
        write(1, &print, 1);
        i += 1;
    }
    return (i);
}
