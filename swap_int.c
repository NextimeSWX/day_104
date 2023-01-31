void swap_int(int *ptr_tata, int *ptr_toto)
{
    int a = *ptr_tata;
    int b = *ptr_toto;
    *ptr_tata = b;
    *ptr_toto = a;
}
