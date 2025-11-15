// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    int sumCurr = 0;
    for(int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        sumCurr += a;
        arr[i] = sumCurr;
    }
    

    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        int b; 
        scanf("%d", &b);
        int lo = 0, hi = n-1;
        while(lo < hi) {
            int mid = lo + (hi - lo)/2;
            if(arr[mid] < b) 
                lo = mid + 1;
            else 
                hi = mid;
        }
        printf("%d\n", ++lo);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/474/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/