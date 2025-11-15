// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

#define ll long long
#define max(a,b) ((a > b) ? (a) : (b))

ll execute(int n, int arr[], int cost[], ll highest, ll totalC) {
    ll dp[n];
    for(int i = 0; i < n; i++) {
        dp[i] = cost[i];
        for(int j = 0; j < i; j++) {
            if(arr[j] <= arr[i]) {
                dp[i] = max(dp[i], dp[j] + cost[i]);
            }
        }
        if(dp[i] > highest) highest = dp[i];
    }

    return totalC - highest;
}

void solve() {
    int n;
    scanf("%d", &n);
    int arr[n], cost[n];
    ll totalC = 0, highest = 0;

    // input array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // input cost + totalnya
    for(int i = 0; i < n; i++) {
        scanf("%d", &cost[i]);
        totalC += cost[i];
    }

    ll res = execute(n, arr, cost, highest, totalC);
    printf("%lld", res);
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
        printf("\n");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/2167/G

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-November-2025-Dump

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

So the idea is count highest total cost of increasing subsequence.
To do that we need dp[] to store the highest total cost of increasing subsequence from index j to i. 
To store dp, we compare cost of single elements which is cost[i] with cost[j] + cost[i]. We save the highest one.
Notice we do the comparation in loop j so dp[i] will be the cumulative cost of increasing elements from index j to i as expected.
Then just pick the highest dp and the min cost is the total cost substracted by this highest dp.

pseudo-code:
totalCost = sum of all cost
dp = array of size n

for i in range(1, n):
    dp[i] = cost[i]   
    for j in range(1, i):
        if a[j] <= a[i]:
            dp[i] = max(dp[i], dp[j] + cost[i])

maxCost = maximum value in dp
answer = totalCost - maxCost
print(answer)

*/