#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int sum = 0, sumMin, idx = 0;
    for(int i = 0; i < k; i++) { 
        sum += arr[i];
    }
    sumMin = sum;
    for(int i = 1; i <= n-k; i++) {
        sum += arr[i+k-1];
        sum -= arr[i-1];
        if(sumMin > sum) {
            idx = i;
            sumMin = sum;
        }
    }

    printf("%d", ++idx);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/363/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/