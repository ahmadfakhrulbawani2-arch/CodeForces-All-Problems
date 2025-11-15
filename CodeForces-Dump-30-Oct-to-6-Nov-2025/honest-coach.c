// the explanation is in the bottom
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(int*) a;
    int y = *(int*) b;
    if(x < y) return -1;
    if(x > y) return 1;
    return 0;
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        if(n == 2) {
            if(arr[0] < arr[1]) {
                printf("%d\n", arr[1] - arr[0]);
            } else {
                printf("%d\n", arr[0] - arr[1]);
            }
            continue;
        }

        qsort(arr, n, sizeof(int), cmp);
        int diff = 1000;
        for(int i = 1; i < n; i++) {
            if(arr[i] - arr[i-1] < diff) {
                diff = arr[i] - arr[i-1];
            }
        }

        printf("%d\n", diff);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1360/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

1 2 3 4 6 

*/