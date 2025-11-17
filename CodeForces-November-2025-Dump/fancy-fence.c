// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

#define ll long long
#define PI 3.141592653

double memo[400] = {0};

double degToRad(int a) {
    return a * (PI/180);
}

void solve() {
    int a;
    scanf("%d", &a);
    double rad = degToRad(a);
    for(int i = 3; i < 370; i++) {
        if(memo[i] == 0) {
            memo[i] = ((i - 2) * PI) / i;
        }
        if(memo[i] == rad && memo[i] <= PI) {
            printf("YES");
            return;
        }
    }
    printf("NO");
    return;
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
        printf("\n");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/270/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

if you notice that triangle have exactly sum angles of PI rads. 
Then for rectangle it's 2 PI, then pentagon it's 3 PI and so on.
So notice that minimum side is 3 sides. So i start from 3.
Also notice that maximum angle of a point in polygon is exactly <= 180 or PI rads.
And notice every point have the same angle that is sum of angles / sides

so every angles of i sided polygon is memo[i] that is ((i - 2) * PI) / i.

and to make memo[i] approaching 2 PI rads, we need about 360 sides polygon or i make it 370 and it's fine.

*/