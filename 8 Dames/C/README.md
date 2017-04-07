Résolution du problème des 8 dames en C

Compilation :

mingw32-gcc.exe -Wall -O3 -pedantic-errors -Wextra -Wall -std=c99 -c n_queens\main.c -o obj\Release\main.o

mingw32-gcc.exe -Wall -O3 -pedantic-errors -Wextra -Wall -std=c99 -c n_queens\n_queen.c -o obj\Release\n_queen.o

mingw32-g++.exe -o bin\Release\n_queens.exe obj\Release\main.o obj\Release\n_queen.o -s

Output file is bin\Release\n_queens.exe with size 33.00 KB

Process terminated with status 0 (0 minute(s), 1 second(s))

0 error(s), 0 warning(s) (0 minute(s), 1 second(s))

Possibilité de résoudre le problème avec n dames à placer sur un échiquier de n x n cases

Explication du problème selon le site Wikipédia :

"Le but du problème des huit dames est de placer huit dames d'un jeu d'échecs sur un échiquier de 8 × 8 cases sans que les dames ne puissent se menacer mutuellement, conformément aux règles du jeu d'échecs (la couleur des pièces étant ignorée). Par conséquent, deux dames ne devraient jamais partager la même rangée, colonne, ou diagonale. Ce problème appartient au domaine des problèmes mathématiques et non à celui de la composition échiquéenne."

https://fr.wikipedia.org/wiki/Probl%C3%A8me_des_huit_dames
