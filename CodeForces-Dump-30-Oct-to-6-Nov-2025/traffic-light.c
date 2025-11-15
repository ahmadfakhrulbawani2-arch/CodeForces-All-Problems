// the explanation is in the bottom
#include <stdio.h>

void solve() {
    int n; char c;
    scanf("%d %c", &n, &c);

    char str[n+1];
    scanf("%s", str);

    if(c == 'g') {
        printf("0\n");
        return;
    }

    int second = 0, max = 0;
    for(int i = 0; i < 2 * n; i++) {
        char target = str[i % n];

        if(second > 0) {
            if(target != 'g') second++;
            else second = 0;
        } else {
            if(target == c) second++;
        }

        if(max < second) max = second;
    }

    printf("%d\n", max);
    
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/1744/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

At first I thought we print the furthest green light.
No it's not. Actually we print the furthest first green light.
So when we meet first green light, we count the distance between into second variable.
Then do it repeatedly until everything wrapped around which is 2*n times. This is due to fact that after index n-1 we go back to index 0.
And every iteration, read the max value.
Then print max value. Ofc if the current light is g then print 0.

*/