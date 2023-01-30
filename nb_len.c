#include <stdio.h>
int nb_len(int nb) {
    int i=0;
    //int n=0;

    while (nb >= 1) {
        nb = nb / 10;
        i = i + 1;
    }
    return (i);
}
