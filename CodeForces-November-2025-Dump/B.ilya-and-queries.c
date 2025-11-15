// the explanation is in the bottom
#include <stdio.h>
#include <string.h>
#define MAX 100000

char query[MAX];
int prefSum[MAX] = {0};

int main(void) {
    scanf("%s", query);
    int n;
    scanf("%d", &n);
    int m, len = strlen(query);

    for(int i = 1; i < len; i++) {
        prefSum[i] = prefSum[i-1] + (query[i] == query[i-1] ? 1 : 0);
    }
    while(n--) {
        int l, r;
        scanf("%d %d", &l, &r);
        m = prefSum[--r] - prefSum[--l];
        printf("%d\n", m);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/313/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-November-2025-Dump

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

Use dynamic programming of memoization namely prefix sum
So basically when query[i] == query[i-1] we add our answer (we save it in variable m)
So the loop basically count the prefix sum of these answer in spesific index.
And the problem want from index l-1 to r-1 (remember base of 0) so it actually the difference of this prefix sum.


*/