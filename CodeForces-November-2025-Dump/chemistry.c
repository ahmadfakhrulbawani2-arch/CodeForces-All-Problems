// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

void solve() {
    int n, k;
    scanf("%d %d", &n, &k);
    char s[n+1];
    scanf("%s", s);

    int freq[26] = {0};
    for(int i = 0; i < n; i++)
        freq[s[i] - 'a']++;

    int odd = 0;
    for(int i = 0; i < 26; i++)
        if(freq[i] % 2 == 1) odd++;

    if(odd - 1 <= k) printf("YES\n");
    else printf("NO\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/1883/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/