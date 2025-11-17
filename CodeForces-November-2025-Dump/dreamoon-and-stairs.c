// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

#define ll long long

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    if(n < m) {
        printf("-1\n");
        return 0;
    }
    int step;
    if(n % 2 == 0) {
        step = n/2;
    } else {
        step = n/2;
        step++;
    }
    if(step % m == 0) {
        printf("%d\n", step);
    } else {
        if(step < m) {
            step = m;
            printf("%d\n", step);
        } else {
            int mod = step % m;
            step += (m - mod);
            printf("%d\n", step);
        }
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/476/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/