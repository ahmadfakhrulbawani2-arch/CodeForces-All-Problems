// the explanation is in the bottom
#include <stdio.h>
#define MAX 100000

int a[MAX + 5];
int memo[MAX + 5];
int seen[1000005]; // untuk nilai a[i] yang besar

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    int cnt = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(!seen[a[i]]) {
            seen[a[i]] = 1;
            cnt++;
        }
        memo[i] = cnt;
    }

    while(m--) {
        int l;
        scanf("%d", &l);
        printf("%d\n", memo[l - 1]);
    }
    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/368/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-November-2025-Dump

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/