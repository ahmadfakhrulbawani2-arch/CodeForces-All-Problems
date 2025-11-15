// the explanation is in the bottom
#include <stdio.h>

void ascSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void descSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        int a[n], b[n];
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        for(int i = 0; i < n; i++) scanf("%d", &b[i]);
        ascSort(a, n);
        descSort(b, n);
        int sum = 0;
        for(int i = 0; i < k; i++) {
            if(a[i] < b[i]) a[i] = b[i];
            else break;
        }
        for(int i = 0; i < n; i++) {
            sum += a[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1353/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-22-to-29-Oct-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/