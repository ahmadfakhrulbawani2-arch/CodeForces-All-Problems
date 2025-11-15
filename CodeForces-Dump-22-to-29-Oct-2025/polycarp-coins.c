// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        if(n % 3 == 0) printf("%lld %lld", n/3, n/3);
        else {
            long long c1, c2;
            if(n % 3 == 1) {
                c1 = n/3 + 1;
                c2 = n/3;
            } else {
                c1 = n/3;
                c2 = n/3 + 1;
            }
            printf("%lld %lld", c1, c2);
        }
        printf("\n");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1551/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-22-to-29-Oct-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

Use trial and errors bro, idk why.

*/