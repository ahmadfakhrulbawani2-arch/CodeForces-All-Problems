// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int arr[3], max = 0, add = 0, maxIdx = 0;
        for(int i = 0; i < 3; i++) {
            scanf("%d", &arr[i]);
            if(max < arr[i]) {
                max = arr[i];
                maxIdx = i;
            }
        }

        switch (maxIdx)
        {
        case 0:
            add += arr[1] + arr[2];
            break;
        case 1:
            add += arr[0] + arr[2];
            break;
        case 2:
            add += arr[0] + arr[1];
            break;
        default:
            break;
        }

        int distributed = 2*max - add;
        int n;
        scanf("%d", &n);
        n -= distributed;
        if(n < 0) printf("NO\n");
        else if(n % 3 == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1294/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===



*/