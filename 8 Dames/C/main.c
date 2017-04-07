#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "n_queen.h"

int get_n(char *num)
{
    int n;

    if ((n = atoi(num)) <= 0)
        n = 8;
    return (n);
}

int main(int argc, char *argv[])
{
    int count;
    int n;
    clock_t begin;
    clock_t end;
    double time;

    if (argc > 1)
        n = get_n(argv[1]);
    else
        n = 8;
    begin = clock();
    count = solve_Q(n);
    end = clock();
    time = (double)(end - begin) / CLOCKS_PER_SEC;
    if (count == MALLOC_ERROR)
        printf("Erreur dans l'allocation de mémoire.\n");
    else
        printf("%i possibilités trouvées en %f secondes.\n", count, time);
    return 0;
}
