#include <stdlib.h>
#include <stddef.h>
#include "n_queen.h"
#include <stdio.h>

int check_vert(int *board, int i, int k)
{
    int j = 0;

    while (j < i)
    {
        if (k == board[j])
        {
            k++;
            j = -1;
        }
        j++;
    }
    return (k);
}

bool check_diag(int *board, int i, int k)
{
    int j = 0;

    while (j < i)
    {
        if (((board[j] - (i - j)) == k)
            || ((board[j] + (i - j)) == k))
            return (false);
        j++;
    }
    return (true);
}

/* n : taille du plateau et nombre de reines */
int solve_Q(int n)
{
    int *board;
    if ((board = malloc(sizeof(int) * n)) != NULL)  /* board est le plateau de jeu */
    {
        int i = 0;
        int k = 1;
        int count = 0;				/* count le nombre de combinaisons trouv�es */
        int count2 = 0;				/* nombre d'it�rations faites pour trouver la solution */

        /* board[i] = k; <-- la reine se trouve ligne i, colone k */

        /* initialisation de la premiere case */
        board[0] = 1;
        while (i < n && board[0] <= n)
        {
            count2++;
            if (k <= n)
            {
                k = check_vert(board, i, k);			/* v�rification si la case k peut �tre utilis�e (verticalement) */
                if ((k <= n) && check_diag(board, i, k))	/* v�rification si la case k peut �tre utilis�e (diagonale) */
                {
                    board[i] = k;						/* si c'est bon, la case i est mise � jour */
                    if (i == n - 1)							/* si on est � la derniere ligne (et donc qu'une combinaison a �t� trouv�e) */
                    {
                        count++;						/* une combinaison de plus */
                        k = board[i - 1] + 1;			/* on repart de la ligne pr�c�dente en augmentant k */
                        i--;
                    }
                    else
                    {
                        i++;							/* si on est pas � la derniere ligne, on r�initialise k � 1 et on recommence les tests pour la ligne suivante */
                        k = 1;
                    }
                }
                else
                    k++;								/* si la case n'est pas bonne ni verticalement ni horizontalement, case suivante */
            }
            else										/* si on a d�pass� la taille du plateau (verticalement) */
                if (i > 0)
                {
                    k = ++board[i - 1];					/* on repart de la ligne pr�c�dente en augmentant k */
                    i--;
                }
        }
        free(board);
        return (count);
    }
    else
        return (MALLOC_ERROR);
}
