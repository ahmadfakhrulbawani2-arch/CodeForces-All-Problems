// the explanation is in the bottom
#include <iostream>
#include <math.h>

int main(void) {
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        long long total = 0;
        for(int i = 0; i < n; i++) {
            int num;
            std::cin >> num;
            total += num;
        }

        long long sq = sqrt(total);
        if(sq * sq == total) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/1915/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/