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
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            char kar;
            scanf(" %c", &kar);
            if(kar == 'A') a++;
            if(kar == 'B') b++;
            if(kar == 'C') c++;
        }
    }

    if(a == 2) printf("A\n");
    else if(b == 2) printf("B\n");
    else if(c == 2) printf("C\n");
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

Link: https://codeforces.com/problemset/problem/1915/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/