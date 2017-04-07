#ifndef _N_QUEEN_H_
    #define _N_QUEEN_H_

    #include <stdbool.h>
    #define MALLOC_ERROR -1

    int check_vert(int *board, int i, int k);
    bool check_diag(int *board, int i, int k);
    int solve_Q(int n);

#endif /* _N_QUEEN_H_ */
