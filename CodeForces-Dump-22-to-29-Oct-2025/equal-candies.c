// the explanation is in the bottom
#include <stdio.h>

int checkMin(int min, int x) {
    if(min > x) {
        return x;
    } else return min;
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int arr[n], min = 10000000;
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            min = checkMin(min, arr[i]);
        }
        int sumEat = 0;
        for(int i = 0; i < n; i++) {
            sumEat += arr[i] - min;
        }
        printf("%d\n", sumEat);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1676/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-22-to-29-Oct-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

So easy you can understand it right?

*/