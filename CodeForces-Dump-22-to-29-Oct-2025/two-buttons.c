#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    if(n == m) {
        printf("0");
    } else if(m < n) {
        int res = n-m;
        printf("%d", res);
    } else {
        int count = 0;
        while(m > n) {
            if(m % 2 == 0) {
                m /= 2;
            } else {
                m++;
            }
            count++;
        }

        count += (n-m);
        printf("%d", count);
    }        

    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/520/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/
