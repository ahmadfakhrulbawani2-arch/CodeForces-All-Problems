// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

int main(void) {
    long long x[4];
    for (int i = 0; i < 4; i++)
        scanf("%lld", &x[i]);

    // sort 4 elemen (bubble sort sederhana cukup)
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (x[i] > x[j]) {
                long long temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    long long S = x[3]; // jumlah terbesar = a+b+c

    long long a = S - x[0];
    long long b = S - x[1];
    long long c = S - x[2];

    printf("%lld %lld %lld\n", a, b, c);

    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/1154/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/