// the explanation is in the bottom
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main(void) {
    int n, m;
    scanf("%d", &n);
    int boys[n];
    for(int i = 0; i < n; i++) scanf("%d", &boys[i]);

    scanf("%d", &m);
    int girls[m];
    for(int i = 0; i < m; i++) scanf("%d", &girls[i]);

    qsort(boys, n, sizeof(int), cmp);
    qsort(girls, m, sizeof(int), cmp);

    int i = 0, j = 0, ans = 0;
    while(i < n && j < m) {
        if(abs(boys[i] - girls[j]) <= 1) {
            ans++;
            i++;
            j++;
        } else if(boys[i] < girls[j]) {
            i++;
        } else {
            j++;
        }
    }

    printf("%d\n", ans);
    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/489/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

- Sort both arrays
- Check if one of them have difference of 1 or 0
- If yes then you add the ans
- else step up the smallest between the two (because we've sort it)

*/ 