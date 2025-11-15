// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

#define ll long long

void solve() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int j = 0;
    int cek = 0, valid = 0, x, y, z;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(i >= 2) {
            cek = (arr[j] < arr[j+1] && arr[j+1] > arr[j+2]) ? 1 : 0;
            if(cek == 1) {
                valid = 1;
                x = j; y = j+1; z = j+2;
            }
            j++;
        }
    }
    if(valid) {
        printf("YES\n");
        printf("%d %d %d", x+1, y+1, z+1);
    } else {
        printf("NO");
    }
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

Link: https://codeforces.com/problemset/problem/1380/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-November-2025-Dump

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

So check use sliding window-like technique.
Basically u check 3 position after input 3 elements you start check it and every time arr[i] < arr[j] && arr[j] > arr[k] true we print the index i, j, k (this case I use x, y, z) and don't forget to print 1-based (it's codeforce bruh)

*/