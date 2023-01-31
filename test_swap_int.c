#include <stdio.h>

void swap_int(int *ptr_tata, int *ptdr_toto);

int main (void )
{
    int tata ;
    int toto ;

    tata = 4;
    toto = 9651265;
    swap_int(&tata, &toto);
    if (tata == 9651265 && toto == 4) {
        puts("vous avez réussi");
    } else {
        puts("vous avez raté");
    }
    return (0);
}
