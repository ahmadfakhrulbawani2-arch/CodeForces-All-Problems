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
    int n;
    scanf("%d", &n);
    int maxQual = -1, idx; int i;

    for(i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a <= 10) {
            maxQual = FNDMAX(maxQual, b);
            if(maxQual == b) {
                idx = i;
            }
        }
    }
    printf("%d\n", idx + 1);
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

Link: https://codeforces.com/problemset/problem/276/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/