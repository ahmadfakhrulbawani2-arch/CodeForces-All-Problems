// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int maxSide = (a > b) ? a : b, minSide = (a < b) ? a : b;
        int s = (2 * minSide > maxSide) ? 2 * minSide : maxSide;
        int area = s * s;
        printf("%d\n", area);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1360/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-22-to-29-Oct-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

If twice of the min side is bigger than the maxside then the side of the square is the twice min side. Because the effiecient way to assemble the rectangle is by either twicing the min side or the max side.

*/