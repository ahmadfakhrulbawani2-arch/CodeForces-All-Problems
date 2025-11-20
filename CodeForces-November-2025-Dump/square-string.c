// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>
#include <string.h>

#define ll long long

void solve(void) {
    char s[101];
    scanf("%s", s);
    int len = strlen(s);
    if(len % 2 != 0) {
        printf("NO\n");
        return 0;
    }

    int mid = len / 2, valid = 1;
    for(int i = 0; i < mid; i++) {
        if(s[i] != s[i+mid]) {
            valid = 0;
            break;
        }
    }

    if(valid) {
        printf("YES\n");
    } else printf("NO\n");
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

Link: https://codeforces.com/problemset/problem/1619/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/