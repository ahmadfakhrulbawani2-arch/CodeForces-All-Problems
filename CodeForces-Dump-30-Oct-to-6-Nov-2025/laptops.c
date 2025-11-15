// the explanation is in the bottom
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int *rowA = (int*)a;
    int *rowB = (int*)b;
    return rowA[0] - rowB[0];  // urut berdasarkan harga laptop
}

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n][2];
    int valid = 1;

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i][0], &a[i][1]); // [0]=harga, [1]=kualitas
    }

    // qsort cukup dilakukan sekali setelah input selesai
    qsort(a, n, sizeof(a[0]), cmp);

    for (int i = 1; i < n; i++) {
        if (a[i][1] < a[i - 1][1]) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Poor Alex\n");
    else
        printf("Happy Alex\n");

    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/456/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/