// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ll long long

void outQueries(int arr[], ll pref[], int n) {
    ll tot = 0;
    for(int i = 0; i < n; i++) {
        tot += (arr[i] * pref[i]);
    }
    printf("%lld", tot);
}

int cmp(const void *a, const void *b) {
    int x = *(ll*) a; int y = *(ll*) b;
    if(x < y) return -1;
    if(x > y) return 1;
    return 0;
}

int cmp2(const void *a, const void *b) {
    int x = *(int*) a; int y = *(int*) b;
    if(x < y) return -1;
    if(x > y) return 1;
    return 0;
}

void inputQuery(ll freqQuery[]) {
    int l, r;
    scanf("%d %d", &l, &r);
    freqQuery[l]++; freqQuery[r+1]--; // notice r+1 here, it's case sensitive. This is because the adding is stopped AFTER r.
}

void inputArr(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    return;
}

int main(void) {
    int n, q;
    scanf("%d %d", &n, &q);
    int arr[n];
    inputArr(arr, n); 
    ll freqQuery[n+1], prefSum[n+1];
    memset(freqQuery, 0, sizeof(freqQuery));
    memset(prefSum, 0, sizeof(prefSum));

    int i = 1;
    while(q--) {
        inputQuery(freqQuery);
    }
    for(int i = 1; i <= n; i++) {
        prefSum[i] = prefSum[i-1] + freqQuery[i];
    }

    qsort(prefSum+1, n, sizeof(ll), cmp); // notice this is sometimes case sensitive. We add 1 because we start prefsum from 1. In some case this is fine, but we'll not take the risk.
    qsort(arr, n, sizeof(int), cmp2);

    outQueries(arr, prefSum+1, n); // notice this is again. So syncronize it btw.
    printf("\n");

    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/276/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-November-2025-Dump

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

What you need to do is to sort the array based on how many the position which is index of the array are queried.
So the biggest position freq will be the position of the biggest elements and so on the way we sort it.
But you don't need to arrange the whole array. We use our common sense.
Like I said, the biggest freq of position is the position the biggest elements.
So count the freq of the position but collab it with prefSum. This is because the actual freq of position-i is prefSum[i] btw. Notice codeforces use indice from 1 so prefSum will be 1-based.
After that just multiplied the elements with corresponding prefSum. Try to understand the problem deeply to understand this concept.

*/