// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

#define ll long long
#define POSINF 100000000
#define NEGINF -100000000
#define FNDMIN(a, b) (a < b) ? (a) : (b)
#define FNDMAX(a, b) (a > b) ? (a) : (b)
#define ASCIIa 97
#define ASCIIz 122
#define ASCIIA 65
#define ASCIIZ 90

void solve() {
    int l, r;
    scanf("%d %d", &l, &r);
    
    if(l * 2 <= r) {
        printf("%d %d", l, 2*l);
    } else {
        printf("-1 -1");
    }
    printf("\n");
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

Link: https://codeforces.com/problemset/problem/1389/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/