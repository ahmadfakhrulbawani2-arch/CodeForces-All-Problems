// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom
#include <iostream>

#define ll long long
#define max(a,b) ((a > b) ? (a) : (b))

void solve() {
    int n;
    std::cin >> n;
    int arr[n], strongest = 0, sIdx;
    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int max1 = -1, max2 = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2) {
            max2 = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        int res = (arr[i] == max1) ? arr[i] - max2 : arr[i] - max1;
        printf("%d ",  res);
    }
}

int main(void) {
    int t;
    std::cin >> t;
    while(t--) {
        solve();
        printf("\n");
    }
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/1760/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/

