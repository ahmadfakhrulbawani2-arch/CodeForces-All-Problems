// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        int maxVal = 0, step = 0, minVal = 1000000000; // set minVal to the highest constraint
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if(maxVal < arr[i]) {
                maxVal = arr[i];
            }
            if(minVal > arr[i]) {
                minVal = arr[i];
            }
        }
        step = maxVal - minVal;
        printf("%d\n", step);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1624/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

Find the maximum value and minimum value of the array. You can do it directly from scanf loop. Then the result is the difference. So simple

*/ 