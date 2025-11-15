// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        if(n % 2020 == 0 || n % 2021 == 0) printf("YES");
        else if(n / 2020 >= n % 2020) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1475/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-22-to-29-Oct-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

So to count how may 2021 we need, it must not exceed n / 2020. Why?
E.g. 8083 if you divide it by 2020 you get 4. 
And if you mod 8083 by 2020 you get 3.
Because 4 > 3, then it's valid

*/