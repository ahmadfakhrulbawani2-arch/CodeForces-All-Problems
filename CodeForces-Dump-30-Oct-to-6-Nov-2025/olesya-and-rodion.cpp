// the explanation is in the bottom
#include <iostream>
#include <cstring>

int main(void) {
    int n, t;
    std::cin >> n >> t;
    if(n == 1 && t == 10) {
        std::cout << -1 << std::endl;
        return 0;
    }

    int arr[n];
    memset(arr, 0, sizeof(arr));
    if(t != 10) arr[0] = t;
    else arr[0] = 1;

    for(int i = 0; i < n; i++) {
        std::cout << arr[i];
    }
    std::cout << std::endl;
    
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/318/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/