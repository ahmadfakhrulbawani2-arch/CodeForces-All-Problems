// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom
#include <iostream>

#define ll long long

void solve() {
    int n, a, b, cost;
    std::cin >> n >> a >> b;
    if(b > 2*a) {
        cost = n * a;
    } else {
        if(n % 2 == 0) {
            cost = (n/2) * b;
        } else {
            cost = (n/2) * b;
            cost += a;
        }
    }
    std::cout << cost;
}

int main(void) {
    int t;
    std::cin >> t;
    while(t--) {
        solve();
        std::cout << std::endl;
    }
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/318/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/