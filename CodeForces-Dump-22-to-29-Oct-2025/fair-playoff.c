// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int s1, s2, s3, s4;
        scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
        int w12 = (s1 > s2) ? s1 : s2, w34 = (s3 > s4) ? s3 : s4;
        int l1 = (s1 < s2) ? s1 : s2, l2 = (s3 < s4) ? s3 : s4;
        if(w12 < l2 || w34 < l1) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1535/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-22-to-29-Oct-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

Save the winner and the loser. If one of the winner is less than the loser immediately printf NO\n;

*/