// the explanation is in the bottom
#include <stdio.h>
#include <string.h>

#define MAX 3005
#define LEN 15

char a[MAX][LEN], b[MAX][LEN];
char lect[MAX][LEN];

void inputLang(int m) {
    for(int i = 0; i < m; i++) {
        scanf("%s %s", a[i], b[i]);
    }
    return;
}

void inputLect(int n) {
    for(int i = 0; i < n; i++) {
        scanf("%s", lect[i]);
    }
    return;
}

void mainOut(int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(strcmp(lect[i], a[j]) == 0 || strcmp(lect[i], b[j]) == 0) {
                int lenA = strlen(a[j]), lenB = strlen(b[j]);
                if(lenA <= lenB) printf("%s ", a[j]);
                else printf("%s ", b[j]);
                break;
            }
        }
    }
}

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    inputLang(m);
    inputLect(n);

    mainOut(n, m);

    printf("\n");
    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/318/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-November-2025-Dump

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/