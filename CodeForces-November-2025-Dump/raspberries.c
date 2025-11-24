// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

#define MIN(a, b) ((a < b) ? a : b)

void solve() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    int even = 0;
    int res = k;
    int countMod1 = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % k == 0)
            res = 0;

        if (k != 4)
            res = MIN(res, (k - (arr[i] % k)) % k);

        if (arr[i] % 2 == 0)
            even++;
        if(arr[i] % 4 == 3) countMod1++;
    }

    if (k == 4) {
        if (res == 0) {
            // sudah ada yang habis dibagi 4
        } else if (even >= 2) {
            res = 0;
        } else if (even == 1) {
            res = MIN(res, 1);
        } else if(even == 0) {
            if(countMod1 > 0) res = MIN(res, 1);
            else {
            res = MIN(res, 2);
            }
        } else {
            res = MIN(res, 2);
        }
    }

    printf("%d\n", res);
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/1883/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/