// the explanation is in the bottom
#include <iostream>

int main(void) {
    int a, b;
    std::cin >> a >> b;
    int res = 0, mod = 0;
    while(a > 0) {
        res += a;
        mod += a;
        a = mod / b;
        mod %= b;
    }    
    std::cout << res << std::endl;
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/379/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/