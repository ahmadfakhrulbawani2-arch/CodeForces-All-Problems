// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

#define ll long long
#define POSINF 100000000
#define NEGINF -100000000
#define FNDMIN(a, b) (a < b) ? (a) : (b)
#define FNDMAX(a, b) (a > b) ? (a) : (b)
#define ASCIIa 97
#define ASCIIz 122
#define ASCIIA 65
#define ASCIIZ 90

void encode() {
    int n;
    scanf("%d", &n);
    int arr[n]; char encoded[n+1];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        int val = arr[i] + (ASCIIa - 1);
        encoded[i] = val;
    }

    encoded[n] = '\0';
    printf("%s\n", encoded);
}

void decode() {
    char str[100000];
    scanf("%s", str);
    int len = strlen(str);
    printf("%d\n", len);
    for(int i = 0; i < len; i++) {
        printf("%d ", str[i] - (ASCIIa - 1));
    }
    printf("\n");
}

int main(void) {
    char cmd[10];
    scanf("%s", cmd);

    if(strcmp(cmd, "first") == 0) {
        encode();
    }

    if(strcmp(cmd, "second") == 0) {
        decode();
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/276/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

So this is very confusing problem at first.

*/