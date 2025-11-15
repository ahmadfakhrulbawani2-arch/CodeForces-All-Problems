// the explanation is in the bottom
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a == b) {
            if(c % 2 == 1) {
                printf("First");
            } else printf("Second");
        } else {
            a += c;
            b += c;
            if(a > b) printf("First");
            else printf("Second");
        }
        printf("\n");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1858/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-22-to-29-Oct-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

Only who have more button will win. If a == b, they will have equal amount of button and the winner is who press the last button. U can determine using odd or even.

*/