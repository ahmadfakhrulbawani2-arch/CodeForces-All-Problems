#include <iostream>

int main(void) {
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        int answer = 0;
        while(n != 1) {
            int timesTwoModSix = (n*2) % 6;
            if(n % 6 == 0) {
                n /= 6;
            } else if(timesTwoModSix == 0) {
                n *= 2;
            } else if(timesTwoModSix != 0) {
                answer = -1;
                break;
            }
            answer++;
        }
        std::cout << answer << std::endl;
    }
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/1374/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25


Sometimes I forgot to change the link. Sorry
*/