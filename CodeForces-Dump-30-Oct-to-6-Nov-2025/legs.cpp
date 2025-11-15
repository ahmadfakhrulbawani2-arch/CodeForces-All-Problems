// the explanation is in the bottom
#include <iostream>

int main(void) {
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        if(n <= 4) std::cout << 1 << std::endl;
        else {
            int res = n / 4;
            if(n % 4 == 0) {
                std::cout << res << std::endl;
            } else {
                res++;
                std::cout << res << std::endl;
            }
        }
    }
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/1996/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-22-to-29-Oct-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/