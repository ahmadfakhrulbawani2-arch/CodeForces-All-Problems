// the explanation is in the bottom
#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        char str[35];
        scanf("%s", str);
        int len = strlen(str), countA = 0, countB = 0;
        for(int i = 0; i < len; i++) {
            if(str[i] == 'A') countA++;
            else countB++;
        }
        if(countA > countB) printf("A\n");
        else printf("B\n");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1926/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

This is easy, you only need the input and check every letter, if it's A, then countA++, else it must be B so countB++. Then from both of them print the biggest

*/