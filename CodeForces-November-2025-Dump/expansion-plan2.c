// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>
#include <math.h>

#define ll long long
#define POSINF 100000000
#define NEGINF -100000000
#define FNDMIN(a, b) (a < b) ? (a) : (b)
#define FNDMAX(a, b) (a > b) ? (a) : (b)

int cekValid(int x0, int y0, int maxHtm, int n) { 

    if (x0 <= maxHtm && y0 <= maxHtm) return 1;

    if (x0 > n || y0 > n) return 0;

    if (x0 <= maxHtm) {
        return y0 <= n;
    }

    int excess = x0 - maxHtm;  
    int maxEdgeY = n - excess; 

    if (maxEdgeY < 0) return 0;

    return y0 <= maxEdgeY;
}


int banyak4(char exp[], int n) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        if(exp[i] == '4') res++;
    }
    return res;
}

void solve() {
    int n, x0, y0;
    scanf("%d %d %d", &n, &x0, &y0);
    char exp[n];
    scanf("%s", exp);

    x0 = abs(x0); y0 = abs (y0);
    
    int cnt4 = banyak4(exp, n);
    int maxHtm = n - cnt4;

    int res = cekValid(x0, y0, maxHtm, n);

    if(res) printf("YES");
    else printf("NO");
    printf("\n");
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

Link: https://codeforces.com/problemset/problem/2157/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===


*/