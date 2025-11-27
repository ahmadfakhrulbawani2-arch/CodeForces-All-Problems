// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

#define ll long long
#define POSINF 100000000
#define NEGINF -100000000
#define FNDMIN(a, b) (a < b) ? (a) : (b)
#define FNDMAX(a, b) (a > b) ? (a) : (b)

void solve() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int num[101] = {0};

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[n]);
        num[arr[n]]++;
    }

    int res = 0;
    for(int i = 0; i <= 100; i++) {
        if(num[i] == i) continue;
        else if(num[i] < i) res += num[i];
        else if(num[i] > i) res += num[i] - i;
    }
    printf("%d\n", res);

}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/2157/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/