#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if(n > 0) printf("%d\n", n);
    else {
        n *= -1;
        int lastDigit = n % 10;
        int secondLast = (n/10) % 10;
        if(lastDigit > secondLast) {
            n /= 10;
        } else {
            n -= secondLast * 10;
            n /= 10;
            n += lastDigit;
        }
        n *= -1;
        printf("%d\n", n);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/313/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/