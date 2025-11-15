// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int sumA = 0, sumB = 0, sumC = 0;
    for(int i = 0; i < n; i++) {
        int d;
        scanf("%d", &d);
        sumA += d;
    }

    for(int i = 0; i < n-1; i++) {
        int d;
        scanf("%d", &d);
        sumB += d;
    }
    int firstNum = sumA - sumB;

    for(int i = 0; i < n-2; i++) {
        int d;
        scanf("%d", &d);
        sumC += d;
    }

    int secondNum = sumB - sumC;
    printf("%d\n%d", firstNum, secondNum);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/519/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-November-2025-Dump

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

it's eezz.

*/