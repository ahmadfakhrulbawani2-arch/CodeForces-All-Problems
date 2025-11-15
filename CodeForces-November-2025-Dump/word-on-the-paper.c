// the explanation is in the bottom
#include <stdio.h>

void solve() {
    char str[8][9];
    char res[9], resIdx = 0;
    for(int i = 0; i < 8; i++) {
        int j;
        for(j = 0; j < 8; j++) {
            char c = getchar();
            str[i][j] = c;
            if(str[i][j] != '.') {
                res[resIdx++] = str[i][j];
            }
        }
        str[i][j] = '\0';
        getchar(); // take new line
    }
    res[resIdx] = '\0';
    printf("%s\n", res);
}

int main(void) {
    int t;
    scanf("%d", &t);
    getchar(); // take new line
    while(t--) {
        solve();
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1850/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-November-2025-Dump

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/