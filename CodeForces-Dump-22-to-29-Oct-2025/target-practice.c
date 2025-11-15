#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        char grid[10][11];
        int sumPoint = 0;

        for (int i = 0; i < 10; i++) {
            scanf("%s", grid[i]);
        }

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int layerV = i;
                    if(layerV > 9 - i) layerV = 9 - i;

                    int layerH = j;
                    if(layerH > 9 - j) layerH = 9 - j;
                    
                    if(layerH < layerV) {
                        sumPoint += layerH+1;
                    } else {
                        sumPoint += layerV+1;
                    }
                }
            }
        }

        printf("%d\n", sumPoint);
    }
    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/1873/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/