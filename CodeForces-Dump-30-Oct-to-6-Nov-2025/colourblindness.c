// the explanation is in the bottom
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        char str[n+1];
        char str2[n+1];
        scanf("%s", str);
        scanf("%s", str2);
        bool yes = true;
        for(int i = 0; i < n; i++) {
            if(((str[i] == 'G' || str[i] == 'B') && (str2[i] == 'G' || str2[i] == 'B')) || (str[i] == str2[i])) yes = true;
            else {
                yes = false;
                break;
            }
        }
        if(yes) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1722/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/