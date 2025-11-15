// the explanation is in the bottom
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    long long x = *(long long*)a;
    long long y = *(long long*)b;
    if(x < y) return -1;
    if(x > y) return 1;
    return 0;
}

int main(void) {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        long long *arr = malloc(n * sizeof(long long));
        for(int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }

        qsort(arr, n, sizeof(long long), cmp);

        long long max = 1, curr = 1;
        for(int i = 1; i < n; i++) {
            if(arr[i] - arr[i-1] <= k) curr++;
            else curr = 1;
            if(curr > max) max = curr;
        }

        long long res = n - max;
        printf("%lld\n", res);
        free(arr);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1850/D

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

1 3 5 12 12 17 17 20

*/