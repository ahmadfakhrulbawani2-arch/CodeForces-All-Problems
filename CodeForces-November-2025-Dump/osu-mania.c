// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

#define ll long long

void solve();

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
        printf("\n");
    }
    return 0;
}

void solve() {
    int len;
    scanf("%d", &len);
    char str[len][5];
    for(int i = 0; i < len; i++) {
        scanf("%s", str[i]);
    }
    for(int i = len-1; i >= 0; i--) {
        char *target = strchr(str[i], '#');
        int index = target - str[i];
        printf("%d ", ++index);
    }
}


/*

Link: https://codeforces.com/problemset/problem/276/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-November-2025-Dump

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/