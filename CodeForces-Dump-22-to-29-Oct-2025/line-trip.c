// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        int arr[n+1];
        arr[n] = x;
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int maxDis = 0;
        for(int i = 0; i < n-1; i++) {
            if(arr[i+1] - arr[i] > maxDis) {
                maxDis = arr[i+1] - arr[i];
            }
        }
        int initDis = arr[0];
        int endDis = (x - arr[n-1]) * 2;
        if(maxDis < initDis) {
            maxDis = initDis;
        }
        if(maxDis < endDis) {
            maxDis = endDis;
        }
        printf("%d\n", maxDis);
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

- Check distance from point zero to 1st gas station
- Check distance each station
- Check distance between last station to end point. But remember we go back in reverse so it must be twice

From those 3 select the biggest

*/ 