// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

#define ll long long
#define MAX(a, b) ((a > b) ? a : b)

int solve();

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int val = solve();
        printf("%d", val);
        printf("\n");
    }
    return 0;
}


int solve() {
    int len;
    scanf("%d", &len);
    char str[len]; int best = 0;
    for(int i = 0; i < len; i++) {
        scanf(" %c", &str[i]);
        int val = str[i] - 'a';
        best = MAX(best, val);
    }
    return best+1;
}

/*

Link: https://codeforces.com/problemset/problem/1760/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-November-2025-Dump

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/