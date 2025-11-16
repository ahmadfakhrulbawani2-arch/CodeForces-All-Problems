// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

#define ll long long

void solve() {
    int n;
    scanf("%d", &n);
    int x = 0, y = 0, valid = 0;
    char str[n+1];
    scanf("%s", str);
    for(int i = 0; i < n; i++) {
        char c = str[i];
        switch (c)
        {
        case 'U':
            y++;
            break;
        case 'D':
            y--;
            break;
        case 'R':
            x++;
            break;
        case 'L':
            x--;
            break;
        default:
            break;
        }
        if(x == 1 && y == 1) {
           printf("YES\n");
            valid = 1;
            break;
        }
    }
    if(valid == 0) {
        printf("NO\n");
    }
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

Link: https://codeforces.com/problemset/problem/1791/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/