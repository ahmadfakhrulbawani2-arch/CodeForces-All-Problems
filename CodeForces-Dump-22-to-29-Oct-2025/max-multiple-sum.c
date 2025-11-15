// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int best_x = 2;
        int max_sum = 0;
        
        for (int x = 2; x <= n; x++) {
            int k = n / x;
            int sum = x * k * (k + 1) / 2;
            if (sum > max_sum) {
                max_sum = sum;
                best_x = x;
            }
        }
        printf("%d\n", best_x);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/318/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-22-to-29-Oct-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/