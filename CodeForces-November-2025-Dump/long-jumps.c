// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

#define ll long long
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int solve_one(int arr[], int n) {
    int dp[n + 5];
    for(int i = 0; i <= n; i++) dp[i] = 0;

    int ans = 0;

    for(int i = n; i >= 1; i--) {
        int nxt = i + arr[i];
        if(nxt > n) dp[i] = arr[i];
        else dp[i] = arr[i] + dp[nxt];
        ans = MAX(ans, dp[i]);
    }

    return ans;
}

void solve() {
    int n;
    scanf("%d", &n);

    int arr[n + 5];
    for(int i = 1; i <= n; i++) scanf("%d", &arr[i]);

    printf("%d\n", solve_one(arr, n));
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) solve();
}



/*

Link: https://codeforces.com/problemset/problem/276/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

choose i then add i with a[i] until i > n.
Goal: maximum addition of i possible.

Notice that i = i + a[i] then check if i > n
If not then we do that again i = i + a[i] again, and again. 
There's some recursion happen right?

Notice that i GROWS up to > n. So that if we solve i = n can we solve i = n-1 using i = n ? OF COURSE

[7 3 1 2 3] 

(index 1-based)
i = 5 -> i = 5 + a[5] = 5 + 3 = 8 > 5 (done)
i = 4 ...
.
.
.
i = 2 -> i = 2 + a[2] = 5 -> i = 5 + a[5] 
SEE i = 5 + a[5] is i = 5 bro!

*/