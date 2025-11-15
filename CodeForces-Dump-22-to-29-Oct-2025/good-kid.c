#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        int min = 10, minIdx, res = 0;
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if(min > arr[i]) { 
                min = arr[i];
                minIdx = i;
            }
        }
        arr[minIdx]++;
        int sum = 1;
        for(int i = 0; i < n; i++) {
            sum *= arr[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1873/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/