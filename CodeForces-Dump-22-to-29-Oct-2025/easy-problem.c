// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", n-1);
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

if n = 7 answer is 6

(1,6)(2,5)(3,4)(4,3)(5,2)(6,1)

n = 8 answer is 7
(1,7)(2,6)(3,5)(4,4)(5,3)(6,2)(7,1)

*/