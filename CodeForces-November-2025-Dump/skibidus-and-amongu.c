// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>
#include <string.h>

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
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    char last2[3];
    strcpy(last2, str + len-2);
    if(strcmp(last2, "us") == 0) {
        str[len-2] = 'i';
        str[len-1] = '\0';
        printf("%s", str);
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