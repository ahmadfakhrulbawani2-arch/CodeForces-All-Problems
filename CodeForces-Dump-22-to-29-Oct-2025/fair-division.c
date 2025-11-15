// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, count1 = 0, count2 = 0, sum = 0;
        scanf("%d", &n);
        while(n--) {
            int a;
            scanf("%d", &a);
            sum += a;
            if(a == 1) count1++;
            else count2++;
        }
        if(sum % 2 == 0 && !(count1 == 0 && count2 % 2 == 1)) {
            printf("YES\n");
        } else printf("NO\n");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/318/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===



*/