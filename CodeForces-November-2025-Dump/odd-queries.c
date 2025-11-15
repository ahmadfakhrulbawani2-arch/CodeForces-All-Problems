// the explanation is in the bottom
#include <stdio.h>

#define ll long long
#define NMAX 200000

ll prefSum[NMAX] = {0};

void outQuery(ll sum) {
    if(sum % 2 == 0) printf("NO");
    else printf("YES");
}

void query(int arr[], int n, ll sumArr) {
    int l, r, k;
    scanf("%d %d %d", &l, &r, &k);
    int cntElements = (r-l) + 1;
    // sumRange = 0;
    // for(int i = l-1; i <= r-1; i++) {
    //     sumRange += arr[i];
    // }
    ll sumRange = prefSum[r-1] - (l > 1 ? prefSum[l-2] : 0); // notice this! This is case sensitive

    ll copySum = sumArr;
    copySum -= sumRange;
    copySum += (cntElements * k);
    outQuery(copySum);
}

ll inputArr(int arr[], int q) {
    ll sum = 0; 
    for(int i = 0; i < q; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        prefSum[i] = sum;
    }
    return sum;
}

void solve() {
    int n, q;
    scanf("%d %d", &n, &q);
    int arr[n]; ll sumArr = 0;
    sumArr = inputArr(arr, n);
    while(q--) {
        query(arr, n, sumArr);
        printf("\n");
    }
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1807/D

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-November-2025-Dump

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

Calculate sum of all elements
Substract it with sum of elements in range (l,r)
Then add with (l-r+1) * k
Check even or odd
In case of TLE, use prefix sum as optimizer.

*/