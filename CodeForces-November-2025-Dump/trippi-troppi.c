// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>
#include <string.h>

#define ll long long

void solve() {
    char s[40];
    fgets(s, sizeof(s), stdin);
    int len = strlen(s), initIdx = 1; char initial[20];
    initial[0] = s[0];
    for(int i = 1; i < len; i++) {
        if(s[i] == ' ') {
            initial[initIdx++] = s[i+1];
        } else continue;
    }
    initial[initIdx] = '\0';
    printf("%s\n", initial);
}

int main(void) {
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        solve();
    }
    
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/276/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/