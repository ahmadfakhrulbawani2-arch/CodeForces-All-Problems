// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

#define ll long long

int main(void) {
    int n;
    scanf("%d", &n);
    if(n == 0) {
        printf("1");
        return 0;
    }
    if(n % 4 == 0) {
        printf("6");
    } else if(n % 4 == 1) {
        printf("8");
    } else if(n % 4 == 2) {
        printf("4");
    } else if(n % 4 == 3) {
        printf("2");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/742/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

8^1 = 8
8^2 = 4
8^3 = 2
8^4 = 6
8^5 = 8

*/