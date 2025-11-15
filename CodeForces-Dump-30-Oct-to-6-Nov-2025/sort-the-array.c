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
    int n;
    scanf("%d", &n);
    int arr[n], arrSort[n];
    int lastIDx = n-1;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        arrSort[i] = arr[i];
    }

    qsort(arrSort, n, sizeof(int), cmp);

    int l = -1, r = -1;
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i-1]) {
            if(l == -1) l = i-1;
            r = i; 
        }
    }

    if(l == -1 && r == -1) {
        printf("yes\n1 1\n");
        return 0;
    }

    int i = l, j = r;
    while(i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] != arrSort[i]) {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n%d %d\n", l+1, r+1);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/451/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/