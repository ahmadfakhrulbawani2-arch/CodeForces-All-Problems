// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while(t--) {
        long long n, k;
        scanf("%lld %lld", &n, &k);

        long long times = (n + k - 1) / k;   
        long long S = k * times;             

        long long res = (S + n - 1) / n;     

        printf("%lld\n", res);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1476/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

We want to find the minimum x such that:
    x * n >= max(n, k)

Because:
- Restaurant gives n burgers from 1 coupon pack
- If n >= k, 1 pack already satisfies the need
- If k > n, find the minimum multiple of n that reaches k

Formula:
    res = ceil( max(n, k) / n )

*/
