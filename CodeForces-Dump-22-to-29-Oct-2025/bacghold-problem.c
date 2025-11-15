// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int count2;
    if(n % 2 == 0) {
        count2 = n /= 2;
        printf("%d\n", count2);
    } else {
        count2 = (n-3) / 2;
        printf("%d\n", count2+1);
        printf("3 ");
    }
    for(int i = 0; i < count2; i++) printf("2 ");
    printf("\n");
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/749/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-22-to-29-Oct-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

So if the n is even, print 2 n / 2 times. If odd, change one 2 into three. Print 3 first is fine, you can print in any order.

*/