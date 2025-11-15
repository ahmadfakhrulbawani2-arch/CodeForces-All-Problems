#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int h, m;
        scanf("%d %d", &h, &m);
        int minBefore = h*60 + m;
        int diff = 1440 - minBefore;
        printf("%d\n", diff);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1283/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/