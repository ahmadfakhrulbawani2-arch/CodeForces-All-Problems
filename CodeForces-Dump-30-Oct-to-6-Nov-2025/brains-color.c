// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    getchar();

    int countC = 0, countM = 0, countY = 0;

    for(int i = 0; i < n*m; i++) {
        char color;
        scanf(" %c", &color);
        switch (color) {
        case 'M':
            countM++;
            break;
        case 'Y':
            countY++;
            break;
        case 'C':
            countC++;
            break;
        default:
            break;
        }
    }

    if(countC > 0 || countM > 0 || countY > 0) printf("#Color\n");
    else printf("#Black&White\n");

    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/707/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/