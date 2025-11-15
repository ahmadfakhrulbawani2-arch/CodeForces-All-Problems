// the explanation is in the bottom
#include <iostream>

int main(void) {
    int t;
    std::cin >> t;
    while(t--) {
        int n, x;
        std::cin >> n; std::cin >> x;
        int coor;
        if(n > 2) {
            coor = (n-2) / x;
            if((n-2) % x != 0) {
                coor++;
            }
            coor++;
        } else {
            coor = 1;
        }
        std::cout << coor << std::endl;
    }
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/318/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-22-to-29-Oct-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/