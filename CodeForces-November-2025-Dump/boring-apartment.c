// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

#define ll long long

void solve() {
    int num, factor;
    scanf("%d", &num);

    if(num < 10) {
        factor = num;
    } else if(num < 100) {
        factor = num / 11;
    } else if(num < 1000) {
        factor = num / 111;
    } else if(num < 10000) {
        factor = num / 1111;
    }

    int steps;
    if(num % 1 == 0 && num < 10) steps = 1;
    else if(num % 11 == 0 && num < 100) steps = 3;
    else if(num % 111 == 0 && num < 1000) steps = 6;
    else if(num % 1111 == 0 && num < 10000) steps = 10;

    int sum = (factor-1) * 10 + steps;
    printf("%d", sum);
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
        printf("\n");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1433/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/